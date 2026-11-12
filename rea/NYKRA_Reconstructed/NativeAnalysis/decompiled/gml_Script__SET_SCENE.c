
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script__SET_SCENE(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_170 [16];
  longlong lStack_160;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_90 = &UNK_141982c48;
  uStack_88 = 0;
  uStack_98 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_98;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  _DAT_142182d90 = param_1;
  uStack_a0 = param_2;
  plStack_68 = param_1;
  puVar4 = (undefined8 *)(**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x1885a);
  puVar5 = (undefined8 *)(**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18998);
  uStack_a8 = (ulonglong)(uint)uStack_a8;
  uStack_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_150 = param_3;
  FUN_1416ab750(_DAT_1420dc870);
  uStack_bc = 0;
  uStack_c8 = 0x4053c00000000000;
  iVar2 = FUN_1416ab810(auStack_170,&plStack_68,&uStack_a0,&uStack_c8);
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  if (0 < iVar2) {
    do {
      uStack_88 = 0x14;
      puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 8))(plStack_68,0x18b9c);
      uStack_bc = *(uint *)((longlong)puVar6 + 0xc);
      uStack_c0 = *(undefined4 *)(puVar6 + 1);
      if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
        uStack_c8 = *puVar6;
      }
      else {
        FUN_14005b430(&uStack_c8,puVar6);
      }
      if ((*(int *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
           _DAT_14217e8ec) && (FUN_14193dcf0(&DAT_14217e8ec), _DAT_14217e8ec == -1)) {
        _DAT_14217e86c = 0;
        _DAT_14217e860 = 0;
        _DAT_14217e880 = 0x100000000;
        _DAT_14217e874 = 0x3ff0000000000000;
        _DAT_14217e894 = 0x200000000;
        _DAT_14217e888 = 0x4000000000000000;
        _DAT_14217e8a8 = 0x300000000;
        _DAT_14217e89c = 0x4008000000000000;
        _DAT_14217e8bc = 0x400000000;
        _DAT_14217e8b0 = 0x4010000000000000;
        _DAT_14217e8d0 = 0x500000000;
        _DAT_14217e8c4 = 0x4014000000000000;
        _DAT_14217e8e4 = 0x600000000;
        _DAT_14217e8d8 = 0x4018000000000000;
        FUN_14193e038(FUN_14004b130);
        FUN_14193dc90(&DAT_14217e8ec);
      }
      uVar7 = _DAT_1420f6b08;
      iVar2 = FUN_1416d9df0(&DAT_14217e860,&uStack_c8,_DAT_1420f6b08,0);
      uVar10 = _DAT_14217e86c;
      if ((((((iVar2 == 0) ||
             (iVar2 = FUN_1416d9df0(&DAT_14217e874,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e880,
             iVar2 == 0)) ||
            (iVar2 = FUN_1416d9df0(&DAT_14217e888,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e894,
            iVar2 == 0)) ||
           ((iVar2 = FUN_1416d9df0(&DAT_14217e89c,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e8a8,
            iVar2 == 0 ||
            (iVar2 = FUN_1416d9df0(&DAT_14217e8b0,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e8bc,
            iVar2 == 0)))) ||
          ((iVar2 = FUN_1416d9df0(&DAT_14217e8c4,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e8d0,
           iVar2 == 0 ||
           (iVar2 = FUN_1416d9df0(&DAT_14217e8d8,&uStack_c8,uVar7,0), uVar10 = _DAT_14217e8e4,
           iVar2 == 0)))) && (uVar10 >> 0x20 < 7)) {
        switch(uVar10 >> 0x20) {
        case 0:
          uStack_88 = 0x17;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          uStack_74 = 0;
          uStack_80 = *(undefined8 *)(&UNK_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(plStack_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&uStack_80);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          func_0x0001416a8c00(2);
          FUN_1416ac010(&uStack_80,0x1420b2210);
          iVar2 = FUN_1416d9df0(puVar4,&uStack_80,_DAT_1420f6b08,0);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          if (iVar2 == 0) {
            puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0xbff0000000000000;
          }
          else {
            uStack_88 = 0x18;
            puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
            uStack_74 = 0;
            uStack_80 = *(undefined8 *)(&UNK_141982c30 + (ulonglong)(iVar2 < 1) * 8);
            FUN_1416a8cb0(plStack_68);
            uVar7 = FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            FUN_1400019a0(uVar7,&uStack_80);
            if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_80);
            }
          }
          func_0x0001416a8c00(2);
          uStack_88 = 0x1a;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fcbe76c8b439581;
          uStack_88 = 0x1b;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217ea30) && (FUN_14193dcf0(0x14217ea30), iRam000000014217ea30 == -1)) {
            uStack_b8 = 0x14217e8f0;
            FUN_1416ac010(0x14217e8f0,0x1420b221d);
            uRam000000014217e900 = 0;
            uStack_b8 = 0x14217e904;
            FUN_1416ac010(0x14217e904,0x1420b2230);
            uRam000000014217e914 = 0;
            uStack_b8 = 0x14217e918;
            FUN_1416ac010(0x14217e918,0x1420b2240);
            uRam000000014217e928 = 0;
            uStack_b8 = 0x14217e92c;
            FUN_1416ac010(0x14217e92c,0x1420b224d);
            uRam000000014217e93c = 0;
            uStack_b8 = 0x14217e940;
            FUN_1416ac010(0x14217e940,0x1420b2260);
            uRam000000014217e950 = 0;
            uStack_b8 = 0x14217e954;
            FUN_1416ac010(0x14217e954,0x1420b2273);
            uRam000000014217e964 = 0;
            uStack_b8 = 0x14217e968;
            FUN_1416ac010(0x14217e968,0x1420b227f);
            uRam000000014217e978 = 0;
            uStack_b8 = 0x14217e97c;
            FUN_1416ac010(0x14217e97c,0x1420b228c);
            uRam000000014217e98c = 0;
            uStack_b8 = 0x14217e990;
            FUN_1416ac010(0x14217e990,0x1420b2296);
            uRam000000014217e9a0 = 0;
            uStack_b8 = 0x14217e9a4;
            FUN_1416ac010(0x14217e9a4,0x1420b22a0);
            uRam000000014217e9b4 = 0;
            uStack_b8 = 0x14217e9b8;
            FUN_1416ac010(0x14217e9b8,0x1420b22aa);
            uRam000000014217e9c8 = 0;
            uStack_b8 = 0x14217e9cc;
            FUN_1416ac010(0x14217e9cc,0x1420b22b4);
            uRam000000014217e9dc = 0;
            uStack_b8 = 0x14217e9e0;
            FUN_1416ac010(0x14217e9e0,0x1420b22be);
            uRam000000014217e9f0 = 0;
            uStack_b8 = 0x14217e9f4;
            FUN_1416ac010(0x14217e9f4,0x1420b22c8);
            uRam000000014217ea04 = 0;
            uStack_b8 = 0x14217ea08;
            FUN_1416ac010(0x14217ea08,0x1420b22e0);
            uRam000000014217ea18 = 1;
            uStack_b8 = 0x14217ea1c;
            FUN_1416ac010(0x14217ea1c,0x1420b22f1);
            uRam000000014217ea2c = 1;
            FUN_14193e038(FUN_14004b240);
            FUN_14193dc90(0x14217ea30);
          }
          uVar7 = _DAT_1420f6b08;
          iVar2 = FUN_1416d9df0(0x14217e8f0,&uStack_80,_DAT_1420f6b08,0);
          if (iVar2 == 0) {
            lVar9 = 0;
code_r0x00014004a096:
            iVar2 = *(int *)(lVar9 * 0x14 + 0x14217e900);
            if (iVar2 == 1) {
              uStack_88 = 0x2f;
              puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
              FUN_1416a8cb0(plStack_68);
              puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
              FUN_1416a8cb0(*puVar6);
              if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar8);
              }
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              *puVar8 = 0xbff0000000000000;
              func_0x0001416a8c00(2);
              uStack_88 = 0x30;
            }
            else if (iVar2 == 0) {
              uStack_88 = 0x2a;
              puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
              FUN_1416a8cb0(plStack_68);
              puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
              FUN_1416a8cb0(*puVar6);
              if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar8);
              }
              *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              *puVar8 = 0x4082100000000000;
              func_0x0001416a8c00(2);
              uStack_88 = 0x2b;
            }
          }
          else {
            iVar2 = FUN_1416d9df0(0x14217e904,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 1;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e918,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 2;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e92c,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 3;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e940,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 4;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e954,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 5;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e968,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 6;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e97c,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 7;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e990,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 8;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e9a4,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 9;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e9b8,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 10;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e9cc,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xb;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e9e0,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xc;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217e9f4,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xd;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217ea08,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xe;
              goto code_r0x00014004a096;
            }
            iVar2 = FUN_1416d9df0(0x14217ea1c,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 0xf;
              goto code_r0x00014004a096;
            }
          }
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          if (iVar2 < 1) {
            uStack_88 = 0x32;
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            FUN_140002730(&uStack_108,0x1420b25b8);
            puStack_128 = &uStack_108;
            FUN_140002730(&uStack_f8,0x1420b25b8);
            puStack_120 = &uStack_f8;
            FUN_140002730(&uStack_e8,0x1420b25c8);
            puStack_118 = &uStack_e8;
            FUN_140002730(&uStack_d8,0x1420b25d8);
            puStack_110 = &uStack_d8;
            gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          }
          uStack_88 = 0x33;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 1:
          uStack_88 = 0x37;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          uStack_74 = 0;
          uStack_80 = *(undefined8 *)(&UNK_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(plStack_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&uStack_80);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          func_0x0001416a8c00(2);
          uStack_88 = 0x39;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217ed38) && (FUN_14193dcf0(0x14217ed38), iRam000000014217ed38 == -1)) {
            uStack_70 = 0x14217ea40;
            FUN_1416ac010(0x14217ea40,0x1420b2300);
            uRam000000014217ea50 = 0;
            uStack_70 = 0x14217ea54;
            FUN_1416ac010(0x14217ea54,0x1420b2320);
            uRam000000014217ea64 = 0;
            uStack_70 = 0x14217ea68;
            FUN_1416ac010(0x14217ea68,0x1420b2335);
            uRam000000014217ea78 = 1;
            uStack_70 = 0x14217ea7c;
            FUN_1416ac010(0x14217ea7c,0x1420b2342);
            uRam000000014217ea8c = 1;
            uStack_70 = 0x14217ea90;
            FUN_1416ac010(0x14217ea90,0x1420b2350);
            uRam000000014217eaa0 = 2;
            uStack_70 = 0x14217eaa4;
            FUN_1416ac010(0x14217eaa4,0x1420b2360);
            uRam000000014217eab4 = 2;
            uStack_70 = 0x14217eab8;
            FUN_1416ac010(0x14217eab8,0x1420b2370);
            uRam000000014217eac8 = 2;
            uStack_70 = 0x14217eacc;
            FUN_1416ac010(0x14217eacc,0x1420b237d);
            uRam000000014217eadc = 3;
            uStack_70 = 0x14217eae0;
            FUN_1416ac010(0x14217eae0,0x1420b238b);
            uRam000000014217eaf0 = 3;
            uStack_70 = 0x14217eaf4;
            FUN_1416ac010(0x14217eaf4,0x1420b2399);
            uRam000000014217eb04 = 3;
            uStack_70 = 0x14217eb08;
            FUN_1416ac010(0x14217eb08,0x1420b23a3);
            uRam000000014217eb18 = 4;
            uStack_70 = 0x14217eb1c;
            FUN_1416ac010(0x14217eb1c,0x1420b23b1);
            uRam000000014217eb2c = 4;
            uStack_70 = 0x14217eb30;
            FUN_1416ac010(0x14217eb30,0x1420b23bf);
            uRam000000014217eb40 = 4;
            uStack_70 = 0x14217eb44;
            FUN_1416ac010(0x14217eb44,0x1420b23cd);
            uRam000000014217eb54 = 4;
            uStack_70 = 0x14217eb58;
            FUN_1416ac010(0x14217eb58,0x1420b23e0);
            uRam000000014217eb68 = 4;
            uStack_70 = 0x14217eb6c;
            FUN_1416ac010(0x14217eb6c,0x1420b23f0);
            uRam000000014217eb7c = 4;
            uStack_70 = 0x14217eb80;
            FUN_1416ac010(0x14217eb80,0x1420b2400);
            uRam000000014217eb90 = 4;
            uStack_70 = 0x14217eb94;
            FUN_1416ac010(0x14217eb94,0x1420b2410);
            uRam000000014217eba4 = 4;
            uStack_70 = 0x14217eba8;
            FUN_1416ac010(0x14217eba8,0x1420b241f);
            uRam000000014217ebb8 = 4;
            uStack_70 = 0x14217ebbc;
            FUN_1416ac010(0x14217ebbc,0x1420b242d);
            uRam000000014217ebcc = 4;
            uStack_70 = 0x14217ebd0;
            FUN_1416ac010(0x14217ebd0,0x1420b2440);
            uRam000000014217ebe0 = 4;
            uStack_70 = 0x14217ebe4;
            FUN_1416ac010(0x14217ebe4,0x1420b2450);
            uRam000000014217ebf4 = 4;
            uStack_70 = 0x14217ebf8;
            FUN_1416ac010(0x14217ebf8,0x1420b2460);
            uRam000000014217ec08 = 5;
            uStack_70 = 0x14217ec0c;
            FUN_1416ac010(0x14217ec0c,0x1420b2467);
            uRam000000014217ec1c = 5;
            uStack_70 = 0x14217ec20;
            FUN_1416ac010(0x14217ec20,0x1420b246e);
            uRam000000014217ec30 = 5;
            uStack_70 = 0x14217ec34;
            FUN_1416ac010(0x14217ec34,0x1420b2475);
            uRam000000014217ec44 = 5;
            uStack_70 = 0x14217ec48;
            FUN_1416ac010(0x14217ec48,0x1420b247c);
            uRam000000014217ec58 = 5;
            uStack_70 = 0x14217ec5c;
            FUN_1416ac010(0x14217ec5c,0x1420b2483);
            uRam000000014217ec6c = 5;
            uStack_70 = 0x14217ec70;
            FUN_1416ac010(0x14217ec70,0x1420b248a);
            uRam000000014217ec80 = 5;
            uStack_70 = 0x14217ec84;
            FUN_1416ac010(0x14217ec84,0x1420b2493);
            uRam000000014217ec94 = 5;
            uStack_70 = 0x14217ec98;
            FUN_1416ac010(0x14217ec98,0x1420b249c);
            uRam000000014217eca8 = 5;
            uStack_70 = 0x14217ecac;
            FUN_1416ac010(0x14217ecac,0x1420b24a5);
            uRam000000014217ecbc = 5;
            uStack_70 = 0x14217ecc0;
            FUN_1416ac010(0x14217ecc0,0x1420b24ae);
            uRam000000014217ecd0 = 5;
            uStack_70 = 0x14217ecd4;
            FUN_1416ac010(0x14217ecd4,0x1420b24b7);
            uRam000000014217ece4 = 5;
            uStack_70 = 0x14217ece8;
            FUN_1416ac010(0x14217ece8,0x1420b24c0);
            uRam000000014217ecf8 = 5;
            uStack_70 = 0x14217ecfc;
            FUN_1416ac010(0x14217ecfc,0x1420b24cd);
            uRam000000014217ed0c = 5;
            uStack_70 = 0x14217ed10;
            FUN_1416ac010(0x14217ed10,0x1420b24d8);
            uRam000000014217ed20 = 5;
            uStack_70 = 0x14217ed24;
            FUN_1416ac010(0x14217ed24,0x1420b24f0);
            uRam000000014217ed34 = 5;
            FUN_14193e038(FUN_14004b440);
            FUN_14193dc90(0x14217ed38);
          }
          uVar7 = _DAT_1420f6b08;
          uVar10 = 0;
          do {
            iVar2 = FUN_1416d9df0(uVar10 * 0x14 + 0x14217ea40,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              switch(*(undefined4 *)((uVar10 & 0xffffffff) * 0x14 + 0x14217ea50)) {
              case 0:
                uStack_88 = 0x3c;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4078d00000000000;
                goto code_r0x00014004926b;
              case 1:
                uStack_88 = 0x41;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4079000000000000;
                goto code_r0x00014004926b;
              case 2:
                uStack_88 = 0x47;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0xbff0000000000000;
                goto code_r0x00014004926b;
              case 3:
                uStack_88 = 0x4d;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4079200000000000;
                goto code_r0x00014004926b;
              case 4:
                uStack_88 = 0x5c;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4078e00000000000;
                goto code_r0x00014004926b;
              case 5:
                uStack_88 = 0x6f;
                puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
                FUN_1416a8cb0(plStack_68);
                puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
                FUN_1416a8cb0(*puVar6);
                if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                  FUN_140001b50(puVar8);
                }
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                *puVar8 = 0x4084480000000000;
                goto code_r0x00014004926b;
              }
              break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < 0x26);
          uStack_88 = 0x73;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          uStack_134 = 0;
          uStack_140 = *(undefined8 *)(&UNK_141982c20 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(plStack_68);
          uVar7 = FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&uStack_140);
          if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_140);
          }
