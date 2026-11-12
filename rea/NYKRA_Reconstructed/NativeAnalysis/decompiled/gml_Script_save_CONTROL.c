
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_CONTROL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  undefined8 in_stack_fffffffffffffc58;
  undefined8 uVar10;
  ulonglong uVar11;
  double **ppdVar12;
  ulonglong uVar13;
  undefined1 auStack_398 [16];
  longlong lStack_388;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined1 auStack_368 [12];
  uint uStack_35c;
  undefined1 auStack_358 [12];
  uint uStack_34c;
  undefined8 uStack_348;
  uint uStack_33c;
  undefined8 uStack_338;
  uint uStack_32c;
  undefined8 uStack_328;
  uint uStack_31c;
  undefined8 uStack_318;
  uint uStack_30c;
  undefined8 uStack_308;
  uint uStack_2fc;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  uint uStack_2dc;
  undefined8 uStack_2d8;
  uint uStack_2cc;
  undefined8 uStack_2c8;
  uint uStack_2bc;
  undefined8 uStack_2b8;
  uint uStack_2ac;
  undefined8 uStack_2a8;
  uint uStack_29c;
  undefined8 uStack_298;
  uint uStack_28c;
  undefined8 uStack_288;
  uint uStack_27c;
  undefined8 uStack_278;
  uint uStack_26c;
  undefined8 uStack_268;
  uint uStack_25c;
  undefined8 uStack_258;
  uint uStack_24c;
  undefined8 uStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  uint uStack_16c;
  double dStack_168;
  uint uStack_15c;
  double dStack_158;
  uint uStack_14c;
  double dStack_148;
  uint uStack_13c;
  undefined8 uStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  double dStack_108;
  uint uStack_fc;
  double dStack_f8;
  uint uStack_ec;
  double *pdStack_e8;
  double *pdStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  uint uStack_64;
  undefined8 uStack_60;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffc58 >> 0x20);
  uStack_60 = 0xfffffffffffffffe;
  puStack_a0 = &UNK_14198487f;
  uStack_98 = 0;
  uStack_a8 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_a8;
  uStack_14c = 0xffffff;
  dStack_158 = 0.0;
  uStack_13c = 0xffffff;
  dStack_148 = 0.0;
  uStack_12c = 0xffffff;
  uStack_138 = 0;
  uStack_64 = 0xffffff;
  dStack_70 = 0.0;
  uStack_32c = 0xffffff;
  uStack_338 = 0;
  uStack_31c = 0xffffff;
  uStack_328 = 0;
  uStack_30c = 0xffffff;
  uStack_318 = 0;
  uStack_2fc = 0xffffff;
  uStack_308 = 0;
  uStack_2ec = 0xffffff;
  uStack_2f8 = 0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_2cc = 0xffffff;
  uStack_2d8 = 0;
  uStack_2bc = 0xffffff;
  uStack_2c8 = 0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_1bc = 0xffffff;
  uStack_1c8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_33c = 0xffffff;
  uStack_348 = 0;
  uStack_fc = 0xffffff;
  dStack_108 = 0.0;
  uStack_15c = 0xffffff;
  dStack_168 = 0.0;
  uStack_ec = 0xffffff;
  dStack_f8 = 0.0;
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  _DAT_142182d90 = param_1;
  uStack_90 = param_2;
  uStack_78 = param_1;
  uStack_378 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_80 = (ulonglong)(uint)uStack_80;
  uStack_88 = 0;
  uStack_c0 = (ulonglong)(uint)uStack_c0;
  uStack_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(_DAT_1420dd840);
  uStack_98 = 2;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  FUN_140002730(&dStack_158,0x1420b3870);
  pdStack_e8 = &dStack_158;
  FUN_140002730(&dStack_148,0x1420b3880);
  pdStack_e0 = &dStack_148;
  FUN_140002730(&uStack_138,0x1420b3880);
  puStack_d8 = &uStack_138;
  uVar10 = CONCAT44(uVar6,_DAT_1420da220);
  uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_88,3,uVar10,&pdStack_e8);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1400019a0(&dStack_70,uVar7);
  uStack_98 = 3;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  pdStack_e8 = &dStack_70;
  FUN_140002730(&dStack_148,0x14217f628);
  pdStack_e0 = &dStack_148;
  FUN_140002730(&uStack_138,0x14217f628);
  puStack_d8 = &uStack_138;
  ppdVar12 = &pdStack_e8;
  uVar11 = CONCAT44(uVar6,_DAT_1420da650);
  FUN_1416ab210(uStack_78,uStack_90,&uStack_88,3,uVar11,ppdVar12);
  uStack_ac = 0;
  uStack_b8 = 0x4053c00000000000;
  iVar3 = FUN_1416ab810(auStack_398,&uStack_78,&uStack_90,&uStack_b8);
  puStack_370 = param_3;
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if (0 < iVar3) {
    do {
      uStack_98 = 7;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      uStack_c8 = 0;
      uStack_c0 = 0x500000000;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a28,0x80000000,&uStack_338,uVar11,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar11 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_338);
      pdStack_e8 = &dStack_158;
      uVar10 = CONCAT44(uVar6,_DAT_1420da320);
      uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_c8,1,uVar10,&pdStack_e8);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_1400019a0(&dStack_148,uVar7);
      pdStack_e0 = &dStack_148;
      ppdVar12 = &pdStack_e0;
      uVar11 = CONCAT44(uVar6,_DAT_1420da2b0);
      uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_88,1,uVar11,ppdVar12);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,0xb,uVar7);
      uStack_98 = 8;
      uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d59f8,0x80000000,&uStack_328,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&uStack_328);
      uStack_98 = 9;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a08,0x80000000,&uStack_318,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&uStack_318);
      uStack_98 = 10;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d58e8,0x80000000,&uStack_308,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&uStack_308);
      uStack_98 = 0xb;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d58f8,0x80000000,&uStack_2f8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&uStack_2f8);
      uStack_98 = 0xc;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a18,0x80000000,&uStack_2e8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_2e8);
      uStack_98 = 0xd;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a98,0x80000000,&uStack_2d8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_2d8);
      uStack_98 = 0xe;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5aa8,0x80000000,&uStack_2c8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_2c8);
      uStack_98 = 0xf;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5ab8,0x80000000,&uStack_2b8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_2b8);
      uStack_98 = 0x10;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5ac8,0x80000000,&uStack_2a8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_2a8);
      uStack_98 = 0x11;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5ad8,0x80000000,&uStack_298,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_298);
      uStack_98 = 0x12;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5ae8,0x80000000,&uStack_288,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_288);
      uStack_98 = 0x13;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5af8,0x80000000,&uStack_278,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_278);
      uStack_98 = 0x14;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5b08,0x80000000,&uStack_268,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,8,&uStack_268);
      uStack_98 = 0x15;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5b18,0x80000000,&uStack_258,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,5,&uStack_258);
      uStack_98 = 0x16;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5b28,0x80000000,&uStack_248,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,5,&uStack_248);
      uStack_98 = 0x18;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,0,&uStack_238,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_238);
      uStack_98 = 0x19;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,1,&uStack_228,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_228);
      uStack_98 = 0x1a;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,2,&uStack_218,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_218);
      uStack_98 = 0x1b;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,3,&uStack_208,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_208);
      uStack_98 = 0x1c;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,4,&uStack_1f8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1f8);
      uStack_98 = 0x1d;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,5,&uStack_1e8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1e8);
      uStack_98 = 0x1e;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,6,&uStack_1d8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1d8);
      uStack_98 = 0x1f;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,7,&uStack_1c8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1c8);
      uStack_98 = 0x20;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,8,&uStack_1b8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1b8);
      uStack_98 = 0x21;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,9,&uStack_1a8,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_1a8);
      uStack_98 = 0x22;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,10,&uStack_198,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_198);
      uStack_98 = 0x23;
      uVar13 = uVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d5a48,0xb,&uStack_188,uVar11,uVar13);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,4,&uStack_188);
      uStack_98 = 0x25;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_1416cea80(uStack_78,_DAT_1420d59e8,0x80000000,&uStack_348,uVar11,
                    uVar13 & 0xffffffffffffff00);
      uVar6 = (undefined4)(uVar11 >> 0x20);
      FUN_1400019a0(&dStack_158,&uStack_348);
      pdStack_e8 = &dStack_158;
      uVar10 = CONCAT44(uVar6,_DAT_1420da660);
      uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_88,1,uVar10,&pdStack_e8);
      uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
      FUN_1400019a0(&dStack_108,uVar7);
      if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_168);
      }
      uStack_15c = 0;
      dStack_168 = 0.0;
      uStack_98 = 0x27;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      ppdVar12 = (double **)CONCAT44(uVar6,_DAT_1420da250);
      pdStack_e8 = &dStack_108;
      uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_88,1,ppdVar12,&pdStack_e8);
      if ((uStack_64 & 0xffffff) == 0) {
        dVar9 = dStack_70;
      }
      else {
        dVar9 = (double)FUN_1416940c0(&dStack_70);
      }
      FUN_1416fbbe0((longlong)dVar9,3,uVar7);
      uStack_98 = 0x29;
      if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_f8);
      }
      uStack_ec = 0;
      dStack_f8 = 0.0;
      while( true ) {
        uVar6 = (undefined4)((ulonglong)ppdVar12 >> 0x20);
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_88);
        }
        uStack_88 = 0;
        uStack_80 = 0x500000000;
        ppdVar12 = &pdStack_e8;
        uVar11 = CONCAT44(uVar6,_DAT_1420da250);
        pdStack_e8 = &dStack_108;
        uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_88,1,uVar11,ppdVar12);
        iVar3 = FUN_1416d9df0(&dStack_f8,uVar7,_DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        uStack_98 = 0x2a;
        if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_c8);
        }
        uStack_c8 = 0;
        uStack_c0 = 0x500000000;
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_1416cea80(uStack_78,_DAT_1420d59e8,0x80000000,&uStack_348,uVar11,
                      (ulonglong)ppdVar12 & 0xffffffffffffff00);
        uVar6 = (undefined4)(uVar11 >> 0x20);
        FUN_1400019a0(&dStack_148,&uStack_348);
        pdStack_e0 = &dStack_148;
        iVar3 = FUN_141693b30(&dStack_f8);
        if (((uStack_fc & 0xffffff) == 2) && (dStack_108 != 0.0)) {
          func_0x0001416ba910();
          if ((iVar3 < 0) || (iVar4 = func_0x0001416ba8f0(dStack_108), iVar4 <= iVar3)) {
            uVar5 = func_0x0001416ba8f0(dStack_108);
            FUN_1416ab080(&UNK_141981ee8,iVar3,uVar5);
            pdVar8 = (double *)0x0;
          }
          else {
            pdVar8 = (double *)func_0x0001416ba8e0(dStack_108,iVar3);
          }
        }
        else {
          FUN_1416ab080(&UNK_141981f1a);
          pdVar8 = &dStack_108;
        }
        FUN_1400019a0(&uStack_138,pdVar8);
        puStack_d8 = &uStack_138;
        uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_c8,2,CONCAT44(uVar6,_DAT_1420da670),
                              &pdStack_e0);
        FUN_1400019a0(&dStack_168,uVar7);
        uStack_98 = 0x2c;
        iVar3 = FUN_141693b30(&dStack_f8);
        if (((uStack_fc & 0xffffff) == 2) && (dStack_108 != 0.0)) {
          func_0x0001416ba910();
          if ((-1 < iVar3) && (iVar4 = func_0x0001416ba8f0(dStack_108), iVar3 < iVar4)) {
            pdVar8 = (double *)func_0x0001416ba8e0(dStack_108,iVar3);
            goto joined_r0x0001401a8fd9;
          }
          uVar6 = func_0x0001416ba8f0(dStack_108);
          FUN_1416ab080(&UNK_141981ee8,iVar3,uVar6);
          pdVar8 = (double *)0x0;
          if ((uStack_64 & 0xffffff) != 0) goto LAB_1401a8fdb;
LAB_1401a901b:
          dVar9 = dStack_70;
        }
        else {
          FUN_1416ab080(&UNK_141981f1a);
          pdVar8 = &dStack_108;
joined_r0x0001401a8fd9:
          if ((uStack_64 & 0xffffff) == 0) goto LAB_1401a901b;
LAB_1401a8fdb:
          dVar9 = (double)FUN_1416940c0(&dStack_70);
        }
        FUN_1416fbbe0((longlong)dVar9,0xb,pdVar8);
        uStack_98 = 0x2e;
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_88);
        }
        uStack_88 = 0;
        uStack_80 = 0x500000000;
        pdStack_e8 = &dStack_70;
        pdStack_e0 = &dStack_168;
        ppdVar12 = &pdStack_e8;
        gml_Script__save_type(uStack_78,uStack_90,&uStack_88,2,ppdVar12);
        switch(uStack_ec & 0xffffff) {
        case 1:
          dStack_f8 = (double)FUN_1416940c0(&dStack_f8);
          dStack_f8 = dStack_f8 + 1.0;
          uStack_ec = 0;
          break;
        default:
          FUN_140001d70(&UNK_141981e6a,&dStack_f8,&dStack_f8);
          break;
        case 7:
          dStack_f8 = (double)CONCAT44(dStack_f8._4_4_,dStack_f8._0_4_ + 1);
          break;
        case 10:
          dStack_f8 = (double)((longlong)dStack_f8 + 1);
          break;
        case 0xd:
          uStack_ec = 0;
        case 0:
          dStack_f8 = dStack_f8 + 1.0;
        }
      }
      cVar2 = func_0x0001416abe60(auStack_398,&uStack_78,&uStack_90);
    } while (cVar2 != '\0');
  }
  uVar6 = (undefined4)(uVar11 >> 0x20);
  FUN_1416ab620(auStack_398,&uStack_78,&uStack_90);
  uStack_98 = 0x37;
  uStack_ac = 0;
  uStack_b8 = 0;
  if ((uStack_64 & 0xffffff) == 0) {
    dVar9 = dStack_70;
  }
  else {
    dVar9 = (double)FUN_1416940c0(&dStack_70);
  }
  FUN_1416fbbe0((longlong)dVar9,1,&uStack_b8);
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  uStack_98 = 0x39;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  uStack_c8 = 0;
  uStack_c0 = 0x500000000;
  func_0x0001416ce870(uStack_78,_DAT_1420d59d8,0x80000000,&uStack_178);
  FUN_1400019a0(&dStack_158,uStack_378);
  pdStack_e0 = &dStack_70;
  pdStack_e8 = &dStack_158;
  FUN_1416ac010(auStack_368,0x1420b3865);
  uVar10 = CONCAT44(uVar6,_DAT_1420da2b0);
  uVar7 = FUN_1416ab210(uStack_78,uStack_90,&uStack_c8,1,uVar10,&pdStack_e8);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  FUN_1416ac010(auStack_358,0x1420b3850);
  uStack_10c = uStack_16c;
  uStack_110 = uStack_170;
  if ((0x46U >> (uStack_16c & 0x1f) & 1) == 0) {
    uStack_118 = uStack_178;
  }
  else {
    FUN_1401aab60(&uStack_118,&uStack_178);
  }
  FUN_140003ca0(&uStack_118,auStack_358);
  uStack_11c = uStack_10c;
  uStack_120 = uStack_110;
  if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
    uStack_128 = uStack_118;
  }
  else {
    FUN_1401aab60(&uStack_128,&uStack_118);
  }
  FUN_140003ca0(&uStack_128,uVar7);
  uStack_ac = uStack_11c;
  uStack_b0 = uStack_120;
  if ((0x46U >> (uStack_11c & 0x1f) & 1) == 0) {
    uStack_b8 = uStack_128;
  }
  else {
    FUN_1401aab60(&uStack_b8,&uStack_128);
  }
  FUN_140003ca0(&uStack_b8,auStack_368);
  FUN_1400019a0(&uStack_138,&uStack_b8);
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  if ((0x46U >> (uStack_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_358);
  }
  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_368);
  }
  puStack_d8 = &uStack_138;
  uVar7 = CONCAT44(uVar6,_DAT_1420da360);
  FUN_1416ab210(uStack_78,uStack_90,&uStack_88,2,uVar7,&pdStack_e0);
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_98 = 0x3a;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  pdStack_e8 = &dStack_70;
  FUN_1416ab210(uStack_78,uStack_90,&uStack_88,1,CONCAT44(uVar6,_DAT_1420da370),&pdStack_e8);
  puVar1 = puStack_370;
  if (lStack_388 != 0) {
    func_0x000141695b90();
    lStack_388 = 0;
  }
  if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_f8);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_168);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_108);
  }
  if ((0x46U >> (uStack_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_348);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1c8);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_27c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_288);
  }
  if ((0x46U >> (uStack_28c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_298);
  }
  if ((0x46U >> (uStack_29c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a8);
  }
  if ((0x46U >> (uStack_2ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b8);
  }
  if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c8);
  }
  if ((0x46U >> (uStack_2cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d8);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_308);
  }
  if ((0x46U >> (uStack_30c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_318);
  }
  if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_328);
  }
  if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_338);
  }
  if ((0x46U >> (uStack_64 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_70);
  }
  if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_158);
  }
  _DAT_142182d78 = (undefined8 *)uStack_a8;
  return puVar1;
}

