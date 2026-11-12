
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_game(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double **ppdVar13;
  ulonglong uVar14;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 auStack_638 [16];
  longlong lStack_628;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined1 auStack_5e8 [12];
  uint uStack_5dc;
  undefined1 auStack_5d8 [12];
  uint uStack_5cc;
  undefined1 auStack_5c8 [12];
  uint uStack_5bc;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  uint uStack_5a4;
  longlong lStack_5a0;
  undefined8 uStack_590;
  uint uStack_584;
  longlong lStack_580;
  undefined8 uStack_570;
  uint uStack_564;
  longlong lStack_560;
  undefined8 uStack_550;
  uint uStack_544;
  longlong lStack_540;
  undefined8 uStack_530;
  uint uStack_524;
  longlong lStack_520;
  undefined8 uStack_510;
  uint uStack_504;
  longlong lStack_500;
  undefined8 uStack_4f0;
  uint uStack_4e4;
  longlong lStack_4e0;
  undefined8 uStack_4d0;
  uint uStack_4c4;
  longlong lStack_4c0;
  undefined8 uStack_4b0;
  uint uStack_4a4;
  longlong lStack_4a0;
  undefined8 uStack_490;
  uint uStack_484;
  longlong lStack_480;
  undefined8 uStack_470;
  uint uStack_464;
  longlong lStack_460;
  undefined8 uStack_450;
  uint uStack_444;
  longlong lStack_440;
  undefined8 uStack_430;
  uint uStack_424;
  longlong lStack_420;
  undefined8 uStack_410;
  uint uStack_404;
  longlong lStack_400;
  undefined8 uStack_3f0;
  uint uStack_3e4;
  undefined8 uStack_3e0;
  uint uStack_3d4;
  undefined8 uStack_3d0;
  uint uStack_3c4;
  undefined8 uStack_3c0;
  uint uStack_3b4;
  undefined8 uStack_3b0;
  uint uStack_3a4;
  undefined8 uStack_3a0;
  uint uStack_394;
  undefined8 uStack_390;
  uint uStack_384;
  undefined8 uStack_380;
  uint uStack_374;
  undefined8 uStack_370;
  uint uStack_364;
  undefined8 uStack_360;
  uint uStack_354;
  undefined8 uStack_350;
  uint uStack_344;
  undefined8 uStack_340;
  uint uStack_334;
  undefined8 uStack_330;
  uint uStack_324;
  undefined8 uStack_320;
  uint uStack_314;
  undefined8 uStack_310;
  uint uStack_304;
  undefined8 uStack_300;
  uint uStack_2f4;
  undefined8 uStack_2f0;
  uint uStack_2e4;
  undefined8 uStack_2e0;
  uint uStack_2d4;
  undefined8 uStack_2d0;
  uint uStack_2c4;
  undefined8 uStack_2c0;
  uint uStack_2b4;
  undefined8 uStack_2b0;
  uint uStack_2a4;
  undefined8 uStack_2a0;
  uint uStack_294;
  undefined8 uStack_290;
  uint uStack_284;
  undefined8 uStack_280;
  uint uStack_274;
  undefined8 uStack_270;
  uint uStack_264;
  undefined8 uStack_260;
  uint uStack_254;
  undefined8 uStack_250;
  uint uStack_244;
  undefined8 uStack_240;
  uint uStack_234;
  undefined8 uStack_230;
  uint uStack_224;
  longlong lStack_220;
  undefined8 uStack_210;
  uint uStack_204;
  double dStack_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  double dStack_1f0;
  uint uStack_1e4;
  double dStack_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  double dStack_1d0;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  double dStack_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  double dStack_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  uint uStack_194;
  undefined8 uStack_190;
  double dStack_188;
  uint uStack_17c;
  double dStack_178;
  uint uStack_16c;
  double dStack_168;
  uint uStack_15c;
  double dStack_158;
  uint uStack_14c;
  double dStack_148;
  uint uStack_13c;
  double dStack_138;
  uint uStack_12c;
  double dStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  double dStack_108;
  uint uStack_fc;
  double *pdStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  double *pdStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  double dStack_90;
  uint uStack_84;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_c0 = &UNK_141983439;
  uStack_b8 = 0;
  uStack_c8 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_c8;
  uStack_14c = 0xffffff;
  dStack_158 = 0.0;
  uStack_13c = 0xffffff;
  dStack_148 = 0.0;
  uStack_12c = 0xffffff;
  dStack_138 = 0.0;
  uStack_11c = 0xffffff;
  dStack_128 = 0.0;
  uStack_84 = 0xffffff;
  dStack_90 = 0.0;
  uStack_fc = 0xffffff;
  dStack_108 = 0.0;
  uStack_16c = 0xffffff;
  dStack_178 = 0.0;
  _DAT_142182d90 = param_1;
  puStack_5b8 = param_3;
  uStack_80 = param_2;
  plStack_78 = param_1;
  uStack_190 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18a9e);
  uStack_204 = 0xffffff;
  uStack_210 = 0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_3e4 = 0xffffff;
  uStack_3f0 = 0;
  uStack_3d4 = 0xffffff;
  uStack_3e0 = 0;
  uStack_3c4 = 0xffffff;
  uStack_3d0 = 0;
  uStack_3b4 = 0xffffff;
  uStack_3c0 = 0;
  uStack_3a4 = 0xffffff;
  uStack_3b0 = 0;
  uStack_394 = 0xffffff;
  uStack_3a0 = 0;
  uStack_384 = 0xffffff;
  uStack_390 = 0;
  uStack_374 = 0xffffff;
  uStack_380 = 0;
  uStack_364 = 0xffffff;
  uStack_370 = 0;
  uStack_354 = 0xffffff;
  uStack_360 = 0;
  uStack_344 = 0xffffff;
  uStack_350 = 0;
  uStack_334 = 0xffffff;
  uStack_340 = 0;
  uStack_324 = 0xffffff;
  uStack_330 = 0;
  uStack_314 = 0xffffff;
  uStack_320 = 0;
  uStack_304 = 0xffffff;
  uStack_310 = 0;
  uStack_2f4 = 0xffffff;
  uStack_300 = 0;
  uStack_2e4 = 0xffffff;
  uStack_2f0 = 0;
  uStack_2d4 = 0xffffff;
  uStack_2e0 = 0;
  uStack_2c4 = 0xffffff;
  uStack_2d0 = 0;
  uStack_2b4 = 0xffffff;
  uStack_2c0 = 0;
  uStack_2a4 = 0xffffff;
  uStack_2b0 = 0;
  uStack_294 = 0xffffff;
  uStack_2a0 = 0;
  uStack_284 = 0xffffff;
  uStack_290 = 0;
  uStack_274 = 0xffffff;
  uStack_280 = 0;
  uStack_264 = 0xffffff;
  uStack_270 = 0;
  uStack_254 = 0xffffff;
  uStack_260 = 0;
  uStack_244 = 0xffffff;
  uStack_250 = 0;
  uStack_234 = 0xffffff;
  uStack_240 = 0;
  uStack_194 = 0xffffff;
  uStack_1a0 = 0;
  uStack_17c = 0xffffff;
  dStack_188 = 0.0;
  uStack_1e4 = 0xffffff;
  dStack_1f0 = 0.0;
  uStack_15c = 0xffffff;
  dStack_168 = 0.0;
  uStack_1f4 = 0xffffff;
  dStack_200 = 0.0;
  uStack_618 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_610 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x1885a);
  uStack_a8 = (ulonglong)(uint)uStack_a8;
  uStack_b0 = 0;
  uStack_d0 = (ulonglong)(uint)uStack_d0;
  uStack_d8 = 0;
  *(undefined4 *)((longlong)puStack_5b8 + 0xc) = 5;
  *puStack_5b8 = 0;
  FUN_1416ab750(_DAT_1420dcd10);
  uStack_b8 = 0x88;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  gml_Script_save_GENERAL(plStack_78,uStack_80,&uStack_b0,0,0);
  uStack_b8 = 0x89;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  gml_Script_save_CONTROL(plStack_78,uStack_80,&uStack_b0,0,0);
  uStack_b8 = 0x8a;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  uVar5 = 0;
  gml_Script_save_CHARACTER(plStack_78,uStack_80,&uStack_b0,0,0);
  uStack_b8 = 0x8d;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  FUN_140002730(&dStack_158,0x1420b2a98);
  pdStack_f8 = &dStack_158;
  FUN_140002730(&dStack_148,0x1420b2aa8);
  pdStack_f0 = &dStack_148;
  FUN_140002730(&dStack_138,0x1420b2aa8);
  pdStack_e8 = &dStack_138;
  uVar11 = CONCAT44(uVar5,_DAT_1420da220);
  uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,3,uVar11,&pdStack_f8);
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1400019a0(&dStack_90,uVar6);
  uStack_b8 = 0x8e;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  pdStack_f8 = &dStack_90;
  FUN_140002730(&dStack_148,0x14217f150);
  pdStack_f0 = &dStack_148;
  FUN_140002730(&dStack_138,0x14217f150);
  pdStack_e8 = &dStack_138;
  ppdVar13 = &pdStack_f8;
  uVar12 = CONCAT44(uVar5,_DAT_1420da650);
  FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,3,uVar12,ppdVar13);
  uStack_b8 = 0x92;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b09,0x80000000,&uStack_5f8,uVar12,uVar14);
  if ((uStack_84 & 0xffffff) == 0) {
    dVar10 = dStack_90;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&uStack_5f8);
  uStack_b8 = 0x93;
  uStack_608 = 0;
  uStack_600 = 0;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18abd,0x80000000,&uStack_608,uVar12,uVar14);
  if ((uStack_84 & 0xffffff) == 0) {
    dVar10 = dStack_90;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&uStack_608);
  uStack_b8 = 0x94;
  uStack_648 = 0;
  uStack_640 = 0;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18b9c,0x80000000,&uStack_648,uVar12,uVar14);
  if ((uStack_84 & 0xffffff) == 0) {
    dVar10 = dStack_90;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&uStack_648);
  uStack_b8 = 0x96;
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_108);
  }
  uStack_fc = 0;
  dStack_108 = 0.0;
  while( true ) {
    ppdVar13 = (double **)(uVar14 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18b09,0x80000000,&uStack_5f8,uVar12,ppdVar13);
    iVar2 = FUN_1416d9df0(&dStack_108,&uStack_5f8,_DAT_1420f6b08,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    uStack_b8 = 0x97;
    if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_178);
    }
    uStack_16c = 0;
    dStack_178 = 0.0;
    while( true ) {
      uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18abd,0x80000000,&uStack_608,uVar12,uVar14);
      iVar2 = FUN_1416d9df0(&dStack_178,&uStack_608,_DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      uStack_b8 = 0x98;
      if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b0);
      }
      uVar5 = (undefined4)(uVar12 >> 0x20);
      uStack_b0 = 0;
      uStack_a8 = 0x500000000;
      if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_d8);
      }
      uStack_d8 = 0;
      uStack_d0 = 0x500000000;
      FUN_1400019a0(&dStack_158,uStack_190);
      pdStack_f8 = &dStack_158;
      pdStack_f0 = &dStack_108;
      uVar11 = CONCAT44(uVar5,_DAT_1420da240);
      pdStack_e8 = &dStack_178;
      uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,3,uVar11,&pdStack_f8);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      FUN_1400019a0(&dStack_128,uVar6);
      pdStack_e0 = &dStack_128;
      ppdVar13 = &pdStack_e0;
      uVar12 = CONCAT44(uVar5,_DAT_1420da230);
      uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,uVar12,ppdVar13);
      if ((uStack_84 & 0xffffff) == 0) {
        dVar10 = dStack_90;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_90);
      }
      FUN_1416fbbe0((longlong)dVar10,3,uVar6);
      switch(uStack_16c & 0xffffff) {
      case 1:
        dStack_178 = (double)FUN_1416940c0(&dStack_178);
        dStack_178 = dStack_178 + 1.0;
        uStack_16c = 0;
        break;
      default:
        FUN_140001d70(&UNK_141981e6a,&dStack_178,&dStack_178);
        break;
      case 7:
        dStack_178 = (double)CONCAT44(dStack_178._4_4_,dStack_178._0_4_ + 1);
        break;
      case 10:
        dStack_178 = (double)((longlong)dStack_178 + 1);
        break;
      case 0xd:
        uStack_16c = 0;
      case 0:
        dStack_178 = dStack_178 + 1.0;
      }
    }
    switch(uStack_fc & 0xffffff) {
    case 1:
      dStack_108 = (double)FUN_1416940c0(&dStack_108);
      dStack_108 = dStack_108 + 1.0;
      uStack_fc = 0;
      break;
    default:
      FUN_140001d70(&UNK_141981e6a,&dStack_108,&dStack_108);
      break;
    case 7:
      dStack_108 = (double)CONCAT44(dStack_108._4_4_,dStack_108._0_4_ + 1);
      break;
    case 10:
      dStack_108 = (double)((longlong)dStack_108 + 1);
      break;
    case 0xd:
      uStack_fc = 0;
    case 0:
      dStack_108 = dStack_108 + 1.0;
    }
  }
  uStack_b8 = 0x9c;
  if ((0x46U >> (uStack_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_210);
  }
  uStack_204 = 0;
  uStack_210 = 0xc010000000000000;
  uStack_5a4 = 0;
  uStack_5b0 = 0x4054000000000000;
  iVar2 = FUN_1416ab810(auStack_638,&plStack_78,&uStack_80,&uStack_5b0);
  if ((0x46U >> (uStack_5a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5b0);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0x9f;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(auStack_638,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(auStack_638,&plStack_78,&uStack_80);
  uStack_584 = 0;
  uStack_590 = 0x4084280000000000;
  iVar2 = FUN_1416ab810(&uStack_5b0,&plStack_78,&uStack_80,&uStack_590);
  if ((0x46U >> (uStack_584 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_590);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xa3;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_5b0,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_5b0,&plStack_78,&uStack_80);
  uStack_564 = 0;
  uStack_570 = 0x4057800000000000;
  iVar2 = FUN_1416ab810(&uStack_590,&plStack_78,&uStack_80,&uStack_570);
  if ((0x46U >> (uStack_564 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_570);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xa7;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_590,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_590,&plStack_78,&uStack_80);
  uStack_544 = 0;
  uStack_550 = 0x407f400000000000;
  iVar2 = FUN_1416ab810(&uStack_570,&plStack_78,&uStack_80,&uStack_550);
  if ((0x46U >> (uStack_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_550);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xab;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_570,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_570,&plStack_78,&uStack_80);
  uStack_524 = 0;
  uStack_530 = 0x404b800000000000;
  iVar2 = FUN_1416ab810(&uStack_550,&plStack_78,&uStack_80,&uStack_530);
  if ((0x46U >> (uStack_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_530);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xaf;
      puVar7 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x1890a);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0x3ff0000000000000;
      uStack_b8 = 0xb0;
      puVar7 = (undefined8 *)(**(code **)(*plStack_78 + 0x10))(plStack_78,0x1880b);
      if ((0x46U >> (*(uint *)((longlong)puVar7 + 0xc) & 0x1f) & 1) != 0) {
        FUN_140001b50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
      cVar1 = func_0x0001416abe60(&uStack_550,&plStack_78,&uStack_80);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_550,&plStack_78,&uStack_80);
  uStack_504 = 0;
  uStack_510 = 0x4050c00000000000;
  iVar2 = FUN_1416ab810(&uStack_530,&plStack_78,&uStack_80,&uStack_510);
  if ((0x46U >> (uStack_504 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_510);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xb4;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_530,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_530,&plStack_78,&uStack_80);
  uStack_224 = 0;
  uStack_230 = 0x404a000000000000;
  iVar2 = FUN_1416ab810(&uStack_510,&plStack_78,&uStack_80,&uStack_230);
  if ((0x46U >> (uStack_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_230);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xb7;
      ppdVar13 = (double **)((ulonglong)ppdVar13 & 0xffffffffffffff00);
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,ppdVar13);
      uStack_224 = 0;
      uStack_230 = 0x4080100000000000;
      iVar2 = FUN_1416d9df0(&uStack_118,&uStack_230,_DAT_1420f6b08,0);
      if (iVar2 != 0) {
        uStack_b8 = 0xb8;
        FUN_1416f8210(plStack_78,uStack_80,0,0);
      }
      cVar1 = func_0x0001416abe60(&uStack_510,&plStack_78,&uStack_80);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_510,&plStack_78,&uStack_80);
  uStack_4e4 = 0;
  uStack_4f0 = 0x407f500000000000;
  iVar2 = FUN_1416ab810(&uStack_230,&plStack_78,&uStack_80,&uStack_4f0);
  if ((0x46U >> (uStack_4e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4f0);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xbc;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_230,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_230,&plStack_78,&uStack_80);
  uStack_4c4 = 0;
  uStack_4d0 = 0x4063800000000000;
  iVar2 = FUN_1416ab810(&uStack_4f0,&plStack_78,&uStack_80,&uStack_4d0);
  if ((0x46U >> (uStack_4c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4d0);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xc0;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_4f0,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_4f0,&plStack_78,&uStack_80);
  uStack_4a4 = 0;
  uStack_4b0 = 0x4063400000000000;
  iVar2 = FUN_1416ab810(&uStack_4d0,&plStack_78,&uStack_80,&uStack_4b0);
  if ((0x46U >> (uStack_4a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b0);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xc4;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_4d0,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_4d0,&plStack_78,&uStack_80);
  uStack_484 = 0;
  uStack_490 = 0x4061000000000000;
  iVar2 = FUN_1416ab810(&uStack_4b0,&plStack_78,&uStack_80,&uStack_490);
  if ((0x46U >> (uStack_484 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_490);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 200;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_4b0,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_4b0,&plStack_78,&uStack_80);
  uStack_464 = 0;
  uStack_470 = 0x4084680000000000;
  iVar2 = FUN_1416ab810(&uStack_490,&plStack_78,&uStack_80,&uStack_470);
  if ((0x46U >> (uStack_464 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_470);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xcc;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_490,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_490,&plStack_78,&uStack_80);
  uStack_444 = 0;
  uStack_450 = 0x4064e00000000000;
  iVar2 = FUN_1416ab810(&uStack_470,&plStack_78,&uStack_80,&uStack_450);
  if ((0x46U >> (uStack_444 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_450);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xd0;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_470,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_470,&plStack_78,&uStack_80);
  uStack_424 = 0;
  uStack_430 = 0x4085000000000000;
  iVar2 = FUN_1416ab810(&uStack_450,&plStack_78,&uStack_80,&uStack_430);
  if ((0x46U >> (uStack_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_430);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xd4;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_450,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_450,&plStack_78,&uStack_80);
  uStack_404 = 0;
  uStack_410 = 0x4035000000000000;
  iVar2 = FUN_1416ab810(&uStack_430,&plStack_78,&uStack_80,&uStack_410);
  if ((0x46U >> (uStack_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_410);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xd8;
      FUN_1416f8210(plStack_78,uStack_80,0,0);
      cVar1 = func_0x0001416abe60(&uStack_430,&plStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_430,&plStack_78,&uStack_80);
  uStack_94 = 0;
  dStack_a0 = -3.0;
  iVar2 = FUN_1416ab810(&uStack_410,&plStack_78,&uStack_80,&dStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a0);
  }
  if (0 < iVar2) {
    do {
      uStack_b8 = 0xdb;
      ppdVar13 = (double **)((ulonglong)ppdVar13 & 0xffffffffffffff00);
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a58,0x80000000,&uStack_3f0,uVar12,ppdVar13);
      uStack_94 = 0;
      dStack_a0 = 1.0;
      iVar2 = FUN_1416d9df0(&uStack_3f0,&dStack_a0,_DAT_1420f6b08,0);
      if (iVar2 != 0) {
        ppdVar13 = (double **)((ulonglong)ppdVar13 & 0xffffffffffffff00);
        uVar12 = uVar12 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,ppdVar13);
        uStack_94 = 0;
        dStack_a0 = 79.0;
        iVar2 = FUN_1416d9df0(&uStack_118,&dStack_a0,_DAT_1420f6b08,0);
        if (iVar2 != 0) {
          ppdVar13 = (double **)((ulonglong)ppdVar13 & 0xffffffffffffff00);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,ppdVar13);
          uStack_94 = 0;
          dStack_a0 = 64.0;
          iVar2 = FUN_1416d9df0(&uStack_118,&dStack_a0,_DAT_1420f6b08,0);
          if (iVar2 != 0) {
            ppdVar13 = (double **)((ulonglong)ppdVar13 & 0xffffffffffffff00);
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,ppdVar13);
            uStack_94 = 0;
            dStack_a0 = 65.0;
            iVar2 = FUN_1416d9df0(&uStack_118,&dStack_a0,_DAT_1420f6b08,0);
            if (iVar2 != 0) {
              uStack_b8 = 0xde;
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_d8);
              }
              uStack_d8 = 0;
              uStack_d0 = 0x500000000;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,
                            (ulonglong)ppdVar13 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar12 >> 0x20);
              FUN_1400019a0(&dStack_158,&uStack_118);
              pdStack_f8 = &dStack_158;
              uVar11 = CONCAT44(uVar5,_DAT_1420da320);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,1,uVar11,&pdStack_f8);
              uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
              FUN_1400019a0(&dStack_148,uVar6);
              pdStack_f0 = &dStack_148;
              ppdVar13 = &pdStack_f0;
              uVar12 = CONCAT44(uVar5,_DAT_1420da2b0);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,uVar12,ppdVar13);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,0xb,uVar6);
              uStack_b8 = 0xdf;
              uVar14 = (ulonglong)ppdVar13 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d59f8,0x80000000,&uStack_3e0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,8,&uStack_3e0);
              uStack_b8 = 0xe0;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a08,0x80000000,&uStack_3d0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,8,&uStack_3d0);
              uStack_b8 = 0xe1;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d58e8,0x80000000,&uStack_3c0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,8,&uStack_3c0);
              uStack_b8 = 0xe2;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d58f8,0x80000000,&uStack_3b0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,8,&uStack_3b0);
              uStack_b8 = 0xe3;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a18,0x80000000,&uStack_3a0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_3a0);
              uStack_b8 = 0xe4;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a98,0x80000000,&uStack_390,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_390);
              uStack_b8 = 0xe5;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5aa8,0x80000000,&uStack_380,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_380);
              uStack_b8 = 0xe6;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5ab8,0x80000000,&uStack_370,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_370);
              uStack_b8 = 0xe7;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5ac8,0x80000000,&uStack_360,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_360);
              uStack_b8 = 0xe8;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5ad8,0x80000000,&uStack_350,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_350);
              uStack_b8 = 0xe9;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5ae8,0x80000000,&uStack_340,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_340);
              uStack_b8 = 0xea;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5af8,0x80000000,&uStack_330,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_330);
              uStack_b8 = 0xeb;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5b08,0x80000000,&uStack_320,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,8,&uStack_320);
              uStack_b8 = 0xec;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5b18,0x80000000,&uStack_310,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,5,&uStack_310);
              uStack_b8 = 0xed;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5b28,0x80000000,&uStack_300,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,5,&uStack_300);
              uStack_b8 = 0xef;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,0,&uStack_2f0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2f0);
              uStack_b8 = 0xf0;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,1,&uStack_2e0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2e0);
              uStack_b8 = 0xf1;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,2,&uStack_2d0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2d0);
              uStack_b8 = 0xf2;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,3,&uStack_2c0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2c0);
              uStack_b8 = 0xf3;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,4,&uStack_2b0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2b0);
              uStack_b8 = 0xf4;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,5,&uStack_2a0,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_2a0);
              uStack_b8 = 0xf5;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,6,&uStack_290,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_290);
              uStack_b8 = 0xf6;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,7,&uStack_280,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_280);
              uStack_b8 = 0xf7;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,8,&uStack_270,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_270);
              uStack_b8 = 0xf8;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,9,&uStack_260,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_260);
              uStack_b8 = 0xf9;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,10,&uStack_250,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_250);
              uStack_b8 = 0xfa;
              uVar14 = uVar14 & 0xffffffffffffff00;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,0xb,&uStack_240,uVar12,uVar14);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,4,&uStack_240);
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_1a0,uVar12,
                            uVar14 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar12 >> 0x20);
              FUN_1400019a0(&dStack_158,&uStack_1a0);
              pdStack_f8 = &dStack_158;
              if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_148);
              }
              FUN_1416ab000(&dStack_148,0x1420b2a65);
              pdStack_f0 = &dStack_148;
              ppdVar13 = &pdStack_f8;
              uVar12 = CONCAT44(uVar5,_DAT_1420da350);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,2,uVar12,ppdVar13);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                uStack_b8 = 0xfc;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uStack_190 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e49);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,
                              (ulonglong)ppdVar13 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar12 >> 0x20);
                FUN_1400019a0(&dStack_138,&uStack_118);
                pdStack_e8 = &dStack_138;
                FUN_140002730(&dStack_128,0x1420b2ab8);
                pdStack_e0 = &dStack_128;
                ppdVar13 = &pdStack_e8;
                uVar12 = CONCAT44(uVar5,_DAT_1420da330);
                uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,2,uVar12,ppdVar13);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
                  uStack_94 = 0;
                  dStack_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
                    uStack_94 = 0;
                    dStack_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                      uStack_94 = 0;
                      dStack_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                        uStack_94 = 0;
                        dStack_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                dStack_a0 = (double)bVar9 * 0.5;
                uStack_94 = 0;
                FUN_140003e00(uStack_190,&dStack_a0);
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
              }
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_1a0,uVar12,
                            (ulonglong)ppdVar13 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar12 >> 0x20);
              FUN_1400019a0(&dStack_158,&uStack_1a0);
              pdStack_f8 = &dStack_158;
              if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_148);
              }
              FUN_1416ab000(&dStack_148,0x1420b2a67);
              pdStack_f0 = &dStack_148;
              ppdVar13 = &pdStack_f8;
              uVar12 = CONCAT44(uVar5,_DAT_1420da350);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,2,uVar12,ppdVar13);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                uStack_b8 = 0xfd;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uStack_190 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4b);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,
                              (ulonglong)ppdVar13 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar12 >> 0x20);
                FUN_1400019a0(&dStack_138,&uStack_118);
                pdStack_e8 = &dStack_138;
                FUN_140002730(&dStack_128,0x1420b2ab8);
                pdStack_e0 = &dStack_128;
                ppdVar13 = &pdStack_e8;
                uVar12 = CONCAT44(uVar5,_DAT_1420da330);
                uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,2,uVar12,ppdVar13);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
                  uStack_94 = 0;
                  dStack_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
                    uStack_94 = 0;
                    dStack_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                      uStack_94 = 0;
                      dStack_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                        uStack_94 = 0;
                        dStack_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                dStack_a0 = (double)bVar9 * 0.5;
                uStack_94 = 0;
                FUN_140003e00(uStack_190,&dStack_a0);
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
              }
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_1a0,uVar12,
                            (ulonglong)ppdVar13 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar12 >> 0x20);
              FUN_1400019a0(&dStack_158,&uStack_1a0);
              pdStack_f8 = &dStack_158;
              if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_148);
              }
              FUN_1416ab000(&dStack_148,0x1420b2a6a);
              pdStack_f0 = &dStack_148;
              ppdVar13 = &pdStack_f8;
              uVar12 = CONCAT44(uVar5,_DAT_1420da350);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,2,uVar12,ppdVar13);
              cVar1 = FUN_1416927d0(uVar6);
              if (cVar1 != '\0') {
                uStack_b8 = 0xfe;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uStack_190 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4d);
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_118,uVar12,
                              (ulonglong)ppdVar13 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar12 >> 0x20);
                FUN_1400019a0(&dStack_138,&uStack_118);
                pdStack_e8 = &dStack_138;
                FUN_140002730(&dStack_128,0x1420b2ab8);
                pdStack_e0 = &dStack_128;
                ppdVar13 = &pdStack_e8;
                uVar12 = CONCAT44(uVar5,_DAT_1420da330);
                uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,2,uVar12,ppdVar13);
                cVar1 = FUN_1416927d0(uVar6);
                if (cVar1 == '\0') {
                  bVar9 = false;
                }
                else {
                  uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
                  uStack_94 = 0;
                  dStack_a0 = 1.0;
                  bVar9 = false;
                  iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                  if (iVar2 == 0) {
                    uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
                    uStack_94 = 0;
                    dStack_a0 = 1.0;
                    bVar9 = false;
                    iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                      uStack_94 = 0;
                      dStack_a0 = 0.0;
                      bVar9 = false;
                      iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                      if (iVar2 == 0) {
                        uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                        uStack_94 = 0;
                        dStack_a0 = 0.0;
                        iVar2 = FUN_1416d9df0(uVar6,&dStack_a0,_DAT_1420f6b08,0);
                        bVar9 = iVar2 != 0;
                      }
                    }
                  }
                }
                dStack_a0 = (double)bVar9 * 0.5;
                uStack_94 = 0;
                FUN_140003e00(uStack_190,&dStack_a0);
                if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
                  FUN_140001b50(&dStack_a0);
                }
              }
              uStack_b8 = 0x100;
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              uVar12 = uVar12 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_1a0,uVar12,
                            (ulonglong)ppdVar13 & 0xffffffffffffff00);
              uVar5 = (undefined4)(uVar12 >> 0x20);
              FUN_1400019a0(&dStack_158,&uStack_1a0);
              pdStack_f8 = &dStack_158;
              uVar11 = CONCAT44(uVar5,_DAT_1420da660);
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,uVar11,&pdStack_f8);
              uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
              FUN_1400019a0(&dStack_188,uVar6);
              if ((0x46U >> (uStack_1e4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_1f0);
              }
              uStack_1e4 = 0;
              dStack_1f0 = 0.0;
              uStack_b8 = 0x102;
              if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_b0);
              }
              uStack_b0 = 0;
              uStack_a8 = 0x500000000;
              ppdVar13 = (double **)CONCAT44(uVar5,_DAT_1420da250);
              pdStack_f8 = &dStack_188;
              uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,ppdVar13,&pdStack_f8);
              if ((uStack_84 & 0xffffff) == 0) {
                dVar10 = dStack_90;
              }
              else {
                dVar10 = (double)FUN_1416940c0(&dStack_90);
              }
              FUN_1416fbbe0((longlong)dVar10,3,uVar6);
              uStack_b8 = 0x104;
              if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_168);
              }
              uStack_15c = 0;
              dStack_168 = 0.0;
              while( true ) {
                uVar5 = (undefined4)((ulonglong)ppdVar13 >> 0x20);
                if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b0);
                }
                uStack_b0 = 0;
                uStack_a8 = 0x500000000;
                ppdVar13 = &pdStack_f8;
                uVar12 = CONCAT44(uVar5,_DAT_1420da250);
                pdStack_f8 = &dStack_188;
                uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,uVar12,ppdVar13);
                iVar2 = FUN_1416d9df0(&dStack_168,uVar6,_DAT_1420f6b08,1);
                if ((iVar2 == -2) || (-1 < iVar2)) break;
                uStack_b8 = 0x105;
                if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_d8);
                }
                uStack_d8 = 0;
                uStack_d0 = 0x500000000;
                uVar12 = uVar12 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_1a0,uVar12,
                              (ulonglong)ppdVar13 & 0xffffffffffffff00);
                uVar5 = (undefined4)(uVar12 >> 0x20);
                FUN_1400019a0(&dStack_148,&uStack_1a0);
                pdStack_f0 = &dStack_148;
                iVar2 = FUN_141693b30(&dStack_168);
                if (((uStack_17c & 0xffffff) == 2) && (dStack_188 != 0.0)) {
                  func_0x0001416ba910();
                  if ((iVar2 < 0) || (iVar3 = func_0x0001416ba8f0(dStack_188), iVar3 <= iVar2)) {
                    uVar4 = func_0x0001416ba8f0(dStack_188);
                    FUN_1416ab080(&UNK_141981ee8,iVar2,uVar4);
                    pdVar8 = (double *)0x0;
                  }
                  else {
                    pdVar8 = (double *)func_0x0001416ba8e0(dStack_188,iVar2);
                  }
                }
                else {
                  FUN_1416ab080(&UNK_141981f1a);
                  pdVar8 = &dStack_188;
                }
                FUN_1400019a0(&dStack_138,pdVar8);
                pdStack_e8 = &dStack_138;
                uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,2,
                                      CONCAT44(uVar5,_DAT_1420da670),&pdStack_f0);
                FUN_1400019a0(&dStack_1f0,uVar6);
                uStack_b8 = 0x107;
                iVar2 = FUN_141693b30(&dStack_168);
                if (((uStack_17c & 0xffffff) == 2) && (dStack_188 != 0.0)) {
                  func_0x0001416ba910();
                  if ((-1 < iVar2) && (iVar3 = func_0x0001416ba8f0(dStack_188), iVar2 < iVar3)) {
                    pdVar8 = (double *)func_0x0001416ba8e0(dStack_188,iVar2);
                    goto joined_r0x0001400c1cb9;
                  }
                  uVar5 = func_0x0001416ba8f0(dStack_188);
                  FUN_1416ab080(&UNK_141981ee8,iVar2,uVar5);
                  pdVar8 = (double *)0x0;
                  if ((uStack_84 & 0xffffff) != 0) goto LAB_1400c1cbb;
LAB_1400c1cfb:
                  dVar10 = dStack_90;
                }
                else {
                  FUN_1416ab080(&UNK_141981f1a);
                  pdVar8 = &dStack_188;
joined_r0x0001400c1cb9:
                  if ((uStack_84 & 0xffffff) == 0) goto LAB_1400c1cfb;
LAB_1400c1cbb:
                  dVar10 = (double)FUN_1416940c0(&dStack_90);
                }
                FUN_1416fbbe0((longlong)dVar10,0xb,pdVar8);
                uStack_b8 = 0x11b;
                if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_b0);
                }
                uStack_b0 = 0;
                uStack_a8 = 0x500000000;
                pdStack_f8 = &dStack_90;
                pdStack_f0 = &dStack_1f0;
                ppdVar13 = &pdStack_f8;
                gml_Script__save_type(plStack_78,uStack_80,&uStack_b0,2,ppdVar13);
                switch(uStack_15c & 0xffffff) {
                case 1:
                  dStack_168 = (double)FUN_1416940c0(&dStack_168);
                  dStack_168 = dStack_168 + 1.0;
                  uStack_15c = 0;
                  break;
                default:
                  FUN_140001d70(&UNK_141981e6a,&dStack_168,&dStack_168);
                  break;
                case 7:
                  dStack_168 = (double)CONCAT44(dStack_168._4_4_,dStack_168._0_4_ + 1);
                  break;
                case 10:
                  dStack_168 = (double)((longlong)dStack_168 + 1);
                  break;
                case 0xd:
                  uStack_15c = 0;
                case 0:
                  dStack_168 = dStack_168 + 1.0;
                }
              }
            }
          }
        }
      }
      cVar1 = func_0x0001416abe60(&uStack_410,&plStack_78,&uStack_80);
    } while (cVar1 != '\0');
  }
  uVar5 = (undefined4)(uVar12 >> 0x20);
  FUN_1416ab620(&uStack_410,&plStack_78,&uStack_80);
  uStack_b8 = 0x164;
  uStack_94 = 0;
  dStack_a0 = 0.0;
  if ((uStack_84 & 0xffffff) == 0) {
    dVar10 = dStack_90;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_90);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&dStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a0);
  }
  uStack_b8 = 0x166;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  uStack_d8 = 0;
  uStack_d0 = 0x500000000;
  func_0x0001416ce870(plStack_78,_DAT_1420d59d8,0x80000000,&dStack_200);
  FUN_1400019a0(&dStack_158,uStack_618);
  pdStack_f0 = &dStack_90;
  pdStack_f8 = &dStack_158;
  FUN_1416ac010(auStack_5e8,0x1420b2a8d);
  FUN_1416ac010(auStack_5d8,0x1420b2a85);
  uVar11 = CONCAT44(uVar5,_DAT_1420da2b0);
  uVar6 = FUN_1416ab210(plStack_78,uStack_80,&uStack_d8,1,uVar11,&pdStack_f8);
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1416ac010(auStack_5c8,0x1420b2a70);
  uStack_1a4 = uStack_1f4;
  uStack_1a8 = uStack_1f8;
  if ((0x46U >> (uStack_1f4 & 0x1f) & 1) == 0) {
    dStack_1b0 = dStack_200;
  }
  else {
    FUN_1400c5d80(&dStack_1b0,&dStack_200);
  }
  FUN_140003ca0(&dStack_1b0,auStack_5c8);
  uStack_1b4 = uStack_1a4;
  uStack_1b8 = uStack_1a8;
  if ((0x46U >> (uStack_1a4 & 0x1f) & 1) == 0) {
    dStack_1c0 = dStack_1b0;
  }
  else {
    FUN_1400c5d80(&dStack_1c0,&dStack_1b0);
  }
  FUN_140003ca0(&dStack_1c0,uVar6);
  uStack_1c4 = uStack_1b4;
  uStack_1c8 = uStack_1b8;
  if ((0x46U >> (uStack_1b4 & 0x1f) & 1) == 0) {
    dStack_1d0 = dStack_1c0;
  }
  else {
    FUN_1400c5d80(&dStack_1d0,&dStack_1c0);
  }
  FUN_140003ca0(&dStack_1d0,auStack_5d8);
  uStack_1d4 = uStack_1c4;
  uStack_1d8 = uStack_1c8;
  if ((0x46U >> (uStack_1c4 & 0x1f) & 1) == 0) {
    dStack_1e0 = dStack_1d0;
  }
  else {
    FUN_1400c5d80(&dStack_1e0,&dStack_1d0);
  }
  FUN_140003ca0(&dStack_1e0,uStack_610);
  uStack_94 = uStack_1d4;
  uStack_98 = uStack_1d8;
  if ((0x46U >> (uStack_1d4 & 0x1f) & 1) == 0) {
    dStack_a0 = dStack_1e0;
  }
  else {
    FUN_1400c5d80(&dStack_a0,&dStack_1e0);
  }
  FUN_140003ca0(&dStack_a0,auStack_5e8);
  FUN_1400019a0(&dStack_138,&dStack_a0);
  if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_a0);
  }
  if ((0x46U >> (uStack_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1e0);
  }
  if ((0x46U >> (uStack_1c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1d0);
  }
  if ((0x46U >> (uStack_1b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1c0);
  }
  if ((0x46U >> (uStack_1a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1b0);
  }
  if ((0x46U >> (uStack_5bc & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_5c8);
  }
  if ((0x46U >> (uStack_5cc & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_5d8);
  }
  if ((0x46U >> (uStack_5dc & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_5e8);
  }
  pdStack_e8 = &dStack_138;
  uVar6 = CONCAT44(uVar5,_DAT_1420da360);
  FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,2,uVar6,&pdStack_f0);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_b8 = 0x167;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  pdStack_f8 = &dStack_90;
  FUN_1416ab210(plStack_78,uStack_80,&uStack_b0,1,CONCAT44(uVar5,_DAT_1420da370),&pdStack_f8);
  if (lStack_400 != 0) {
    func_0x000141695b90();
    lStack_400 = 0;
  }
  if (lStack_420 != 0) {
    func_0x000141695b90();
    lStack_420 = 0;
  }
  if (lStack_440 != 0) {
    func_0x000141695b90();
    lStack_440 = 0;
  }
  if (lStack_460 != 0) {
    func_0x000141695b90();
    lStack_460 = 0;
  }
  if (lStack_480 != 0) {
    func_0x000141695b90();
    lStack_480 = 0;
  }
  if (lStack_4a0 != 0) {
    func_0x000141695b90();
    lStack_4a0 = 0;
  }
  if (lStack_4c0 != 0) {
    func_0x000141695b90();
    lStack_4c0 = 0;
  }
  if (lStack_4e0 != 0) {
    func_0x000141695b90();
    lStack_4e0 = 0;
  }
  if (lStack_220 != 0) {
    func_0x000141695b90();
    lStack_220 = 0;
  }
  if (lStack_500 != 0) {
    func_0x000141695b90();
    lStack_500 = 0;
  }
  if (lStack_520 != 0) {
    func_0x000141695b90();
    lStack_520 = 0;
  }
  if (lStack_540 != 0) {
    func_0x000141695b90();
    lStack_540 = 0;
  }
  if (lStack_560 != 0) {
    func_0x000141695b90();
    lStack_560 = 0;
  }
  if (lStack_580 != 0) {
    func_0x000141695b90();
    lStack_580 = 0;
  }
  if (lStack_5a0 != 0) {
    func_0x000141695b90();
    lStack_5a0 = 0;
  }
  if (lStack_628 != 0) {
    func_0x000141695b90();
    lStack_628 = 0;
  }
  if ((0x46U >> (uStack_d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_200);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_168);
  }
  if ((0x46U >> (uStack_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1f0);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_188);
  }
  if ((0x46U >> (uStack_194 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a0);
  }
  if ((0x46U >> (uStack_234 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_240);
  }
  if ((0x46U >> (uStack_244 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_250);
  }
  if ((0x46U >> (uStack_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_260);
  }
  if ((0x46U >> (uStack_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_270);
  }
  if ((0x46U >> (uStack_274 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_280);
  }
  if ((0x46U >> (uStack_284 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_290);
  }
  if ((0x46U >> (uStack_294 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a0);
  }
  if ((0x46U >> (uStack_2a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b0);
  }
  if ((0x46U >> (uStack_2b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c0);
  }
  if ((0x46U >> (uStack_2c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d0);
  }
  if ((0x46U >> (uStack_2d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e0);
  }
  if ((0x46U >> (uStack_2e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f0);
  }
  if ((0x46U >> (uStack_2f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_300);
  }
  if ((0x46U >> (uStack_304 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_310);
  }
  if ((0x46U >> (uStack_314 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_320);
  }
  if ((0x46U >> (uStack_324 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_330);
  }
  if ((0x46U >> (uStack_334 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_340);
  }
  if ((0x46U >> (uStack_344 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_350);
  }
  if ((0x46U >> (uStack_354 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_360);
  }
  if ((0x46U >> (uStack_364 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_370);
  }
  if ((0x46U >> (uStack_374 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_380);
  }
  if ((0x46U >> (uStack_384 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_390);
  }
  if ((0x46U >> (uStack_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3a0);
  }
  if ((0x46U >> (uStack_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b0);
  }
  if ((0x46U >> (uStack_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3c0);
  }
  if ((0x46U >> (uStack_3c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3d0);
  }
  if ((0x46U >> (uStack_3d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3e0);
  }
  if ((0x46U >> (uStack_3e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3f0);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_210);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_108);
  }
  if ((0x46U >> (uStack_84 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_90);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_128);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_138);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_158);
  }
  _DAT_142182d78 = (undefined8 *)uStack_c8;
  return puStack_5b8;
}