code_r0x00014004926b:
          func_0x0001416a8c00(2);
          uStack_88 = 0x76;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc7ff583a53b8e5;
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          if (iVar2 < 1) {
            uStack_88 = 0x77;
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            FUN_140002730(&uStack_108,0x1420b25b8);
            puStack_128 = &uStack_108;
            FUN_140002730(&uStack_f8,0x1420b25b8);
            puStack_120 = &uStack_f8;
            FUN_140002730(&uStack_e8,0x1420b25c8);
            puStack_118 = &uStack_e8;
            FUN_140002730(&uStack_d8,0x1420b25e8);
            puStack_110 = &uStack_d8;
            gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          }
          uStack_88 = 0x78;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 2:
          uStack_88 = 0x7c;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0xbff0000000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0x7d;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217ed54) && (FUN_14193dcf0(0x14217ed54), iRam000000014217ed54 == -1)) {
            FUN_1416ac010(0x14217ed40,0x1420b2510);
            iRam000000014217ed50 = 0;
            FUN_14193e038(FUN_14004b870);
            FUN_14193dc90(0x14217ed54);
          }
          iVar2 = FUN_1416d9df0(0x14217ed40,&uStack_80,_DAT_1420f6b08,0);
          if (iVar2 == 0 && iRam000000014217ed50 == 0) {
            uStack_88 = 0x7f;
            puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            uVar7 = 0xbff0000000000000;
          }
          else {
            uStack_88 = 0x83;
            puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            uVar7 = 0x4086180000000000;
          }
          *puVar6 = uVar7;
          func_0x0001416a8c00(2);
          uStack_88 = 0x86;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 3:
          uStack_88 = 0x8a;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0xbff0000000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0x8b;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217ed74) && (FUN_14193dcf0(0x14217ed74), iRam000000014217ed74 == -1)) {
            FUN_1416ac010(0x14217ed60,0x1420b2521);
            iRam000000014217ed70 = 0;
            FUN_14193e038(FUN_14004b8d0);
            FUN_14193dc90(0x14217ed74);
          }
          iVar2 = FUN_1416d9df0(0x14217ed60,&uStack_80,_DAT_1420f6b08,0);
          if (iVar2 == 0 && iRam000000014217ed70 == 0) {
            uStack_88 = 0x8d;
            puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            uVar7 = 0xbff0000000000000;
          }
          else {
            uStack_88 = 0x91;
            puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            uVar7 = 0x4079500000000000;
          }
          *puVar6 = uVar7;
          func_0x0001416a8c00(2);
          uStack_88 = 0x94;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fcd5f64c87d092a;
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          if (iVar2 < 1) {
            uStack_88 = 0x95;
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            FUN_140002730(&uStack_108,0x1420b25b8);
            puStack_128 = &uStack_108;
            FUN_140002730(&uStack_f8,0x1420b25b8);
            puStack_120 = &uStack_f8;
            FUN_140002730(&uStack_e8,0x1420b25c8);
            puStack_118 = &uStack_e8;
            FUN_140002730(&uStack_d8,0x1420b25f8);
            puStack_110 = &uStack_d8;
            gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          }
          uStack_88 = 0x96;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 4:
          uStack_88 = 0x9a;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0xbff0000000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0x9b;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,1);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x4043800000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0x9c;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0xbff0000000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0x9d;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217edf8) && (FUN_14193dcf0(0x14217edf8), iRam000000014217edf8 == -1)) {
            uStack_130 = 0x14217ed80;
            FUN_1416ac010(0x14217ed80,0x1420b2524);
            iRam000000014217ed90 = 0;
            uStack_130 = 0x14217ed94;
            FUN_1416ac010(0x14217ed94,0x1420b252c);
            iRam000000014217eda4 = 0;
            uStack_130 = 0x14217eda8;
            FUN_1416ac010(0x14217eda8,0x1420b2534);
            iRam000000014217edb8 = 0;
            uStack_130 = 0x14217edbc;
            FUN_1416ac010(0x14217edbc,0x1420b253c);
            iRam000000014217edcc = 0;
            uStack_130 = 0x14217edd0;
            FUN_1416ac010(0x14217edd0,0x1420b2544);
            iRam000000014217ede0 = 0;
            uStack_130 = 0x14217ede4;
            FUN_1416ac010(0x14217ede4,0x1420b254e);
            iRam000000014217edf4 = 0;
            FUN_14193e038(FUN_14004b930);
            FUN_14193dc90(0x14217edf8);
          }
          uVar7 = _DAT_1420f6b08;
          iVar3 = FUN_1416d9df0(0x14217ed80,&uStack_80,_DAT_1420f6b08,0);
          iVar2 = iRam000000014217ed90;
          if ((iVar3 == 0) ||
             (iVar3 = FUN_1416d9df0(0x14217ed94,&uStack_80,uVar7,0), iVar2 = iRam000000014217eda4,
             iVar3 == 0)) {
joined_r0x00014004976c:
            if (iVar2 != 0) goto code_r0x000140049772;
code_r0x000140049a3a:
            uStack_88 = 0xa4;
            puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0x4079300000000000;
            func_0x0001416a8c00(2);
            uStack_88 = 0xa5;
            puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0x4084e80000000000;
            func_0x0001416a8c00(2);
            uStack_88 = 0xa6;
          }
          else {
            iVar3 = FUN_1416d9df0(0x14217eda8,&uStack_80,uVar7,0);
            iVar2 = iRam000000014217edb8;
            if ((iVar3 == 0) ||
               (iVar3 = FUN_1416d9df0(0x14217edbc,&uStack_80,uVar7,0), iVar2 = iRam000000014217edcc,
               iVar3 == 0)) {
joined_r0x000140049dda:
              if (iVar2 == 0) goto code_r0x000140049a3a;
            }
            else {
              iVar3 = FUN_1416d9df0(0x14217edd0,&uStack_80,uVar7,0);
              iVar2 = iRam000000014217ede0;
              if (iVar3 == 0) goto joined_r0x00014004976c;
              iVar3 = FUN_1416d9df0(0x14217ede4,&uStack_80,uVar7,0);
              iVar2 = iRam000000014217edf4;
              if (iVar3 == 0) goto joined_r0x000140049dda;
            }
code_r0x000140049772:
            uStack_88 = 0xa9;
            puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
            FUN_1416a8cb0(*puVar6);
            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0xbff0000000000000;
            func_0x0001416a8c00(2);
            uStack_88 = 0xaa;
          }
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          if (iVar2 < 1) {
            uStack_88 = 0xac;
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            FUN_140002730(&uStack_108,0x1420b25b8);
            puStack_128 = &uStack_108;
            FUN_140002730(&uStack_f8,0x1420b25b8);
            puStack_120 = &uStack_f8;
            FUN_140002730(&uStack_e8,0x1420b25c8);
            puStack_118 = &uStack_e8;
            FUN_140002730(&uStack_d8,0x1420b2608);
            puStack_110 = &uStack_d8;
            gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          }
          uStack_88 = 0xad;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 5:
          uStack_88 = 0xb2;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          uStack_74 = 0;
          uStack_80 = *(undefined8 *)(&UNK_141982c10 + (ulonglong)(iVar2 < 1) * 8);
          FUN_1416a8cb0(plStack_68);
          uVar7 = FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          FUN_1400019a0(uVar7,&uStack_80);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          func_0x0001416a8c00(2);
          uStack_88 = 0xb3;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4) <
               iRam000000014217ee28) && (FUN_14193dcf0(0x14217ee28), iRam000000014217ee28 == -1)) {
            uStack_148 = 0x14217ee00;
            FUN_1416ac010(0x14217ee00,0x1420b2558);
            uRam000000014217ee10 = 0;
            uStack_148 = 0x14217ee14;
            FUN_1416ac010(0x14217ee14,0x1420b2562);
            uRam000000014217ee24 = 1;
            FUN_14193e038(FUN_14004ba30);
            FUN_14193dc90(0x14217ee28);
          }
          uVar7 = _DAT_1420f6b08;
          iVar2 = FUN_1416d9df0(0x14217ee00,&uStack_80,_DAT_1420f6b08,0);
          if (iVar2 == 0) {
            lVar9 = 0;
code_r0x0001400494a5:
            iVar2 = *(int *)(lVar9 * 0x14 + 0x14217ee10);
            if (iVar2 == 1) {
              uStack_88 = 0xb9;
              puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
              FUN_1416a8cb0(plStack_68);
              puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
              FUN_1416a8cb0(*puVar8);
              if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              uVar7 = 0x4083080000000000;
            }
            else {
              if (iVar2 != 0) goto code_r0x000140049528;
              uStack_88 = 0xb5;
              puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
              FUN_1416a8cb0(plStack_68);
              puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
              FUN_1416a8cb0(*puVar8);
              if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                FUN_140001b50(puVar6);
              }
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              uVar7 = 0xbff0000000000000;
            }
          }
          else {
            iVar2 = FUN_1416d9df0(0x14217ee14,&uStack_80,uVar7,0);
            if (iVar2 == 0) {
              lVar9 = 1;
              goto code_r0x0001400494a5;
            }
code_r0x000140049528:
            uStack_88 = 0xbd;
            puVar8 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
            FUN_1416a8cb0(plStack_68);
            puVar6 = (undefined8 *)FUN_1416924a0(puVar8,0);
            FUN_1416a8cb0(*puVar8);
            if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
              FUN_140001b50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            uVar7 = 0x4085e80000000000;
          }
          *puVar6 = uVar7;
          func_0x0001416a8c00(2);
          uStack_88 = 0xc0;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc8cdb5beeaec30;
          iVar2 = func_0x0001416f82f0(plStack_68,uStack_a0,0x60);
          if (iVar2 < 1) {
            uStack_88 = 0xc1;
            if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
              FUN_140001b50(&uStack_b0);
            }
            uStack_b0 = 0;
            uStack_a8 = 0x500000000;
            FUN_140002730(&uStack_108,0x1420b25b8);
            puStack_128 = &uStack_108;
            FUN_140002730(&uStack_f8,0x1420b25b8);
            puStack_120 = &uStack_f8;
            FUN_140002730(&uStack_e8,0x1420b25c8);
            puStack_118 = &uStack_e8;
            FUN_140002730(&uStack_d8,0x1420b2618);
            puStack_110 = &uStack_d8;
            gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          }
          uStack_88 = 0xc2;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          break;
        case 6:
          uStack_88 = 199;
          _DAT_142182d90 = (longlong *)0x418788;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,2);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x4043000000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 200;
          uStack_74 = *(uint *)((longlong)puVar4 + 0xc);
          uStack_78 = *(undefined4 *)(puVar4 + 1);
          if ((0x46U >> (uStack_74 & 0x1f) & 1) == 0) {
            uStack_80 = *puVar4;
          }
          else {
            FUN_14005b430(&uStack_80,puVar4);
          }
          uStack_88 = 0xce;
          puVar6 = (undefined8 *)(**(code **)(*plStack_68 + 0x10))(plStack_68,0x18b04);
          FUN_1416a8cb0(plStack_68);
          puVar8 = (undefined8 *)FUN_1416924a0(puVar6,0);
          FUN_1416a8cb0(*puVar6);
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar8);
          }
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
          *puVar8 = 0x407f600000000000;
          func_0x0001416a8c00(2);
          uStack_88 = 0xd1;
          if ((0x46U >> (*(uint *)((longlong)puVar5 + 0xc) & 0x1f) & 1) != 0) {
            FUN_140001b50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3fc5b3fef29242de;
          uStack_88 = 0xd2;
          if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b0);
          }
          uStack_b0 = 0;
          uStack_a8 = 0x500000000;
          FUN_140002730(&uStack_108,0x1420b25b8);
          puStack_128 = &uStack_108;
          FUN_140002730(&uStack_f8,0x1420b25b8);
          puStack_120 = &uStack_f8;
          FUN_140002730(&uStack_e8,0x1420b25c8);
          puStack_118 = &uStack_e8;
          FUN_140002730(&uStack_d8,0x1420b2628);
          puStack_110 = &uStack_d8;
          gml_Script_instance_create_one(plStack_68,uStack_a0,&uStack_b0,4,&puStack_128);
          uStack_88 = 0xd3;
          if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
        }
      }
      if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      cVar1 = func_0x0001416abe60(auStack_170,&plStack_68,&uStack_a0);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(auStack_170,&plStack_68,&uStack_a0);
  if (lStack_160 != 0) {
    func_0x000141695b90();
    lStack_160 = 0;
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  _DAT_142182d78 = (undefined8 *)uStack_98;
  return puStack_150;
}

