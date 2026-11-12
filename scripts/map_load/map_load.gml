/// @param filename,room_name
/*
	RECONSTRUIDO a partir de gml_Script_map_load em NYKRA.exe (YYC), nao e o fonte original.
	Roteiro usado: rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/gml_Script_map_load.trace.txt
	Os comentarios "L<n>" indicam a linha do GML original informada pelo executavel (no fonte
	original esta funcao ficava no mesmo arquivo de _SET_SCENE, a partir da linha 217).
	Nomes de variaveis de instancia e de funcoes embutidas vieram do binario; nomes de
	variaveis locais sao meus, porque o YYC nao os preserva.

	A parte que LE o arquivo (L242-L262, L289-L464) foi conferida contra os 183 .rmlvl pelo
	validate_rmlvl.py. Os trechos marcados com CONFERIR sao logica de jogo em que o rastreio
	automatico deixou duvida; antes de confiar neles, olhar o .c correspondente.
*/
function map_load(argument0, argument1) {

	// L217-L218
	draw_texture_flush();
	instance_activate_all();

	// L220-L221
	file_current = argument1;
	CURRENTROOM = argument1;

	// L223-L225 CONFERIR: uma variavel de self e zerada em L223 (nao identificada) e
	// keyboard_string recebe o nome do arquivo (uso do editor de niveis).
	keyboard_string = file_current;

	// L225-L238: centraliza a camera no jogador antes de trocar de mapa
	if instance_exists(oCamera) {
		if instance_exists(oPlayer) {
			oCamera.x = oPlayer.x;
			oCamera.y = oPlayer.y;
			oCamera.xx = oPlayer.x;
			oCamera.yy = oPlayer.y;
			camera_set_view_pos(cam, oCamera.x-(camera_get_view_width(cam)/2), oCamera.y-(camera_get_view_height(cam)/2));
			oCamera.mv = 0;
			oCamera.mh = 0;
			oCamera.alarm[0] = 1;
			// L237-L238 CONFERIR: oPlayer.depth recebe um valor e um with(oPlayer) altera
			// depth de novo; os valores nao foram recuperados.
		}
	}

	// L242-L245
	var buff = buffer_load(argument0);
	map_n = buffer_read(buff, buffer_u8);
	mw = buffer_read(buff, buffer_u8);
	mh = buffer_read(buff, buffer_u8);

	// L247-L253 CONFERIR: recentraliza a camera no meio do mapa (mw*8, mh*8 = metade em
	// pixels com tiles de 16). O rastreio mostra mean() entre a posicao atual e o centro;
	// os argumentos exatos de camera_set_view_pos nao ficaram claros.
	oCamera.x = mean(oCamera.x, mw*8);
	oCamera.y = mean(oCamera.y, mh*8);
	oCamera.xx = mean(oCamera.xx, mw*8);
	oCamera.yy = mean(oCamera.yy, mh*8);
	camera_set_view_pos(cam, oCamera.x-(camera_get_view_width(cam)/2), oCamera.y-(camera_get_view_height(cam)/2));
	oCamera.mv = 0;
	oCamera.mh = 0;

	// L257-L262
	planet = buffer_read(buff, buffer_u8);
	CURRENT_PLANET = planet; // L258 CONFERIR: o destino e uma global lida no inicio da funcao
	horizon = buffer_read(buff, buffer_u8);
	buffer_read(buff, buffer_u8);
	buffer_read(buff, buffer_u8);
	buffer_read(buff, buffer_u8);

	// L266-L269: zera a grade (note o <=, uma coluna e uma linha a mais)
	for (var i = 0; i <= mw; i++) {
		for (var j = 0; j <= mh; j++) {
			map[i, j] = 0;
		}
	}

	// L275-L281
	clear_objects();
	with (oAenox_bound) instance_destroy();
	if instance_exists(oPlayer) {
		with (oPlayer) {
			UI_SMELT = 0;
			UI_CRAFT = 0;
		}
	}

	// L289-L300: camada 0 = grade `map`; cada celula nao-zero cria o bloco correspondente.
	// map_id[v, 4] e o objeto do bloco e map_id[v, 5] a profundidade (indices lidos do
	// binario; CONFERIR a ordem dos dois ultimos argumentos de instance_create_depth).
	for (var i = 0; i < mw; i++) {
		for (var j = 0; j < mh; j++) {
			var v = buffer_read(buff, buffer_u16);
			if v!=0 {
				map[i, j] = v;
				if map_id[v, 4]!=noone {
					if instance_position(i*16, j*16, map_id[v, 4])==noone {
						instance_create_depth(i*16, j*16, map_id[v, 5], map_id[v, 4]);
					}
				}
			}
			else map[i, j] = 0;
		}
	}

	// L305-L312: seis tilemaps
	for (var l = 0; l < array_length(_layer); l++) {
		var lay = layer_get_id(_layer[l]);
		var tm = layer_tilemap_get_id(lay);
		tilemap_clear(tm, 0);
		for (var i = 0; i < mw; i++) {
			for (var j = 0; j < mh; j++) {
				var v = buffer_read(buff, buffer_u16);
				if v!=noone tilemap_set(tm, v, i, j); // L311: o original compara com -4
			}
		}
	}

	// L315-L351: as duas listas de assets
	for (var a = 0; a < 2; a++) {
		if ds_exists(oControl.asset_list[a], ds_type_list) {
			for (var l = 0; l < ds_list_size(oControl.asset_list[a]); l++) {
				layer_sprite_destroy(ds_list_find_value(oControl.asset_list[a], l));
			}
			ds_list_destroy(oControl.asset_list[a]);
		}
		oControl.asset_list[a] = -1;
		oControl.asset_list[a] = ds_list_create();
		var lay = layer_get_id(oControl.asset_layer[a]);
		var n_assets = buffer_read(buff, buffer_u16);
		for (var l = 0; l < n_assets; l++) {
			var ax = buffer_read(buff, buffer_u16);
			var ay = buffer_read(buff, buffer_u16);
			var aname = buffer_read(buff, buffer_string);
			ds_list_add(oControl.asset_list[a], layer_sprite_create(lay, ax, ay, asset_get_index(aname)));
		}
	}

	// L355-L367: destroi os objetos do mapa anterior, menos os persistentes
	for (var l = 0; l < ds_list_size(obj_list); l++) {
		var o = ds_list_find_value(obj_list, l);
		if instance_exists(o) {
			if o.persistent!=1 {
				with (o) instance_destroy();
			}
		}
	}
	with (oAenox_bound) instance_destroy();
	ds_list_destroy(obj_list);
	obj_list = ds_list_create();
	collision_list = 0;
	var collision_n = 0;

	// L369-L464: objetos
	var n_objects = buffer_read(buff, buffer_u16);
	for (var l = 0; l < n_objects; l++) {
		// L376: para se o arquivo acabar (a quantidade gravada pode ser maior que a real)
		if buffer_tell(buff) >= buffer_get_size(buff) break;

		// L380-L383
		var ox = buffer_read(buff, buffer_s16);
		var oy = buffer_read(buff, buffer_s16);
		var od = buffer_read(buff, buffer_s16);
		var oname = buffer_read(buff, buffer_string);
		if asset_get_index(oname)!=-1 {
			// L385-L387
			var o = instance_create_depth(ox, oy, od, asset_get_index(oname));
			ds_list_add(obj_list, o);
			if object_is_ancestor(o.object_index, parEntity) {
				collision_list[collision_n] = o;
				collision_n += 1;
			}

			if asset_get_index(oname)==PATH {
				// L390-L392
				o.n = buffer_read(buff, buffer_u8);
				o.rm = buffer_read(buff, buffer_string);
			}
			else
			if object_is_ancestor(o.object_index, parLootable) {
				// L396-L404
				o.locked = buffer_read(buff, buffer_u16);
				var n_items = buffer_read(buff, buffer_u16);
				ds_list_clear(o.INV);
				ds_list_clear(o.INV_N);
				for (var k = 0; k < n_items; k++) {
					var item = buffer_read(buff, buffer_u16);
					var amount = buffer_read(buff, buffer_u16);
					inv_add_obj(item, amount, o);
				}
			}
			else
			if object_is_ancestor(asset_get_index(oname), parDoor_out) {
				// L409-L410
				o.locked = buffer_read(buff, buffer_u8);
			}
			else
			if object_is_ancestor(asset_get_index(oname), parDoor_Flat) {
				// L414-L417
				o.locked = buffer_read(buff, buffer_u8);
				o.n = buffer_read(buff, buffer_u8);
				o.rm = buffer_read(buff, buffer_string);
			}
			else
			if asset_get_index(oname)==oRoof_angle {
				// L421-L425
				o.width = buffer_read(buff, buffer_u16);
				o.repeat_t = buffer_read(buff, buffer_u16);
				o.material = buffer_read(buff, buffer_u8);
				o.dir = buffer_read(buff, buffer_s16);
			}
			else
			if object_is_ancestor(asset_get_index(oname), parNote) {
				// L429-L431
				var ntext = buffer_read(buff, buffer_string);
				var npage = buffer_read(buff, buffer_u8);
				o.text = real_string(ntext);
				o.page = npage;
			}
			else
			if object_is_ancestor(asset_get_index(oname), oBook) || asset_get_index(oname)==oBook {
				// L435-L437
				o.book = buffer_read(buff, buffer_u8);
				o.book_text = buffer_read(buff, buffer_u8);
			}
			else
			if object_is_ancestor(o.object_index, parWire) {
				// L441-L464: le um valor para cada variavel que a instancia recem-criada tiver.
				// A quantidade nao esta no arquivo: se o Create do objeto nao definir as mesmas
				// variaveis que existiam quando o nivel foi salvo, a leitura desalinha.
				if variable_instance_exists(o, "anim1") o.anim1 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim2") o.anim2 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim3") o.anim3 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim4") o.anim4 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim5") o.anim5 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim6") o.anim6 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim7") o.anim7 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim8") o.anim8 = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "anim9") o.anim9 = buffer_read(buff, buffer_s16);

				if variable_instance_exists(o, "d") o.d[0] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "d") o.d[1] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "d") o.d[2] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "d") o.d[3] = buffer_read(buff, buffer_s16);

				if variable_instance_exists(o, "an") o.an[0] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "an") o.an[1] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "an") o.an[2] = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "an") o.an[3] = buffer_read(buff, buffer_s16);

				if variable_instance_exists(o, "anim") o.anim = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "on") o.on = buffer_read(buff, buffer_s16);
				if variable_instance_exists(o, "power_on") o.power_on = buffer_read(buff, buffer_s16);
			}
		}
	}

	// L477-L494: posiciona o jogador (e o Eo) na PATH pela qual ele entrou
	if instance_exists(oPlayer) {
		with (oPlayer) {
			// L478 CONFERIR: as duas comparacoes (path_side e has_path) vieram do rastreio,
			// mas o valor comparado com path_side nao ficou claro.
			if path_side!=0 {
				if has_path!=-1 {
					control = 0;
					with (PATH) {
						if n==oPlayer.has_path {
							// L481-L484 CONFERIR: ha atribuicoes a oPlayer.has_path/path_side
							// neste bloco que o rastreio nao recuperou.
							obj_setpos(oPlayer, x, y);
						}
					}
					has_path = -1;
					alarm[0] = 1; // L490 CONFERIR indice e valor do alarme
				}
			}
		}
		if instance_exists(oEo) {
			obj_setpos(oEo, oPlayer.x, oPlayer.y);
		}
	}

	// L497-L506
	buffer_delete(buff);
	if oControl.START_GAME {
		load_game();
	}
	reset_files();
	with (instance_create_depth(10, 10, -1011, oFade_in)) {
		colour = oControl.FADE_COLOUR;
	}
	_SET_SCENE();

	// L506-L515
	if instance_exists(oEo) {
		if instance_exists(oPlayer) {
			obj_setpos(oEo, oPlayer.x, oPlayer.y);
		}
		// L512 CONFERIR: uma funcao embutida recebe oEo.ui_pos_mem (nao identificada)
		oEo.can_see = 1;
		oEo.in_radius = 1;
		oEo.ring_fade = 1;
	}

	// L518
	instance_activate_all();

/* end map_load */
}
