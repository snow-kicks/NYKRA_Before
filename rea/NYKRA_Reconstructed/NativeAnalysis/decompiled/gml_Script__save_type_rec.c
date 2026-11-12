
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__save_type_rec
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
  puStack_e0 = &UNK_141983409;
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
  FUN_1416ab750(_DAT_1420dccf0);
  uStack_d8 = 0x1d;
  if ((0x46U >> (uStack_114 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_120);
  }
  uStack_114 = 0;
  uStack_120 = 0;
  uStack_d8 = 0x1e;
  if (param_4 < 2) {
    puVar10 = &DAT_1420b1000;
  }
  else {
    puVar10 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_d0,puVar10);
  uStack_d8 = 0x20;
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
               4) < _DAT_14217f248) && (FUN_14193dcf0(&DAT_14217f248), _DAT_14217f248 == -1)) {
    uStack_100 = 0x14217f1d0;
    FUN_1416ac010(0x14217f1d0,0x1420b2a40);
    _DAT_14217f1e0 = 0;
    uStack_100 = 0x14217f1e4;
    FUN_1416ac010(0x14217f1e4,0x1420b2a47);
    _DAT_14217f1f4 = 0;
    uStack_100 = 0x14217f1f8;
    FUN_1416ac010(0x14217f1f8,0x1420b2a4d);
    _DAT_14217f208 = 0;
    uStack_100 = 0x14217f20c;
    FUN_1416ac010(0x14217f20c,0x1420b2a53);
    _DAT_14217f21c = 1;
    uStack_100 = 0x14217f220;
    FUN_1416ac010(0x14217f220,0x1420b2a5f);
    _DAT_14217f230 = 2;
    uStack_100 = 0x14217f234;
    FUN_1416ac010(0x14217f234,0x1420b2a5a);
    _DAT_14217f244 = 3;
    FUN_14193e038(FUN_1400bc920);
    FUN_14193dc90(&DAT_14217f248);
  }
  uVar8 = _DAT_1420f6b08;
  lVar11 = 0;
  iVar3 = FUN_1416d9df0(0x14217f1d0,&uStack_f8,_DAT_1420f6b08,0);
  if (iVar3 == 0) {
LAB_1400bb30b:
    uVar1 = *(uint *)(&DAT_14217f1e0 + lVar11 * 0x14);
joined_r0x0001400bb317:
    uVar7 = (ulonglong)uVar1;
    if (3 < uVar7) goto LAB_1400bb877;
LAB_1400bb31d:
    switch(&UNK_1400bc8d0 + *(int *)(&UNK_1400bc8d0 + uVar7 * 4)) {
    case (undefined *)0x1400bb32d:
      uStack_d8 = 0x24;
      uStack_64 = 0;
      uStack_70 = 0x3ff0000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bb99d;
code_r0x0001400bb371:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bb371;
code_r0x0001400bb99d:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x25;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bba85;
code_r0x0001400bb9f5:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bb9f5;
code_r0x0001400bba85:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x26;
      FUN_1416fbbe0((longlong)dVar12,8,&uStack_d0);
      break;
    case (undefined *)0x1400bb37b:
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
        uStack_d8 = 0x2e;
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
        uVar4 = 0x2f;
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
          if (cVar2 != '\0') goto code_r0x0001400bbf12;
        }
        uStack_d8 = 0x30;
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
        uStack_d8 = 0x31;
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
        uStack_d8 = 0x32;
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
          uStack_d8 = 0x33;
          if ((0x46U >> (uStack_90._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_98);
          }
          uStack_98 = 0;
          uStack_90 = 0x500000000;
          uVar5 = FUN_141693b30(&dStack_a8);
          uVar8 = FUN_1416cd460(&uStack_98,&uStack_d0,uVar5,0);
          FUN_1400019a0(&uStack_120,uVar8);
          uStack_d8 = 0x34;
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
          gml_Script__save_type_rec2(param_1,uStack_88,&uStack_80,2,&puStack_148);
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
      uVar4 = 0x37;
      break;
    case (undefined *)0x1400bb7c4:
      uStack_d8 = 0x3a;
      uStack_64 = 0;
      uStack_70 = 0x4010000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bb8ae;
code_r0x0001400bb808:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bb808;
code_r0x0001400bb8ae:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x3b;
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
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bbaf1;
code_r0x0001400bb978:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bb978;
code_r0x0001400bbaf1:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x3c;
      FUN_1416fbbe0((longlong)dVar12,10,uVar8);
      break;
    case (undefined *)0x1400bb812:
      uStack_d8 = 0x29;
      uStack_64 = 0;
      uStack_70 = 0x4000000000000000;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bba1a;
code_r0x0001400bb856:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bb856;
code_r0x0001400bba1a:
        dVar12 = *pdVar9;
      }
      FUN_1416fbbe0((longlong)dVar12,1,&uStack_70);
      if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_d8 = 0x2a;
      if (param_4 < 1) {
        pdVar9 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto code_r0x0001400bbab9;
code_r0x0001400bba6a:
        dVar12 = (double)FUN_1416940c0();
      }
      else {
        pdVar9 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) != 0) goto code_r0x0001400bba6a;
code_r0x0001400bbab9:
        dVar12 = *pdVar9;
      }
      uVar4 = 0x2b;
      FUN_1416fbbe0((longlong)dVar12,0xb,&uStack_d0);
    }
  }
  else {
    iVar3 = FUN_1416d9df0(0x14217f1e4,&uStack_f8,uVar8,0);
    if (iVar3 == 0) {
      lVar11 = 1;
      goto LAB_1400bb30b;
    }
    iVar3 = FUN_1416d9df0(0x14217f1f8,&uStack_f8,uVar8,0);
    uVar1 = _DAT_14217f208;
    if ((iVar3 == 0) ||
       (iVar3 = FUN_1416d9df0(0x14217f20c,&uStack_f8,uVar8,0), uVar1 = _DAT_14217f21c, iVar3 == 0))
    goto joined_r0x0001400bb317;
    iVar3 = FUN_1416d9df0(0x14217f220,&uStack_f8,uVar8,0);
    uVar1 = _DAT_14217f230;
    if (iVar3 != 0) {
      iVar3 = FUN_1416d9df0(0x14217f234,&uStack_f8,uVar8,0);
      uVar4 = 0x3e;
      uVar1 = _DAT_14217f244;
      if (iVar3 == 0) goto joined_r0x0001400bbb22;
      goto LAB_1400bbf0c;
    }
joined_r0x0001400bbb22:
    uVar7 = (ulonglong)uVar1;
    if (uVar7 < 4) goto LAB_1400bb31d;
LAB_1400bb877:
    uVar4 = 0x3e;
  }
LAB_1400bbf0c:
  uStack_d8 = uVar4;
code_r0x0001400bbf12:
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

