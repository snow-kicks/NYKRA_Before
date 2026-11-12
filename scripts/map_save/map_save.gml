/// @param filename
/*
	RECONSTRUIDO a partir de gml_Script_map_save em NYKRA.exe (YYC), nao e o fonte original.
	Roteiro usado: rea/NYKRA_Reconstructed/NativeAnalysis/decompiled/gml_Script_map_save.trace.txt
	Os comentarios "L<n>" indicam a linha do GML original informada pelo executavel.
	Nomes de variaveis de instancia e de funcoes embutidas vieram do binario; nomes de
	variaveis locais (buff, i, j, k, l, o, tm, spr) sao meus, porque o YYC nao os preserva.
	Formato do arquivo gerado: ver NativeAnalysis/scripts/validate_rmlvl.py.
*/
function map_save(argument0) {

	// L7
	with (oAenox_bound) instance_destroy();

	// L35: tamanho inicial 8, buffer_grow, alinhamento 1
	var buff = buffer_create(8, buffer_grow, 1);

	// L37-L42: cabecalho de 8 bytes
	buffer_write(buff, buffer_u8, map_n);
	buffer_write(buff, buffer_u8, mw);
	buffer_write(buff, buffer_u8, mh);
	buffer_write(buff, buffer_u8, planet);
	buffer_write(buff, buffer_u8, horizon);
	buffer_write(buff, buffer_u8, 0); buffer_write(buff, buffer_u8, 0); buffer_write(buff, buffer_u8, 0);

	// L44-L46: grade `map`
	for (var i = 0; i < mw; i++) {
		for (var j = 0; j < mh; j++) {
			buffer_write(buff, buffer_u16, round(map[i, j]));
		}
	}

	// L50-L55: uma grade por tilemap listado em _layer
	for (var l = 0; l < array_length(_layer); l++) {
		var lay = layer_get_id(_layer[l]);
		var tm = layer_tilemap_get_id(lay);
		for (var i = 0; i < mw; i++) {
			for (var j = 0; j < mh; j++) {
				buffer_write(buff, buffer_u16, tilemap_get(tm, i, j));
			}
		}
	}

	// L60-L66: primeira lista de assets (sprites soltos na camada de assets)
	var list = oControl.asset_list[0];
	buffer_write(buff, buffer_u16, ds_list_size(list));
	for (var l = 0; l < ds_list_size(list); l++) {
		var spr = ds_list_find_value(list, l);
		buffer_write(buff, buffer_u16, round(layer_sprite_get_x(spr)));
		buffer_write(buff, buffer_u16, round(layer_sprite_get_y(spr)));
		buffer_write(buff, buffer_string, string(sprite_get_name(layer_sprite_get_sprite(spr))));
	}

	// L69-L75: segunda lista de assets
	list = oControl.asset_list[1];
	buffer_write(buff, buffer_u16, ds_list_size(list));
	for (var l = 0; l < ds_list_size(list); l++) {
		var spr = ds_list_find_value(list, l);
		buffer_write(buff, buffer_u16, round(layer_sprite_get_x(spr)));
		buffer_write(buff, buffer_u16, round(layer_sprite_get_y(spr)));
		buffer_write(buff, buffer_string, string(sprite_get_name(layer_sprite_get_sprite(spr))));
	}

	// L79-L81: oSAVE_WIRE vai para a posicao 1 da lista de objetos
	if instance_exists(oSAVE_WIRE) {
		ds_list_delete(obj_list, ds_list_find_index(obj_list, oSAVE_WIRE.id));
		ds_list_insert(obj_list, 1, oSAVE_WIRE.id);
	}

	// L85: ATENCAO - a quantidade gravada inclui entradas que o laco abaixo pula
	// (indefinidas ou de instancias que nao existem mais). E por isso que alguns .rmlvl
	// declaram um objeto a mais do que contem. Mantido igual ao original.
	buffer_write(buff, buffer_u16, ds_list_size(obj_list));
	for (var l = 0; l < ds_list_size(obj_list); l++) {
		var o = ds_list_find_value(obj_list, l);
		if !is_undefined(o) {
			if instance_exists(o) {
				// L92-L95
				buffer_write(buff, buffer_s16, o.xstart);
				buffer_write(buff, buffer_s16, o.ystart);
				buffer_write(buff, buffer_s16, o.depth);
				buffer_write(buff, buffer_string, string(object_get_name(o.object_index)));

				if o.object_index==PATH {
					// L98-L99
					buffer_write(buff, buffer_u8, o.n);
					buffer_write(buff, buffer_string, o.rm);
				}
				else
				if object_is_ancestor(o.object_index, parLootable) {
					// L103-L107
					buffer_write(buff, buffer_u16, o.locked);
					buffer_write(buff, buffer_u16, ds_list_size(o.INV));
					for (var k = 0; k < ds_list_size(o.INV); k++) {
						buffer_write(buff, buffer_u16, real(ds_list_find_value(o.INV, k)));
						buffer_write(buff, buffer_u16, real(ds_list_find_value(o.INV_N, k)));
					}
				}
				else
				if object_is_ancestor(o.object_index, parDoor_out) {
					// L112
					buffer_write(buff, buffer_u8, o.locked);
				}
				else
				if object_is_ancestor(o.object_index, parDoor_Flat) {
					// L116-L118
					buffer_write(buff, buffer_u8, o.locked);
					buffer_write(buff, buffer_u8, o.n);
					buffer_write(buff, buffer_string, o.rm);
				}
				else
				if o.object_index==oRoof_angle {
					// L122-L125
					buffer_write(buff, buffer_u16, o.width);
					buffer_write(buff, buffer_u16, o.repeat_t);
					buffer_write(buff, buffer_u8, o.material);
					buffer_write(buff, buffer_s16, o.dir);
				}
				else
				if object_is_ancestor(o.object_index, parNote) {
					// L129-L130
					buffer_write(buff, buffer_string, string(o.text));
					buffer_write(buff, buffer_u8, o.page);
				}
				else
				if object_is_ancestor(o.object_index, oBook) || o.object_index==oBook {
					// L134-L135
					buffer_write(buff, buffer_u8, o.book);
					buffer_write(buff, buffer_u8, o.book_text);
				}
				else
				if object_is_ancestor(o.object_index, parWire) {
					// L139-L162: cada valor so e gravado se a variavel existir na instancia.
					// A quantidade NAO vai para o arquivo; map_load repete os mesmos testes na
					// instancia recem-criada, entao as duas pontas precisam concordar.
					// Os nomes passados a variable_instance_exists foram lidos do executavel
					// (constantes de texto de cada chamada).
					if variable_instance_exists(o, "anim1") buffer_write(buff, buffer_s16, round(o.anim1));
					if variable_instance_exists(o, "anim2") buffer_write(buff, buffer_s16, round(o.anim2));
					if variable_instance_exists(o, "anim3") buffer_write(buff, buffer_s16, round(o.anim3));
					if variable_instance_exists(o, "anim4") buffer_write(buff, buffer_s16, round(o.anim4));
					if variable_instance_exists(o, "anim5") buffer_write(buff, buffer_s16, round(o.anim5));
					if variable_instance_exists(o, "anim6") buffer_write(buff, buffer_s16, round(o.anim6));
					if variable_instance_exists(o, "anim7") buffer_write(buff, buffer_s16, round(o.anim7));
					if variable_instance_exists(o, "anim8") buffer_write(buff, buffer_s16, round(o.anim8));
					if variable_instance_exists(o, "anim9") buffer_write(buff, buffer_s16, round(o.anim9));

					if variable_instance_exists(o, "d") buffer_write(buff, buffer_s16, round(o.d[0]));
					if variable_instance_exists(o, "d") buffer_write(buff, buffer_s16, round(o.d[1]));
					if variable_instance_exists(o, "d") buffer_write(buff, buffer_s16, round(o.d[2]));
					if variable_instance_exists(o, "d") buffer_write(buff, buffer_s16, round(o.d[3]));

					if variable_instance_exists(o, "an") buffer_write(buff, buffer_s16, round(o.an[0]));
					if variable_instance_exists(o, "an") buffer_write(buff, buffer_s16, round(o.an[1]));
					if variable_instance_exists(o, "an") buffer_write(buff, buffer_s16, round(o.an[2]));
					if variable_instance_exists(o, "an") buffer_write(buff, buffer_s16, round(o.an[3]));

					if variable_instance_exists(o, "anim") buffer_write(buff, buffer_s16, round(o.anim));
					if variable_instance_exists(o, "on") buffer_write(buff, buffer_s16, round(o.on));
					if variable_instance_exists(o, "power_on") buffer_write(buff, buffer_s16, round(o.power_on));
				}
			}
		}
	}

	// L176-L177
	buffer_save(buff, argument0);
	buffer_delete(buff);

/* end map_save */
}
