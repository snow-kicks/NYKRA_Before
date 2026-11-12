
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__save_type
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong unaff_GS_OFFSET;
  double dVar12;
  undefined8 in_stack_fffffffffffffe48;
  undefined8 uVar13;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  uint uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  undefined8 uStack_60;
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  uStack_60 = 0xfffffffffffffffe;
  puStack_e0 = &UNK_141983423;
  uStack_d8 = 0;
  uStack_e8 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_e8;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_114 = 0xffffff;
  uStack_120 = 0;
  uStack_c4 = 0xffffff;
  uStack_d0 = 0;
  uStack_9c = 0xffffff;
  dStack_a8 = 0.0;
  uStack_78 = (ulonglong)(uint)uStack_78;
  uStack_80 = 0;
  uStack_90 = (ulonglong)(uint)uStack_90;
  uStack_98 = 0;
  uStack_b0 = (ulonglong)(uint)uStack_b0;
  uStack_b8 = 0;
  uStack_108 = (ulonglong)(uint)uStack_108;
  uStack_110 = 0;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_88 = param_2;
  FUN_1416ab750(_DAT_1420dcd00);
  uStack_d8 = 0x43;
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_d8 = 0x44;
  if (param_4 < 2) {
    puVar10 = &DAT_1420b1000;
  }
  else {
    puVar10 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_d0,puVar10);
  uStack_d8 = 0x48;
  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  uStack_80 = 0;
  uStack_78 = 0x500000000;
  uVar8 = CONCAT44(uVar5,_DAT_1420da610);
  puStack_148 = &uStack_d0;
  puVar6 = (undefined8 *)FUN_1416ab210(param_1,uStack_88,&uStack_80,1,uVar8,&puStack_148);
  uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_ec = *(uint *)((longlong)puVar6 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar6 + 1);
  if ((0x46U >> (uStack_ec & 0x1f) & 1) == 0) {
    uStack_f8 = *puVar6;
  }
  else {
    FUN_1400c5d80(&uStack_f8,puVar6);
  }
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_14217f2c8) && (FUN_14193dcf0(&DAT_14217f2c8), _DAT_14217f2c8 == -1)) {
    uStack_100 = 0x14217f250;
    FUN_1416ac010(0x14217f250,0x1420b2a40);
    _DAT_14217f260 = 0;
    uStack_100 = 0x14217f264;
    FUN_1416ac010(0x14217f264,0x1420b2a47);
    _DAT_14217f274 = 0;
    uStack_100 = 0x14217f278;
    FUN_1416ac010(0x14217f278,0x1420b2a4d);
    _DAT_14217f288 = 0;
    uStack_100 = 0x14217f28c;
    FUN_1416ac010(0x14217f28c,0x1420b2a53);
    _DAT_14217f29c = 1;
    uStack_100 = 0x14217f2a0;
    FUN_1416ac010(0x14217f2a0,0x1420b2a5f);
    _DAT_14217f2b0 = 2;
    uStack_100 = 0x14217f2b4;
    FUN_1416ac010(0x14217f2b4,0x1420b2a5a);
    _DAT_14217f2c4 = 3;
    FUN_14193e038(FUN_1400be3a0);
    FUN_14193dc90(&DAT_14217f2c8);
  }
  uVar8 = _DAT_1420f6b08;
  lVar11 = 0;
  iVar3 = FUN_1416d9df0(0x14217f250,&uStack_f8,_DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_1400bcd8b:
    uVar1 = *(uint *)(&DAT_14217f260 + lVar11 * 0x14);
joined_r0x0001400bcd97:
    uVar7 = (ulonglong)uVar1;
    if (3 < uVar7) goto LAB_1400bd2f7;
LAB_1400bcd9d:
    switch(&UNK_1400be350 + *(int *)(&UNK_1400be350 + uVar7 * 4)) {
    case (undefined *)0x1400bcdad:
      uStack_d8 = 0x68;
      uStack_64 = 0;
      uStack_70 = 0x3ff0000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd41d;
code_r0x0001400bcdf1:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bcdf1;
code_r0x0001400bd41d:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x69;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd505;
code_r0x0001400bd475:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bd475;
code_r0x0001400bd505:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x6a;
      FUN_1416fbbe0((longlong)dVar12,8,&uStack_d0);
      break;
    case (undefined *)0x1400bcdfb:
      iStack_bc = param_4;
      if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_80);
      }
      uStack_80 = 0;
      uStack_78 = 0x500000000;
      uVar13 = CONCAT44(uVar5,_DAT_1420da250);
      puStack_148 = &uStack_d0;
      uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_80,1,uVar13,&puStack_148);
      uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_64 = 0;
      uStack_70 = 0x3ff0000000000000;
      iVar3 = FUN_1416d9df0(uVar8,&uStack_70,_DAT_1420f6b08,1);
      if (-1 < iVar3) {
        uStack_d8 = 0x72;
        if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_98);
        }
        uStack_98 = 0;
        uStack_90 = 0x500000000;
        if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b8);
        }
        uStack_b8 = 0;
        uStack_b0 = 0x500000000;
        uStack_64 = 0;
        uStack_70 = 0;
        uVar4 = FUN_141693b30(&uStack_70);
        uVar8 = FUN_1416cd460(&uStack_b8,&uStack_d0,uVar4,0);
        FUN_1400019a0(&uStack_188,uVar8);
        if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_70);
        }
        uVar13 = CONCAT44(uVar5,_DAT_1420da630);
        puStack_140 = &uStack_188;
        uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_98,1,uVar13,&puStack_140);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
        cVar2 = FUN_1416927d0(uVar8);
        uVar4 = 0x73;
        if (cVar2 != '\0') break;
        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_80);
        }
        uStack_80 = 0;
        uStack_78 = 0x500000000;
        if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_98);
        }
        uStack_98 = 0;
        uStack_90 = 0x500000000;
        uStack_64 = 0;
        uStack_70 = 0;
        uVar4 = FUN_141693b30(&uStack_70);
        uVar8 = FUN_1416cd460(&uStack_98,&uStack_d0,uVar4,0);
        FUN_1400019a0(&uStack_198,uVar8);
        if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_70);
        }
        puStack_148 = &uStack_198;
        uVar13 = CONCAT44(uVar5,_DAT_1420da640);
        uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_80,1,uVar13,&puStack_148);
        uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
        cVar2 = FUN_1416927d0(uVar8);
        if (cVar2 != '\0') {
          if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b8);
          }
          uStack_b8 = 0;
          uStack_b0 = 0x500000000;
          if ((0x46U >> (uStack_108._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_110);
          }
          uStack_110 = 0;
          uStack_108 = 0x500000000;
          puStack_140 = &uStack_d0;
          FUN_140002730(&uStack_178,0x14217f150);
          puStack_138 = &uStack_178;
          FUN_140002730(&uStack_168,0x14217f150);
          uVar13 = CONCAT44(uVar5,_DAT_1420da240);
          puStack_130 = &uStack_168;
          uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_110,3,uVar13,&puStack_140);
          uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
          FUN_1400019a0(&uStack_158,uVar8);
          uVar13 = CONCAT44(uVar5,_DAT_1420da630);
          puStack_128 = &uStack_158;
          uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_b8,1,uVar13,&puStack_128);
          uVar5 = (undefined4)((ulonglong)uVar13 >> 0x20);
          cVar2 = FUN_1416927d0(uVar8);
          if (cVar2 != '\0') goto code_r0x0001400bd992;
        }
        uStack_d8 = 0x74;
        uStack_64 = 0;
        uStack_70 = 0x4008000000000000;
        if (iStack_bc < 1) {
          pdVar9 = (double *)&DAT_1420b1000;
          uVar1 = uRam00000001420b100c;
        }
        else {
          pdVar9 = (double *)*param_5;
          uVar1 = *(uint *)((longlong)pdVar9 + 0xc);
        }
        if ((uVar1 & 0xffffff) == 0) {
          dVar12 = *pdVar9;
        }
        else {
          dVar12 = (double)FUN_1416940c0();
        }
        FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
        if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_70);
        }
        uStack_d8 = 0x75;
        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_80);
        }
        uStack_80 = 0;
        uStack_78 = 0x500000000;
        puStack_148 = &uStack_d0;
        uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_80,1,CONCAT44(uVar5,_DAT_1420da250),
                              &puStack_148);
        if (iStack_bc < 1) {
          pdVar9 = (double *)&DAT_1420b1000;
          uVar1 = uRam00000001420b100c;
        }
        else {
          pdVar9 = (double *)*param_5;
          uVar1 = *(uint *)((longlong)pdVar9 + 0xc);
        }
        if ((uVar1 & 0xffffff) == 0) {
          dVar12 = *pdVar9;
        }
        else {
          dVar12 = (double)FUN_1416940c0();
        }
        FUN_1416fbbe0((longlong)dVar12,3,uVar8);
        uStack_d8 = 0x76;
        if ((0x46U >> (uStack_9c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_a8);
        }
        uStack_9c = 0;
        dStack_a8 = 0.0;
        while( true ) {
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_148 = &uStack_d0;
          uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_80,1,_DAT_1420da250,&puStack_148);
          iVar3 = FUN_1416d9df0(&dStack_a8,uVar8,_DAT_1420f6b08,1);
          if ((iVar3 == -2) || (-1 < iVar3)) break;
          uStack_d8 = 0x77;
          if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_98);
          }
          uStack_98 = 0;
          uStack_90 = 0x500000000;
          uVar5 = FUN_141693b30(&dStack_a8);
          uVar8 = FUN_1416cd460(&uStack_98,&uStack_d0,uVar5,0);
          FUN_1400019a0(&uStack_120,uVar8);
          uStack_d8 = 0x78;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puVar10 = &DAT_1420b1000;
          if (0 < iStack_bc) {
            puVar10 = (undefined *)*param_5;
          }
          FUN_1400019a0(&uStack_198,puVar10);
          puStack_148 = &uStack_198;
          puStack_140 = &uStack_120;
          gml_Script__save_type_rec(param_1,uStack_88,&uStack_80,2,&puStack_148);
          switch(uStack_9c & 0xffffff) {
          case 1:
            dStack_a8 = (double)FUN_1416940c0(&dStack_a8);
            dStack_a8 = dStack_a8 + 1.0;
            uStack_9c = 0;
            break;
          default:
            FUN_140001d70(&UNK_141981e6a,&dStack_a8,&dStack_a8);
            break;
          case 7:
            dStack_a8 = (double)CONCAT44(dStack_a8._4_4_,dStack_a8._0_4_ + 1);
            break;
          case 10:
            dStack_a8 = (double)((longlong)dStack_a8 + 1);
            break;
          case 0xd:
            uStack_9c = 0;
          case 0:
            dStack_a8 = dStack_a8 + 1.0;
          }
        }
      }
      uVar4 = 0x7b;
      break;
    case (undefined *)0x1400bd244:
      uStack_d8 = 0x7e;
      uStack_64 = 0;
      uStack_70 = 0x4010000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd32e;
