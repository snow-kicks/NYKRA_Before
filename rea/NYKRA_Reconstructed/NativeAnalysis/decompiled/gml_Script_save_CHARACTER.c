
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_CHARACTER(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  undefined8 in_stack_fffffffffffffc18;
  undefined8 uVar11;
  double **ppdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double **ppdVar15;
  undefined1 auStack_3d0 [16];
  longlong lStack_3c0;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined1 auStack_3a0 [12];
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
  undefined8 uStack_220;
  uint uStack_214;
  undefined8 uStack_210;
  uint uStack_204;
  undefined8 uStack_200;
  uint uStack_1f4;
  undefined8 uStack_1f0;
  uint uStack_1e4;
  double dStack_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  undefined8 uStack_1d0;
  double dStack_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  double dStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  double dStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
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
  undefined8 uStack_128;
  uint uStack_11c;
  double dStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong lStack_108;
  double *pdStack_f8;
  double *pdStack_f0;
  double *pdStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  double dStack_c0;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  uint uStack_7c;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffc18 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  puStack_d0 = &UNK_141984845;
  uStack_c8 = 0;
  uStack_d8 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_d8;
  uStack_14c = 0xffffff;
  dStack_158 = 0.0;
  uStack_13c = 0xffffff;
  dStack_148 = 0.0;
  uStack_12c = 0xffffff;
  dStack_138 = 0.0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_7c = 0xffffff;
  dStack_88 = 0.0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
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
  uStack_224 = 0xffffff;
  uStack_230 = 0;
  uStack_214 = 0xffffff;
  uStack_220 = 0;
  uStack_204 = 0xffffff;
  uStack_210 = 0;
  uStack_1f4 = 0xffffff;
  uStack_200 = 0;
  uStack_1e4 = 0xffffff;
  uStack_1f0 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_15c = 0xffffff;
  dStack_168 = 0.0;
  uStack_19c = 0xffffff;
  dStack_1a8 = 0.0;
  uStack_16c = 0xffffff;
  dStack_178 = 0.0;
  uStack_1d4 = 0xffffff;
  dStack_1e0 = 0.0;
  _DAT_142182d90 = param_1;
  uStack_90 = param_2;
  plStack_78 = param_1;
  uVar6 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_98 = (ulonglong)(uint)uStack_98;
  uStack_a0 = 0;
  uStack_a8 = (ulonglong)(uint)uStack_a8;
  uStack_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_3a8 = param_3;
  FUN_1416ab750(_DAT_1420dd820);
  uStack_c8 = 0xd;
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  FUN_140002730(&dStack_158,0x1420b3820);
  pdStack_f8 = &dStack_158;
  FUN_140002730(&dStack_148,0x1420b3830);
  pdStack_f0 = &dStack_148;
  FUN_140002730(&dStack_138,0x1420b3830);
  pdStack_e8 = &dStack_138;
  uVar11 = CONCAT44(uVar5,_DAT_1420da220);
  uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,3,uVar11,&pdStack_f8);
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  FUN_1400019a0(&dStack_88,uVar7);
  uStack_c8 = 0xe;
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  pdStack_f8 = &dStack_88;
  FUN_140002730(&dStack_148,0x14217f618);
  pdStack_f0 = &dStack_148;
  FUN_140002730(&dStack_138,0x14217f618);
  pdStack_e8 = &dStack_138;
  ppdVar15 = &pdStack_f8;
  ppdVar12 = (double **)CONCAT44(uVar5,_DAT_1420da650);
  FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,3,ppdVar12,ppdVar15);
  uStack_10c = 0;
  dStack_118 = 64.0;
  iVar2 = FUN_1416ab810(auStack_3d0,&plStack_78,&uStack_90,&dStack_118);
  uStack_3b0 = uVar6;
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  if (0 < iVar2) {
    do {
      uStack_c8 = 0x12;
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b0);
      }
      uStack_b0 = 0;
      uStack_a8 = 0x500000000;
      uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                    (ulonglong)ppdVar15 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar13 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_188);
      pdStack_f8 = &dStack_158;
      uVar7 = CONCAT44(uVar5,_DAT_1420da320);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,1,uVar7,&pdStack_f8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&dStack_148,uVar6);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f0;
      uVar13 = CONCAT44(uVar5,_DAT_1420da2b0);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,uVar13,ppdVar12);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,0xb,uVar6);
      uStack_c8 = 0x13;
      uVar14 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d59f8,0x80000000,&uStack_390,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,8,&uStack_390);
      uStack_c8 = 0x14;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a08,0x80000000,&uStack_380,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,8,&uStack_380);
      uStack_c8 = 0x15;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d58e8,0x80000000,&uStack_370,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,8,&uStack_370);
      uStack_c8 = 0x16;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d58f8,0x80000000,&uStack_360,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,8,&uStack_360);
      uStack_c8 = 0x17;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a18,0x80000000,&uStack_350,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_350);
      uStack_c8 = 0x18;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a98,0x80000000,&uStack_340,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_340);
      uStack_c8 = 0x19;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5aa8,0x80000000,&uStack_330,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_330);
      uStack_c8 = 0x1a;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5ab8,0x80000000,&uStack_320,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_320);
      uStack_c8 = 0x1b;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5ac8,0x80000000,&uStack_310,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_310);
      uStack_c8 = 0x1c;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5ad8,0x80000000,&uStack_300,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_300);
      uStack_c8 = 0x1d;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5ae8,0x80000000,&uStack_2f0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_2f0);
      uStack_c8 = 0x1e;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5af8,0x80000000,&uStack_2e0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_2e0);
      uStack_c8 = 0x1f;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5b08,0x80000000,&uStack_2d0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,8,&uStack_2d0);
      uStack_c8 = 0x20;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5b18,0x80000000,&uStack_2c0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,5,&uStack_2c0);
      uStack_c8 = 0x21;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5b28,0x80000000,&uStack_2b0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,5,&uStack_2b0);
      uStack_c8 = 0x23;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,0,&uStack_2a0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_2a0);
      uStack_c8 = 0x24;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,1,&uStack_290,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_290);
      uStack_c8 = 0x25;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,2,&uStack_280,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_280);
      uStack_c8 = 0x26;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,3,&uStack_270,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_270);
      uStack_c8 = 0x27;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,4,&uStack_260,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_260);
      uStack_c8 = 0x28;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,5,&uStack_250,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_250);
      uStack_c8 = 0x29;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,6,&uStack_240,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_240);
      uStack_c8 = 0x2a;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,7,&uStack_230,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_230);
      uStack_c8 = 0x2b;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,8,&uStack_220,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_220);
      uStack_c8 = 0x2c;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,9,&uStack_210,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_210);
      uStack_c8 = 0x2d;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,10,&uStack_200,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_200);
      uStack_c8 = 0x2e;
      uVar14 = uVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d5a48,0xb,&uStack_1f0,uVar13,uVar14);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,4,&uStack_1f0);
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                    uVar14 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar13 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_198);
      pdStack_f8 = &dStack_158;
      if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_148);
      }
      FUN_1416ab000(&dStack_148,0x1420b37e0);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f8;
      uVar13 = CONCAT44(uVar5,_DAT_1420da350);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
      cVar1 = FUN_1416927d0(uVar6);
      if (cVar1 != '\0') {
        uStack_c8 = 0x30;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uStack_1d0 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e49);
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_138,&uStack_188);
        pdStack_e8 = &dStack_138;
        FUN_140002730(&uStack_128,0x1420b3840);
        puStack_e0 = &uStack_128;
        ppdVar12 = &pdStack_e8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da330);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 == '\0') {
          bVar9 = false;
        }
        else {
          uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
          uStack_10c = 0;
          dStack_118 = 1.0;
          bVar9 = false;
          iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
            uStack_10c = 0;
            dStack_118 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
              uStack_10c = 0;
              dStack_118 = 0.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                uStack_10c = 0;
                dStack_118 = 0.0;
                iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
                bVar9 = iVar2 != 0;
              }
            }
          }
        }
        dStack_118 = (double)bVar9 * 0.5;
        uStack_10c = 0;
        FUN_140003e00(uStack_1d0,&dStack_118);
        if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_118);
        }
      }
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar13 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_198);
      pdStack_f8 = &dStack_158;
      if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_148);
      }
      FUN_1416ab000(&dStack_148,0x1420b37e2);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f8;
      uVar13 = CONCAT44(uVar5,_DAT_1420da350);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
      cVar1 = FUN_1416927d0(uVar6);
      if (cVar1 != '\0') {
        uStack_c8 = 0x31;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uStack_1d0 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4b);
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_138,&uStack_188);
        pdStack_e8 = &dStack_138;
        FUN_140002730(&uStack_128,0x1420b3840);
        puStack_e0 = &uStack_128;
        ppdVar12 = &pdStack_e8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da330);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 == '\0') {
          bVar9 = false;
        }
        else {
          uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
          uStack_10c = 0;
          dStack_118 = 1.0;
          bVar9 = false;
          iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
            uStack_10c = 0;
            dStack_118 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
              uStack_10c = 0;
              dStack_118 = 0.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                uStack_10c = 0;
                dStack_118 = 0.0;
                iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
                bVar9 = iVar2 != 0;
              }
            }
          }
        }
        dStack_118 = (double)bVar9 * 0.5;
        uStack_10c = 0;
        FUN_140003e00(uStack_1d0,&dStack_118);
        if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_118);
        }
      }
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar13 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_198);
      pdStack_f8 = &dStack_158;
      if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_148);
      }
      FUN_1416ab000(&dStack_148,0x1420b37e5);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f8;
      uVar13 = CONCAT44(uVar5,_DAT_1420da350);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
      cVar1 = FUN_1416927d0(uVar6);
      if (cVar1 != '\0') {
        uStack_c8 = 0x32;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uStack_1d0 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4d);
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_138,&uStack_188);
        pdStack_e8 = &dStack_138;
        FUN_140002730(&uStack_128,0x1420b3840);
        puStack_e0 = &uStack_128;
        ppdVar12 = &pdStack_e8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da330);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 == '\0') {
          bVar9 = false;
        }
        else {
          uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
          uStack_10c = 0;
          dStack_118 = 1.0;
          bVar9 = false;
          iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
          if (iVar2 == 0) {
            uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
            uStack_10c = 0;
            dStack_118 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
              uStack_10c = 0;
              dStack_118 = 0.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                uStack_10c = 0;
                dStack_118 = 0.0;
                iVar2 = FUN_1416d9df0(uVar6,&dStack_118,_DAT_1420f6b08,0);
                bVar9 = iVar2 != 0;
              }
            }
          }
        }
        dStack_118 = (double)bVar9 * 0.5;
        uStack_10c = 0;
        FUN_140003e00(uStack_1d0,&dStack_118);
        if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_118);
        }
      }
      uStack_c8 = 0x34;
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar5 = (undefined4)(uVar13 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_198);
      pdStack_f8 = &dStack_158;
      uVar7 = CONCAT44(uVar5,_DAT_1420da660);
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,uVar7,&pdStack_f8);
      uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&dStack_168,uVar6);
      if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_1a8);
      }
      uStack_19c = 0;
      dStack_1a8 = 0.0;
      uStack_c8 = 0x36;
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      ppdVar12 = (double **)CONCAT44(uVar5,_DAT_1420da250);
      pdStack_f8 = &dStack_168;
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,ppdVar12,&pdStack_f8);
      if ((uStack_7c & 0xffffff) == 0) {
        dVar10 = dStack_88;
      }
      else {
        dVar10 = (double)FUN_1416940c0(&dStack_88);
      }
      FUN_1416fbbe0((longlong)dVar10,3,uVar6);
      uStack_c8 = 0x38;
      if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_178);
      }
      uStack_16c = 0;
      dStack_178 = 0.0;
      while( true ) {
        uVar5 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        ppdVar12 = &pdStack_f8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da250);
        pdStack_f8 = &dStack_168;
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,uVar13,ppdVar12);
        iVar2 = FUN_1416d9df0(&dStack_178,uVar6,_DAT_1420f6b08,1);
        if ((iVar2 == -2) || (-1 < iVar2)) break;
        uStack_c8 = 0x39;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_148,&uStack_198);
        pdStack_f0 = &dStack_148;
        iVar2 = FUN_141693b30(&dStack_178);
        if (((uStack_15c & 0xffffff) == 2) && (dStack_168 != 0.0)) {
          func_0x0001416ba910();
          if ((iVar2 < 0) || (iVar3 = func_0x0001416ba8f0(dStack_168), iVar3 <= iVar2)) {
            uVar4 = func_0x0001416ba8f0(dStack_168);
            FUN_1416ab080(&UNK_141981ee8,iVar2,uVar4);
            pdVar8 = (double *)0x0;
          }
          else {
            pdVar8 = (double *)func_0x0001416ba8e0(dStack_168,iVar2);
          }
        }
        else {
          FUN_1416ab080(&UNK_141981f1a);
          pdVar8 = &dStack_168;
        }
        FUN_1400019a0(&dStack_138,pdVar8);
        pdStack_e8 = &dStack_138;
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,CONCAT44(uVar5,_DAT_1420da670),
                              &pdStack_f0);
        FUN_1400019a0(&dStack_1a8,uVar6);
        uStack_c8 = 0x3b;
        iVar2 = FUN_141693b30(&dStack_178);
        if (((uStack_15c & 0xffffff) == 2) && (dStack_168 != 0.0)) {
          func_0x0001416ba910();
          if ((-1 < iVar2) && (iVar3 = func_0x0001416ba8f0(dStack_168), iVar2 < iVar3)) {
            pdVar8 = (double *)func_0x0001416ba8e0(dStack_168,iVar2);
            goto joined_r0x0001401a2ee9;
          }
          uVar5 = func_0x0001416ba8f0(dStack_168);
          FUN_1416ab080(&UNK_141981ee8,iVar2,uVar5);
          pdVar8 = (double *)0x0;
          if ((uStack_7c & 0xffffff) != 0) goto LAB_1401a2eeb;
LAB_1401a2f2b:
          dVar10 = dStack_88;
        }
        else {
          FUN_1416ab080(&UNK_141981f1a);
          pdVar8 = &dStack_168;
joined_r0x0001401a2ee9:
          if ((uStack_7c & 0xffffff) == 0) goto LAB_1401a2f2b;
LAB_1401a2eeb:
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,0xb,pdVar8);
        uStack_c8 = 0x3d;
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        pdStack_f8 = &dStack_88;
        pdStack_f0 = &dStack_1a8;
        ppdVar12 = &pdStack_f8;
        gml_Script__save_type(plStack_78,uStack_90,&uStack_a0,2,ppdVar12);
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
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uVar5 = (undefined4)(uVar13 >> 0x20);
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x187a0);
      FUN_1400019a0(&dStack_158,uVar6);
      pdStack_f8 = &dStack_158;
      FUN_140002730(&dStack_148,0x1420b3810);
      pdStack_f0 = &dStack_148;
      uVar11 = CONCAT44(uVar5,_DAT_1420da430);
      uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar11,&pdStack_f8);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      cVar1 = FUN_1416927d0(uVar7);
      if (cVar1 == '\0') {
        uStack_c8 = 0x42;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uVar6 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x187a0);
        uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,0,CONCAT44(uVar5,_DAT_1420da020),0);
        FUN_1416a8cb0(plStack_78);
        FUN_1400019a0(uVar6,uVar7);
        func_0x0001416a8c00(1);
      }
      uStack_c8 = 0x43;
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      pdStack_f8 = &dStack_88;
      FUN_1400019a0(&dStack_148,uVar6);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f8;
      gml_Script__save_ds_list(plStack_78,uStack_90,&uStack_a0,2,ppdVar12);
      uVar5 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b9d);
      FUN_1400019a0(&dStack_158,uVar6);
      pdStack_f8 = &dStack_158;
      FUN_140002730(&dStack_148,0x1420b3810);
      pdStack_f0 = &dStack_148;
      ppdVar15 = &pdStack_f8;
      uVar11 = CONCAT44(uVar5,_DAT_1420da430);
      uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar11,ppdVar15);
      uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
      cVar1 = FUN_1416927d0(uVar7);
      if (cVar1 == '\0') {
        uStack_c8 = 0x45;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        (**(code **)(*plStack_78 + 0x10))(plStack_78,0x187a0);
        uVar6 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18b9d);
        ppdVar15 = (double **)0x0;
        uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,0,CONCAT44(uVar5,_DAT_1420da020),0);
        FUN_1416a8cb0(plStack_78);
        FUN_1400019a0(uVar6,uVar7);
        func_0x0001416a8c00(1);
      }
      uStack_c8 = 0x46;
      if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a0);
      }
      uStack_a0 = 0;
      uStack_98 = 0x500000000;
      pdStack_f8 = &dStack_88;
      FUN_1400019a0(&dStack_148,uVar6);
      pdStack_f0 = &dStack_148;
      ppdVar12 = &pdStack_f8;
      gml_Script__save_ds_list(plStack_78,uStack_90,&uStack_a0,2,ppdVar12);
      cVar1 = func_0x0001416abe60(auStack_3d0,&plStack_78,&uStack_90);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(auStack_3d0,&plStack_78,&uStack_90);
  cVar1 = FUN_1416f8280(plStack_78,uStack_90,0x41);
  if (cVar1 != '\0') {
    uStack_c8 = 0x4b;
    uStack_b4 = 0;
    dStack_c0 = 65.0;
    iVar2 = FUN_1416ab810(&dStack_118,&plStack_78,&uStack_90,&dStack_c0);
    if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_c0);
    }
    if (0 < iVar2) {
      do {
        uStack_c8 = 0x4d;
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_b0);
        }
        uStack_b0 = 0;
        uStack_a8 = 0x500000000;
        uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                      (ulonglong)ppdVar15 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_158,&uStack_188);
        pdStack_f8 = &dStack_158;
        uVar7 = CONCAT44(uVar5,_DAT_1420da320);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,1,uVar7,&pdStack_f8);
        uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_1400019a0(&dStack_148,uVar6);
        pdStack_f0 = &dStack_148;
        ppdVar12 = &pdStack_f0;
        uVar13 = CONCAT44(uVar5,_DAT_1420da2b0);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,uVar13,ppdVar12);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,0xb,uVar6);
        uStack_c8 = 0x4e;
        uVar14 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59f8,0x80000000,&uStack_390,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,8,&uStack_390);
        uStack_c8 = 0x4f;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a08,0x80000000,&uStack_380,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,8,&uStack_380);
        uStack_c8 = 0x50;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d58e8,0x80000000,&uStack_370,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,8,&uStack_370);
        uStack_c8 = 0x51;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d58f8,0x80000000,&uStack_360,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,8,&uStack_360);
        uStack_c8 = 0x52;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a18,0x80000000,&uStack_350,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_350);
        uStack_c8 = 0x53;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a98,0x80000000,&uStack_340,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_340);
        uStack_c8 = 0x54;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5aa8,0x80000000,&uStack_330,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_330);
        uStack_c8 = 0x55;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5ab8,0x80000000,&uStack_320,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_320);
        uStack_c8 = 0x56;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5ac8,0x80000000,&uStack_310,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_310);
        uStack_c8 = 0x57;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5ad8,0x80000000,&uStack_300,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_300);
        uStack_c8 = 0x58;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5ae8,0x80000000,&uStack_2f0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_2f0);
        uStack_c8 = 0x59;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5af8,0x80000000,&uStack_2e0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_2e0);
        uStack_c8 = 0x5a;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5b08,0x80000000,&uStack_2d0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,8,&uStack_2d0);
        uStack_c8 = 0x5b;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5b18,0x80000000,&uStack_2c0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,5,&uStack_2c0);
        uStack_c8 = 0x5c;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5b28,0x80000000,&uStack_2b0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,5,&uStack_2b0);
        uStack_c8 = 0x5e;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,0,&uStack_2a0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_2a0);
        uStack_c8 = 0x5f;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,1,&uStack_290,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_290);
        uStack_c8 = 0x60;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,2,&uStack_280,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_280);
        uStack_c8 = 0x61;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,3,&uStack_270,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_270);
        uStack_c8 = 0x62;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,4,&uStack_260,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_260);
        uStack_c8 = 99;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,5,&uStack_250,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_250);
        uStack_c8 = 100;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,6,&uStack_240,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_240);
        uStack_c8 = 0x65;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,7,&uStack_230,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_230);
        uStack_c8 = 0x66;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,8,&uStack_220,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_220);
        uStack_c8 = 0x67;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,9,&uStack_210,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_210);
        uStack_c8 = 0x68;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,10,&uStack_200,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_200);
        uStack_c8 = 0x69;
        uVar14 = uVar14 & 0xffffffffffffff00;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d5a48,0xb,&uStack_1f0,uVar13,uVar14);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,4,&uStack_1f0);
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                      uVar14 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_158,&uStack_198);
        pdStack_f8 = &dStack_158;
        if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_148);
        }
        FUN_1416ab000(&dStack_148,0x1420b37e0);
        pdStack_f0 = &dStack_148;
        ppdVar12 = &pdStack_f8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da350);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 != '\0') {
          uStack_c8 = 0x6b;
          if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b0);
          }
          uStack_b0 = 0;
          uStack_a8 = 0x500000000;
          uVar6 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e49);
          uVar13 = uVar13 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                        (ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar5 = (undefined4)(uVar13 >> 0x20);
          FUN_1400019a0(&dStack_138,&uStack_188);
          pdStack_e8 = &dStack_138;
          FUN_140002730(&uStack_128,0x1420b3840);
          puStack_e0 = &uStack_128;
          ppdVar12 = &pdStack_e8;
          uVar13 = CONCAT44(uVar5,_DAT_1420da330);
          uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
          cVar1 = FUN_1416927d0(uVar7);
          if (cVar1 == '\0') {
            bVar9 = false;
          }
          else {
            uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
            uStack_b4 = 0;
            dStack_c0 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
              uStack_b4 = 0;
              dStack_c0 = 1.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                uStack_b4 = 0;
                dStack_c0 = 0.0;
                bVar9 = false;
                iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                if (iVar2 == 0) {
                  uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                  uStack_b4 = 0;
                  dStack_c0 = 0.0;
                  iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                  bVar9 = iVar2 != 0;
                }
              }
            }
          }
          dStack_c0 = (double)bVar9 * 0.5;
          uStack_b4 = 0;
          FUN_140003e00(uVar6,&dStack_c0);
          if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_c0);
          }
        }
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_158,&uStack_198);
        pdStack_f8 = &dStack_158;
        if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_148);
        }
        FUN_1416ab000(&dStack_148,0x1420b37e2);
        pdStack_f0 = &dStack_148;
        ppdVar12 = &pdStack_f8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da350);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 != '\0') {
          uStack_c8 = 0x6c;
          if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b0);
          }
          uStack_b0 = 0;
          uStack_a8 = 0x500000000;
          uVar6 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4b);
          uVar13 = uVar13 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                        (ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar5 = (undefined4)(uVar13 >> 0x20);
          FUN_1400019a0(&dStack_138,&uStack_188);
          pdStack_e8 = &dStack_138;
          FUN_140002730(&uStack_128,0x1420b3840);
          puStack_e0 = &uStack_128;
          ppdVar12 = &pdStack_e8;
          uVar13 = CONCAT44(uVar5,_DAT_1420da330);
          uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
          cVar1 = FUN_1416927d0(uVar7);
          if (cVar1 == '\0') {
            bVar9 = false;
          }
          else {
            uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
            uStack_b4 = 0;
            dStack_c0 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
              uStack_b4 = 0;
              dStack_c0 = 1.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                uStack_b4 = 0;
                dStack_c0 = 0.0;
                bVar9 = false;
                iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                if (iVar2 == 0) {
                  uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                  uStack_b4 = 0;
                  dStack_c0 = 0.0;
                  iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                  bVar9 = iVar2 != 0;
                }
              }
            }
          }
          dStack_c0 = (double)bVar9 * 0.5;
          uStack_b4 = 0;
          FUN_140003e00(uVar6,&dStack_c0);
          if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_c0);
          }
        }
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_158,&uStack_198);
        pdStack_f8 = &dStack_158;
        if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_148);
        }
        FUN_1416ab000(&dStack_148,0x1420b37e5);
        pdStack_f0 = &dStack_148;
        ppdVar12 = &pdStack_f8;
        uVar13 = CONCAT44(uVar5,_DAT_1420da350);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar13,ppdVar12);
        cVar1 = FUN_1416927d0(uVar6);
        if (cVar1 != '\0') {
          uStack_c8 = 0x6d;
          if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b0);
          }
          uStack_b0 = 0;
          uStack_a8 = 0x500000000;
          uVar6 = (**(code **)(*plStack_78 + 0x10))(plStack_78,0x18e4d);
          uVar13 = uVar13 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_78,_DAT_1420d5a28,0x80000000,&uStack_188,uVar13,
                        (ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar5 = (undefined4)(uVar13 >> 0x20);
          FUN_1400019a0(&dStack_138,&uStack_188);
          pdStack_e8 = &dStack_138;
          FUN_140002730(&uStack_128,0x1420b3840);
          puStack_e0 = &uStack_128;
          ppdVar12 = &pdStack_e8;
          uVar13 = CONCAT44(uVar5,_DAT_1420da330);
          uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,uVar13,ppdVar12);
          cVar1 = FUN_1416927d0(uVar7);
          if (cVar1 == '\0') {
            bVar9 = false;
          }
          else {
            uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b8c);
            uStack_b4 = 0;
            dStack_c0 = 1.0;
            bVar9 = false;
            iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
            if (iVar2 == 0) {
              uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18825);
              uStack_b4 = 0;
              dStack_c0 = 1.0;
              bVar9 = false;
              iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
              if (iVar2 == 0) {
                uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18afe);
                uStack_b4 = 0;
                dStack_c0 = 0.0;
                bVar9 = false;
                iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                if (iVar2 == 0) {
                  uVar7 = (**(code **)(*plStack_78 + 8))(plStack_78,0x188a7);
                  uStack_b4 = 0;
                  dStack_c0 = 0.0;
                  iVar2 = FUN_1416d9df0(uVar7,&dStack_c0,_DAT_1420f6b08,0);
                  bVar9 = iVar2 != 0;
                }
              }
            }
          }
          dStack_c0 = (double)bVar9 * 0.5;
          uStack_b4 = 0;
          FUN_140003e00(uVar6,&dStack_c0);
          if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
            FUN_140001b50(&dStack_c0);
          }
        }
        uStack_c8 = 0x6f;
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        uVar13 = uVar13 & 0xffffffffffffff00;
        FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar13 >> 0x20);
        FUN_1400019a0(&dStack_158,&uStack_198);
        pdStack_f8 = &dStack_158;
        uVar7 = CONCAT44(uVar5,_DAT_1420da660);
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,uVar7,&pdStack_f8);
        uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
        FUN_1400019a0(&dStack_168,uVar6);
        if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_1a8);
        }
        uStack_19c = 0;
        dStack_1a8 = 0.0;
        uStack_c8 = 0x71;
        if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_a0);
        }
        uStack_a0 = 0;
        uStack_98 = 0x500000000;
        ppdVar12 = (double **)CONCAT44(uVar5,_DAT_1420da250);
        pdStack_f8 = &dStack_168;
        uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,ppdVar12,&pdStack_f8);
        if ((uStack_7c & 0xffffff) == 0) {
          dVar10 = dStack_88;
        }
        else {
          dVar10 = (double)FUN_1416940c0(&dStack_88);
        }
        FUN_1416fbbe0((longlong)dVar10,3,uVar6);
        uStack_c8 = 0x73;
        if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
          FUN_140001b50(&dStack_178);
        }
        uStack_16c = 0;
        dStack_178 = 0.0;
        while( true ) {
          uVar5 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
          if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a0);
          }
          uStack_a0 = 0;
          uStack_98 = 0x500000000;
          ppdVar15 = &pdStack_f8;
          ppdVar12 = (double **)CONCAT44(uVar5,_DAT_1420da250);
          pdStack_f8 = &dStack_168;
          uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,ppdVar12,ppdVar15);
          iVar2 = FUN_1416d9df0(&dStack_178,uVar6,_DAT_1420f6b08,1);
          if ((iVar2 == -2) || (-1 < iVar2)) break;
          uStack_c8 = 0x74;
          if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_b0);
          }
          uStack_b0 = 0;
          uStack_a8 = 0x500000000;
          uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
          FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_198,uVar13,
                        (ulonglong)ppdVar15 & 0xffffffffffffff00);
          uVar5 = (undefined4)(uVar13 >> 0x20);
          FUN_1400019a0(&dStack_148,&uStack_198);
          pdStack_f0 = &dStack_148;
          iVar2 = FUN_141693b30(&dStack_178);
          if (((uStack_15c & 0xffffff) == 2) && (dStack_168 != 0.0)) {
            func_0x0001416ba910();
            if ((iVar2 < 0) || (iVar3 = func_0x0001416ba8f0(dStack_168), iVar3 <= iVar2)) {
              uVar4 = func_0x0001416ba8f0(dStack_168);
              FUN_1416ab080(&UNK_141981ee8,iVar2,uVar4);
              pdVar8 = (double *)0x0;
            }
            else {
              pdVar8 = (double *)func_0x0001416ba8e0(dStack_168,iVar2);
            }
          }
          else {
            FUN_1416ab080(&UNK_141981f1a);
            pdVar8 = &dStack_168;
          }
          FUN_1400019a0(&dStack_138,pdVar8);
          pdStack_e8 = &dStack_138;
          uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,2,CONCAT44(uVar5,_DAT_1420da670),
                                &pdStack_f0);
          FUN_1400019a0(&dStack_1a8,uVar6);
          uStack_c8 = 0x76;
          iVar2 = FUN_141693b30(&dStack_178);
          if (((uStack_15c & 0xffffff) == 2) && (dStack_168 != 0.0)) {
            func_0x0001416ba910();
            if ((-1 < iVar2) && (iVar3 = func_0x0001416ba8f0(dStack_168), iVar2 < iVar3)) {
              pdVar8 = (double *)func_0x0001416ba8e0(dStack_168,iVar2);
              goto joined_r0x0001401a5179;
            }
            uVar5 = func_0x0001416ba8f0(dStack_168);
            FUN_1416ab080(&UNK_141981ee8,iVar2,uVar5);
            pdVar8 = (double *)0x0;
            if ((uStack_7c & 0xffffff) != 0) goto LAB_1401a517b;
LAB_1401a51bb:
            dVar10 = dStack_88;
          }
          else {
            FUN_1416ab080(&UNK_141981f1a);
            pdVar8 = &dStack_168;
joined_r0x0001401a5179:
            if ((uStack_7c & 0xffffff) == 0) goto LAB_1401a51bb;
LAB_1401a517b:
            dVar10 = (double)FUN_1416940c0(&dStack_88);
          }
          FUN_1416fbbe0((longlong)dVar10,0xb,pdVar8);
          uStack_c8 = 0x78;
          if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_a0);
          }
          uStack_a0 = 0;
          uStack_98 = 0x500000000;
          pdStack_f8 = &dStack_88;
          pdStack_f0 = &dStack_1a8;
          ppdVar12 = &pdStack_f8;
          gml_Script__save_type(plStack_78,uStack_90,&uStack_a0,2,ppdVar12);
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
        cVar1 = func_0x0001416abe60(&dStack_118,&plStack_78,&uStack_90);
      } while (cVar1 != '\0');
    }
    FUN_1416ab620(&dStack_118,&plStack_78,&uStack_90);
    if (lStack_108 != 0) {
      func_0x000141695b90();
      lStack_108 = 0;
    }
  }
  uVar5 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
  uStack_c8 = 0x7d;
  uStack_10c = 0;
  dStack_118 = 0.0;
  if ((uStack_7c & 0xffffff) == 0) {
    dVar10 = dStack_88;
  }
  else {
    dVar10 = (double)FUN_1416940c0(&dStack_88);
  }
  FUN_1416fbbe0((longlong)dVar10,1,&dStack_118);
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  uStack_c8 = 0x7f;
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0x500000000;
  func_0x0001416ce870(plStack_78,_DAT_1420d59d8,0x80000000,&dStack_1e0);
  FUN_1400019a0(&dStack_158,uStack_3b0);
  pdStack_f0 = &dStack_88;
  pdStack_f8 = &dStack_158;
  FUN_1416ac010(&dStack_c0,0x1420b3805);
  uVar7 = CONCAT44(uVar5,_DAT_1420da2b0);
  uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_b0,1,uVar7,&pdStack_f8);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  FUN_1416ac010(auStack_3a0,0x1420b37f0);
  uStack_1ac = uStack_1d4;
  uStack_1b0 = uStack_1d8;
  if ((0x46U >> (uStack_1d4 & 0x1f) & 1) == 0) {
    dStack_1b8 = dStack_1e0;
  }
  else {
    FUN_1401a7770(&dStack_1b8,&dStack_1e0);
  }
  FUN_140003ca0(&dStack_1b8,auStack_3a0);
  uStack_1bc = uStack_1ac;
  uStack_1c0 = uStack_1b0;
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) == 0) {
    dStack_1c8 = dStack_1b8;
  }
  else {
    FUN_1401a7770(&dStack_1c8,&dStack_1b8);
  }
  FUN_140003ca0(&dStack_1c8,uVar6);
  uStack_10c = uStack_1bc;
  uStack_110 = uStack_1c0;
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) == 0) {
    dStack_118 = dStack_1c8;
  }
  else {
    FUN_1401a7770(&dStack_118,&dStack_1c8);
  }
  FUN_140003ca0(&dStack_118,&dStack_c0);
  FUN_1400019a0(&dStack_138,&dStack_118);
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1c8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1b8);
  }
  if ((0x46U >> (uStack_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_3a0);
  }
  if ((0x46U >> (uStack_b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_c0);
  }
  pdStack_e8 = &dStack_138;
  uVar6 = CONCAT44(uVar5,_DAT_1420da360);
  FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,2,uVar6,&pdStack_f0);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_c8 = 0x80;
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0x500000000;
  pdStack_f8 = &dStack_88;
  FUN_1416ab210(plStack_78,uStack_90,&uStack_a0,1,CONCAT44(uVar5,_DAT_1420da370),&pdStack_f8);
  if (lStack_3c0 != 0) {
    func_0x000141695b90();
    lStack_3c0 = 0;
  }
  if ((0x46U >> (uStack_a8._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b0);
  }
  if ((0x46U >> (uStack_98._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a0);
  }
  if ((0x46U >> (uStack_1d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1e0);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1a8);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_168);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_1e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f0);
  }
  if ((0x46U >> (uStack_1f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_200);
  }
  if ((0x46U >> (uStack_204 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_210);
  }
  if ((0x46U >> (uStack_214 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_220);
  }
  if ((0x46U >> (uStack_224 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_230);
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
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_88);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
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
  _DAT_142182d78 = (undefined8 *)uStack_d8;
  return puStack_3a8;
}