code_r0x0001400bd288:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bd288;
code_r0x0001400bd32e:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x7f;
      if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_80);
      }
      uStack_80 = 0;
      uStack_78 = 0x500000000;
      puStack_148 = &uStack_d0;
      uVar8 = FUN_1416ab210(param_1,uStack_88,&uStack_80,1,CONCAT44(uVar5,_DAT_1420da620),
                            &puStack_148);
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd571;
code_r0x0001400bd3f8:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bd3f8;
code_r0x0001400bd571:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x80;
      FUN_1416fbbe0((longlong)dVar12,10,uVar8);
      break;
    case (undefined *)0x1400bd292:
      uStack_d8 = 0x6d;
      uStack_64 = 0;
      uStack_70 = 0x4000000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd49a;
code_r0x0001400bd2d6:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bd2d6;
code_r0x0001400bd49a:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x6e;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bd539;
code_r0x0001400bd4ea:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bd4ea;
code_r0x0001400bd539:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x6f;
      FUN_1416fbbe0((longlong)dVar12,0xb,&uStack_d0);
    }
  }
  else {
    iVar3 = FUN_1416d9df0(0x14217f264,&uStack_f8,uVar8,0);
    if (iVar3 == 0) {
      lVar11 = 1;
      goto LAB_1400bcd8b;
    }
    iVar3 = FUN_1416d9df0(0x14217f278,&uStack_f8,uVar8,0);
    uVar1 = _DAT_14217f288;
    if ((iVar3 == 0) ||
       (iVar3 = FUN_1416d9df0(0x14217f28c,&uStack_f8,uVar8,0), uVar1 = _DAT_14217f29c, iVar3 == 0))
    goto joined_r0x0001400bcd97;
    iVar3 = FUN_1416d9df0(0x14217f2a0,&uStack_f8,uVar8,0);
    uVar1 = _DAT_14217f2b0;
    if (iVar3 != 0) {
      iVar3 = FUN_1416d9df0(0x14217f2b4,&uStack_f8,uVar8,0);
      uVar4 = 0x82;
      uVar1 = _DAT_14217f2c4;
      if (iVar3 == 0) goto joined_r0x0001400bd5a2;
      goto LAB_1400bd98c;
    }
joined_r0x0001400bd5a2:
    uVar7 = (ulonglong)uVar1;
    if (uVar7 < 4) goto LAB_1400bcd9d;
LAB_1400bd2f7:
    uVar4 = 0x82;
  }
LAB_1400bd98c:
  uStack_d8 = uVar4;
code_r0x0001400bd992:
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  if ((0x46U >> (uStack_108._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_110);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  if ((0x46U >> (uStack_9c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a8);
  }
  if ((0x46U >> (uStack_c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d0);
  }
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  _DAT_142182d78 = (undefined8 *)uStack_e8;
  return param_3;
}

