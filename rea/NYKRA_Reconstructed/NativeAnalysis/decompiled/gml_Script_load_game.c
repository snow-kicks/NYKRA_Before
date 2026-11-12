
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_game(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong unaff_GS_OFFSET;
  double dVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffff9e8;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffff9f0;
  undefined8 **ppuVar15;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e0;
  uint uStack_5d4;
  undefined8 uStack_5d0;
  uint uStack_5c4;
  undefined8 uStack_5c0;
  uint uStack_5b4;
  undefined8 uStack_5b0;
  uint uStack_5a4;
  undefined8 uStack_5a0;
  uint uStack_594;
  undefined8 uStack_590;
  uint uStack_584;
  undefined8 uStack_580;
  uint uStack_574;
  undefined8 uStack_570;
  uint uStack_564;
  undefined8 uStack_560;
  uint uStack_554;
  undefined8 uStack_550;
  uint uStack_544;
  undefined8 uStack_540;
  uint uStack_534;
  undefined8 uStack_530;
  uint uStack_524;
  undefined8 uStack_520;
  uint uStack_514;
  undefined8 uStack_510;
  uint uStack_504;
  undefined8 uStack_500;
  uint uStack_4f4;
  undefined8 uStack_4f0;
  uint uStack_4e4;
  undefined8 uStack_4e0;
  uint uStack_4d4;
  undefined8 uStack_4d0;
  uint uStack_4c4;
  undefined8 uStack_4c0;
  uint uStack_4b4;
  undefined8 uStack_4b0;
  uint uStack_4a4;
  undefined8 uStack_4a0;
  uint uStack_494;
  undefined8 uStack_490;
  uint uStack_484;
  undefined8 uStack_480;
  uint uStack_474;
  undefined8 uStack_470;
  uint uStack_464;
  undefined8 uStack_460;
  uint uStack_454;
  undefined8 uStack_450;
  uint uStack_444;
  undefined8 uStack_440;
  uint uStack_434;
  undefined8 uStack_430;
  uint uStack_424;
  undefined8 uStack_420;
  uint uStack_414;
  undefined8 uStack_410;
  uint uStack_404;
  undefined8 uStack_400;
  uint uStack_3f4;
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
  undefined8 uStack_338;
  uint uStack_330;
  uint uStack_32c;
  undefined8 uStack_328;
  uint uStack_320;
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
  undefined8 uStack_2c0;
  uint uStack_2b4;
  undefined8 uStack_2b0;
  uint uStack_2a4;
  undefined8 uStack_2a0;
  uint uStack_294;
  undefined8 uStack_290;
  uint uStack_288;
  uint uStack_284;
  double dStack_280;
  uint uStack_274;
  double dStack_270;
  uint uStack_264;
  undefined8 uStack_260;
  uint uStack_254;
  undefined8 *puStack_250;
  double dStack_248;
  uint uStack_23c;
  double dStack_238;
  uint uStack_22c;
  undefined8 uStack_228;
  uint uStack_21c;
  undefined8 uStack_218;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  double dStack_1f8;
  uint uStack_1ec;
  double dStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined8 uStack_158;
  uint uStack_150;
  uint uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f0;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_d8 = &UNK_141983469;
  uStack_d0 = 0;
  uStack_e0 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_e0;
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
  uStack_394 = 0xffffff;
  uStack_3a0 = 0;
  uStack_31c = 0xffffff;
  uStack_328 = 0;
  _DAT_142182d90 = param_1;
  uStack_90 = param_2;
  plStack_78 = param_1;
  uVar5 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uVar6 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x1885a);
  uStack_4a4 = 0xffffff;
  uStack_4b0 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_494 = 0xffffff;
  uStack_4a0 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  uStack_340 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x187c9);
  uStack_3b4 = 0xffffff;
  uStack_3c0 = 0;
  uStack_e4 = 0xffffff;
  uStack_f0 = 0;
  uStack_3a4 = 0xffffff;
  uStack_3b0 = 0;
  puStack_250 = (undefined8 *)(**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18a9e);
  uStack_23c = 0xffffff;
  dStack_248 = 0.0;
  uStack_274 = 0xffffff;
  dStack_280 = 0.0;
  uStack_11c = 0xffffff;
  dStack_128 = 0.0;
  uStack_264 = 0xffffff;
  dStack_270 = 0.0;
  uStack_384 = 0xffffff;
  uStack_390 = 0;
  uStack_484 = 0xffffff;
  uStack_490 = 0;
  uStack_5d4 = 0xffffff;
  uStack_5e0 = 0;
  uStack_5c4 = 0xffffff;
  uStack_5d0 = 0;
  uStack_5b4 = 0xffffff;
  uStack_5c0 = 0;
  uStack_5a4 = 0xffffff;
  uStack_5b0 = 0;
  uStack_4b4 = 0xffffff;
  uStack_4c0 = 0;
  uStack_594 = 0xffffff;
  uStack_5a0 = 0;
  uStack_584 = 0xffffff;
  uStack_590 = 0;
  uStack_574 = 0xffffff;
  uStack_580 = 0;
  uStack_564 = 0xffffff;
  uStack_570 = 0;
  uStack_554 = 0xffffff;
  uStack_560 = 0;
  uStack_544 = 0xffffff;
  uStack_550 = 0;
  uStack_534 = 0xffffff;
  uStack_540 = 0;
  uStack_524 = 0xffffff;
  uStack_530 = 0;
  uStack_514 = 0xffffff;
  uStack_520 = 0;
  uStack_504 = 0xffffff;
  uStack_510 = 0;
  uStack_4f4 = 0xffffff;
  uStack_500 = 0;
  uStack_4e4 = 0xffffff;
  uStack_4f0 = 0;
  uStack_4d4 = 0xffffff;
  uStack_4e0 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_474 = 0xffffff;
  uStack_480 = 0;
  uStack_464 = 0xffffff;
  uStack_470 = 0;
  uStack_454 = 0xffffff;
  uStack_460 = 0;
  uStack_444 = 0xffffff;
  uStack_450 = 0;
  uStack_434 = 0xffffff;
  uStack_440 = 0;
  uStack_424 = 0xffffff;
  uStack_430 = 0;
  uStack_414 = 0xffffff;
  uStack_420 = 0;
  uStack_404 = 0xffffff;
  uStack_410 = 0;
  uStack_3f4 = 0xffffff;
  uStack_400 = 0;
  uStack_3e4 = 0xffffff;
  uStack_3f0 = 0;
  uStack_3d4 = 0xffffff;
  uStack_3e0 = 0;
  uStack_3c4 = 0xffffff;
  uStack_3d0 = 0;
  uStack_4c4 = 0xffffff;
  uStack_4d0 = 0;
  uStack_2a4 = 0xffffff;
  uStack_2b0 = 0;
  uStack_32c = 0xffffff;
  uStack_338 = 0;
  uStack_18c = 0xffffff;
  uStack_198 = 0;
  uStack_374 = 0xffffff;
  uStack_380 = 0;
  uStack_2b4 = 0xffffff;
  uStack_2c0 = 0;
  uStack_22c = 0xffffff;
  dStack_238 = 0.0;
  uStack_254 = 0xffffff;
  uStack_260 = 0;
  uStack_354 = 0xffffff;
  uStack_360 = 0;
  uStack_344 = 0xffffff;
  uStack_350 = 0;
  uStack_294 = 0xffffff;
  uStack_2a0 = 0;
  uStack_364 = 0xffffff;
  uStack_370 = 0;
  uStack_17c = 0xffffff;
  uStack_188 = 0;
  uStack_1ec = 0xffffff;
  dStack_1f8 = 0.0;
  uStack_1dc = 0xffffff;
  dStack_1e8 = 0.0;
  uStack_1bc = 0xffffff;
  dStack_1c8 = 0.0;
  uStack_80 = (ulonglong)(uint)uStack_80;
  uStack_88 = 0;
  uStack_140 = (ulonglong)(uint)uStack_140;
  uStack_148 = 0;
  uStack_1d0 = (ulonglong)(uint)uStack_1d0;
  uStack_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(_DAT_1420dcd30);
  uStack_d0 = 0xb;
  if ((0x46U >> (uStack_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3a0);
  }
  FUN_1416ab000(&uStack_3a0,0x14217f2d0);
  uStack_d0 = 0xd;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  uStack_5f8 = 0;
  uStack_5f0 = 0;
  in_stack_fffffffffffff9e8 = in_stack_fffffffffffff9e8 & 0xffffffffffffff00;
  FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_5f8,in_stack_fffffffffffff9e8,
                in_stack_fffffffffffff9f0 & 0xffffffffffffff00);
  uVar4 = (undefined4)(in_stack_fffffffffffff9e8 >> 0x20);
  FUN_1400019a0(&uStack_318,&uStack_5f8);
  puStack_b8 = &uStack_318;
  ppuVar15 = &puStack_b8;
  uVar14 = CONCAT44(uVar4,_DAT_1420da4b0);
  uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar14,ppuVar15);
  uStack_1b0 = (ulonglong)(uint)uStack_1b0;
  uStack_1b8 = 0xbff0000000000000;
  iVar3 = FUN_1416d9df0(uVar7,&uStack_1b8,_DAT_1420f6b08,1);
  if ((iVar3 == -2) || (0 < iVar3)) {
    uStack_d0 = 0x10;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    uStack_148 = 0;
    uStack_140 = 0x500000000;
    func_0x0001416ce870(plStack_78,_DAT_1420d59d8,0x80000000,&uStack_328);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_5f8,uVar14,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar14 >> 0x20);
    FUN_1400019a0(&uStack_318,&uStack_5f8);
    uVar5 = CONCAT44(uVar4,_DAT_1420da4b0);
    puStack_b8 = &uStack_318;
    puVar8 = (undefined8 *)FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar5,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_1b0._4_4_ = *(uint *)((longlong)puVar8 + 0xc);
    uStack_1b0._0_4_ = *(uint *)(puVar8 + 1);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) == 0) {
      uStack_1b8 = *puVar8;
    }
    else {
      FUN_1400d2390(&uStack_1b8,puVar8);
    }
    FUN_140001c50(&uStack_1b8,1);
    FUN_1400019a0(&uStack_308,&uStack_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1b8);
    }
    puStack_b0 = &uStack_308;
    FUN_1416ac010(&uStack_178,0x1420b2aed);
    FUN_1416ac010(&uStack_138,0x1420b2ae5);
    uVar7 = CONCAT44(uVar4,_DAT_1420da2b0);
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar7,&puStack_b0);
    FUN_1416ac010(&uStack_290,0x1420b2b00);
    uStack_10c = uStack_31c;
    uStack_110 = uStack_320;
    if ((0x46U >> (uStack_31c & 0x1f) & 1) == 0) {
      uStack_118 = uStack_328;
    }
    else {
      FUN_1400d2390(&uStack_118,&uStack_328);
    }
    FUN_140003ca0(&uStack_118,&uStack_290);
    uStack_14c = uStack_10c;
    uStack_150 = uStack_110;
    if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
      uStack_158 = uStack_118;
    }
    else {
      FUN_1400d2390(&uStack_158,&uStack_118);
    }
    FUN_140003ca0(&uStack_158,uVar5);
    uStack_fc = uStack_14c;
    uStack_100 = uStack_150;
    if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
      uStack_108 = uStack_158;
    }
    else {
      FUN_1400d2390(&uStack_108,&uStack_158);
    }
    FUN_140003ca0(&uStack_108,&uStack_138);
    uStack_c0._4_4_ = uStack_fc;
    uStack_c0._0_4_ = uStack_100;
    if ((0x46U >> (uStack_fc & 0x1f) & 1) == 0) {
      uStack_c8 = uStack_108;
    }
    else {
      FUN_1400d2390(&uStack_c8,&uStack_108);
    }
    FUN_140003ca0(&uStack_c8,uVar6);
    uStack_1b0._4_4_ = uStack_c0._4_4_;
    uStack_1b0._0_4_ = (uint)uStack_c0;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      uStack_1b8 = uStack_c8;
    }
    else {
      FUN_1400d2390(&uStack_1b8,&uStack_c8);
    }
    FUN_140003ca0(&uStack_1b8,&uStack_178);
    FUN_1400019a0(&uStack_3a0,&uStack_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1b8);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_108);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_158);
    }
    if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    if ((0x46U >> (uStack_284 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_290);
    }
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_138);
    }
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_178);
    }
  }
  else {
    uStack_d0 = 0xe;
    if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    uVar4 = (undefined4)(uVar14 >> 0x20);
    uStack_148 = 0;
    uStack_140 = 0x500000000;
    func_0x0001416ce870(plStack_78,_DAT_1420d59d8,0x80000000,&uStack_328);
    FUN_1400019a0(&uStack_308,uVar5);
    puStack_b0 = &uStack_308;
    FUN_1416ac010(&uStack_178,0x1420b2aed);
    FUN_1416ac010(&uStack_138,0x1420b2ae5);
    uVar7 = CONCAT44(uVar4,_DAT_1420da2b0);
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar7,&puStack_b0);
    FUN_1416ac010(&uStack_290,0x1420b2ad0);
    uStack_10c = uStack_31c;
    uStack_110 = uStack_320;
    if ((0x46U >> (uStack_31c & 0x1f) & 1) == 0) {
      uStack_118 = uStack_328;
    }
    else {
      FUN_1400d2390(&uStack_118,&uStack_328);
    }
    FUN_140003ca0(&uStack_118,&uStack_290);
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
      uStack_158 = uStack_118;
    }
    else {
      FUN_1400d2390(&uStack_158,&uStack_118);
    }
    FUN_140003ca0(&uStack_158,uVar5);
    uStack_100 = uStack_150;
    uStack_fc = uStack_14c;
    if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
      uStack_108 = uStack_158;
    }
    else {
      FUN_1400d2390(&uStack_108,&uStack_158);
    }
    FUN_140003ca0(&uStack_108,&uStack_138);
    uStack_c0._0_4_ = uStack_100;
    uStack_c0._4_4_ = uStack_fc;
    if ((0x46U >> (uStack_fc & 0x1f) & 1) == 0) {
      uStack_c8 = uStack_108;
    }
    else {
      FUN_1400d2390(&uStack_c8,&uStack_108);
    }
    FUN_140003ca0(&uStack_c8,uVar6);
    uStack_1b0._0_4_ = (uint)uStack_c0;
    uStack_1b0._4_4_ = uStack_c0._4_4_;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      uStack_1b8 = uStack_c8;
    }
    else {
      FUN_1400d2390(&uStack_1b8,&uStack_c8);
    }
    FUN_140003ca0(&uStack_1b8,&uStack_178);
    FUN_1400019a0(&uStack_3a0,&uStack_1b8);
    if ((0x46U >> (uStack_1b0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_1b8);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_108);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_158);
    }
    if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    if ((0x46U >> (uStack_284 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_290);
    }
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_138);
    }
    if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_178);
    }
  }
  iVar3 = func_0x0001416f82f0(plStack_78,uStack_90,0x4e);
  if (0 < iVar3) {
    cVar2 = FUN_1416f8280(plStack_78,uStack_90,0x40);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (cVar2 != '\0') {
      uStack_d0 = 0x15;
      FUN_1416ab670(0x40,_DAT_1420d58e8,0x80000000,&uStack_4b0);
      FUN_1400019a0(&uStack_228,&uStack_4b0);
      FUN_1416cf840(0x4e,_DAT_1420d58e8,0x80000000,&uStack_228);
      uStack_d0 = 0x16;
      FUN_1416ab670(0x40,_DAT_1420d58f8,0x80000000,&uStack_4a0);
      FUN_1400019a0(&uStack_218,&uStack_4a0);
      FUN_1416cf840(0x4e,_DAT_1420d58f8,0x80000000,&uStack_218);
      uStack_d0 = 0x17;
      uStack_1b8 = 0;
      uStack_1b0._0_4_ = 0;
      uStack_1b0._4_4_ = 0;
      FUN_1416ab670(0x40,_DAT_1420d58e8,0x80000000,&uStack_4b0);
      uVar5 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar5);
      FUN_1400019a0(&uStack_1b8,&uStack_4b0);
      func_0x0001416a8c00(1);
      FUN_1416d0790(0x4e,0x18e45,0x80000000,&uStack_1b8);
      uStack_d0 = 0x18;
      uStack_178 = 0;
      uStack_170 = 0;
      FUN_1416ab670(0x40,_DAT_1420d58f8,0x80000000,&uStack_4a0);
      uVar5 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar5);
      FUN_1400019a0(&uStack_178,&uStack_4a0);
      func_0x0001416a8c00(1);
      FUN_1416d0790(0x4e,0x18e54,0x80000000,&uStack_178);
      uStack_d0 = 0x19;
      uStack_c8 = 0;
      uStack_c0._0_4_ = 0;
      uStack_c0._4_4_ = 0;
      FUN_1416d0790(0x4e,0x18b08,0x80000000,&uStack_c8);
      uStack_d0 = 0x1a;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      FUN_1416d0790(0x4e,0x18abd,0x80000000,&uStack_108);
      uStack_d0 = 0x1b;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_148);
      }
      uStack_148 = 0;
      uStack_140 = 0x500000000;
      if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1d8);
      }
      uStack_1d8 = 0;
      uStack_1d0 = 0x500000000;
      FUN_1416ab670(0x4e,_DAT_1420d58e8,0x80000000,&uStack_228);
      FUN_1400019a0(&uStack_318,uStack_340);
      puStack_b8 = &uStack_318;
      FUN_1416ab670(0x4e,_DAT_1420d58f8,0x80000000,&uStack_218);
      FUN_1400019a0(&uStack_308,uStack_340);
      puStack_b0 = &uStack_308;
      FUN_1400019a0(&uStack_2f8,uStack_340);
      uVar6 = CONCAT44(uVar4,_DAT_1420da3b0);
      puStack_a8 = &uStack_2f8;
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar6,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_140004520(&uStack_158,uVar5,0x4000000000000000);
      uStack_130._4_4_ = uStack_21c;
      if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
        uStack_138 = uStack_228;
      }
      else {
        FUN_1400d2390(&uStack_138,&uStack_228);
      }
      FUN_140003e00(&uStack_138,&uStack_158);
      FUN_1400019a0(&uStack_2e8,&uStack_138);
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_158);
      }
      uVar6 = CONCAT44(uVar4,_DAT_1420da3c0);
      puStack_a0 = &uStack_2e8;
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_1d8,1,uVar6,&puStack_b0);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_140004520(&uStack_158,uVar5,0x4000000000000000);
      uStack_130 = CONCAT44(uStack_20c,uStack_210);
      if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
        uStack_138 = uStack_218;
      }
      else {
        FUN_1400d2390(&uStack_138,&uStack_218);
      }
      FUN_140003e00(&uStack_138,&uStack_158);
      FUN_1400019a0(&uStack_2d8,&uStack_138);
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_158);
      }
      uVar7 = CONCAT44(uVar4,_DAT_1420da3a0);
      puStack_98 = &uStack_2d8;
      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar7,&puStack_a8);
    }
  }
  uStack_170 = uStack_170 & 0xffffffff;
  uStack_178 = 0x4053c00000000000;
  iVar3 = FUN_1416ab810(&uStack_1b8,&plStack_78,&uStack_90,&uStack_178);
  if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (0 < iVar3) {
    do {
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_d0 = 0x1f;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b09);
      FUN_1416ab670(0x4e,_DAT_1420d58e8,0x80000000,&uStack_228);
      FUN_1400019a0(&uStack_318,&uStack_228);
      puStack_b8 = &uStack_318;
      FUN_140001a50(&uStack_178,uVar5,8);
      FUN_1400019a0(&uStack_308,&uStack_178);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_178);
      }
      uVar7 = CONCAT44(uVar4,_DAT_1420da0c0);
      puStack_b0 = &uStack_308;
      uVar6 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar7,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      FUN_1400019a0(&uStack_228,uVar6);
      FUN_1416cf840(0x4e,_DAT_1420d58e8,0x80000000,&uStack_228);
      uStack_d0 = 0x20;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18abd);
      FUN_1416ab670(0x4e,_DAT_1420d58f8,0x80000000,&uStack_218);
      FUN_1400019a0(&uStack_318,&uStack_218);
      puStack_b8 = &uStack_318;
      FUN_140001a50(&uStack_178,uVar6,8);
      FUN_1400019a0(&uStack_308,&uStack_178);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_178);
      }
      ppuVar15 = &puStack_b8;
      uVar14 = CONCAT44(uVar4,_DAT_1420da0c0);
      puStack_b0 = &uStack_308;
      uVar7 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
      FUN_1400019a0(&uStack_218,uVar7);
      FUN_1416cf840(0x4e,_DAT_1420d58f8,0x80000000,&uStack_218);
      uStack_d0 = 0x21;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      uStack_178 = 0;
      uStack_170 = 0;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416d0010(0x4e,0x18e45,0x80000000,&uStack_178,uVar14,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar14 >> 0x20);
      FUN_1400019a0(&uStack_318,&uStack_178);
      puStack_b8 = &uStack_318;
      FUN_140001a50(&uStack_c8,uVar5,8);
      FUN_1400019a0(&uStack_308,&uStack_c8);
      if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_c8);
      }
      ppuVar15 = &puStack_b8;
      uVar14 = CONCAT44(uVar4,_DAT_1420da0c0);
      puStack_b0 = &uStack_308;
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
      uVar7 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar7);
      FUN_1400019a0(&uStack_178,uVar5);
      func_0x0001416a8c00(1);
      FUN_1416d0790(0x4e,0x18e45,0x80000000,&uStack_178);
      uStack_d0 = 0x22;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      uStack_c8 = 0;
      uStack_c0._0_4_ = 0;
      uStack_c0._4_4_ = 0;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416d0010(0x4e,0x18e54,0x80000000,&uStack_c8,uVar14,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar14 >> 0x20);
      FUN_1400019a0(&uStack_318,&uStack_c8);
      puStack_b8 = &uStack_318;
      FUN_140001a50(&uStack_108,uVar6,8);
      FUN_1400019a0(&uStack_308,&uStack_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_108);
      }
      uVar6 = CONCAT44(uVar4,_DAT_1420da0c0);
      puStack_b0 = &uStack_308;
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar6 = FUN_1416cfcc0(0x4e);
      FUN_1416a8cb0(uVar6);
      FUN_1400019a0(&uStack_c8,uVar5);
      func_0x0001416a8c00(1);
      FUN_1416d0790(0x4e,0x18e54,0x80000000,&uStack_c8);
      uStack_d0 = 0x23;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_148);
      }
      uStack_148 = 0;
      uStack_140 = 0x500000000;
      if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_1d8);
      }
      uStack_1d8 = 0;
      uStack_1d0 = 0x500000000;
      FUN_1416ab670(0x4e,_DAT_1420d58e8,0x80000000,&uStack_228);
      FUN_1400019a0(&uStack_318,uStack_340);
      puStack_b8 = &uStack_318;
      FUN_1416ab670(0x4e,_DAT_1420d58f8,0x80000000,&uStack_218);
      FUN_1400019a0(&uStack_308,uStack_340);
      puStack_b0 = &uStack_308;
      FUN_1400019a0(&uStack_2f8,uStack_340);
      puStack_a8 = &uStack_2f8;
      uVar6 = CONCAT44(uVar4,_DAT_1420da3b0);
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar6,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_140004520(&uStack_138,uVar5,0x4000000000000000);
      uStack_fc = uStack_21c;
      if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
        uStack_108 = uStack_228;
      }
      else {
        FUN_1400d2390(&uStack_108,&uStack_228);
      }
      FUN_140003e00(&uStack_108,&uStack_138);
      FUN_1400019a0(&uStack_2e8,&uStack_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_108);
      }
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      puStack_a0 = &uStack_2e8;
      uVar6 = CONCAT44(uVar4,_DAT_1420da3c0);
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_1d8,1,uVar6,&puStack_b0);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_140004520(&uStack_138,uVar5,0x4000000000000000);
      uStack_fc = uStack_20c;
      if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
        uStack_108 = uStack_218;
      }
      else {
        FUN_1400d2390(&uStack_108,&uStack_218);
      }
      FUN_140003e00(&uStack_108,&uStack_138);
      FUN_1400019a0(&uStack_2d8,&uStack_108);
      if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_108);
      }
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      puStack_98 = &uStack_2d8;
      uVar7 = CONCAT44(uVar4,_DAT_1420da3a0);
      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar7,&puStack_a8);
      uStack_d0 = 0x24;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      FUN_1416d0790(0x4e,0x18b08,0x80000000,&uStack_108);
      uStack_d0 = 0x25;
      uStack_138 = 0;
      uStack_130 = 0;
      FUN_1416d0790(0x4e,0x18abd,0x80000000,&uStack_138);
      uStack_d0 = 0x26;
      _DAT_142182d90 = (longlong *)0xd009fa;
      if ((0x46U >> (uStack_3b4 & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_3c0);
      }
      uStack_3b4 = 0;
      uStack_3c0 = 0x3ff0000000000000;
      FUN_1416cf840(0x4e,_DAT_1420d5a48,0,&uStack_3c0);
      cVar2 = func_0x0001416abe60(&uStack_1b8,&plStack_78,&uStack_90);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    } while (cVar2 != '\0');
  }
  FUN_1416ab620(&uStack_1b8,&plStack_78,&uStack_90);
  uStack_d0 = 0x29;
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  uStack_88 = 0;
  uStack_80 = 0x500000000;
  puStack_b8 = &uStack_3a0;
  uVar6 = CONCAT44(uVar4,_DAT_1420da3d0);
  uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar6,&puStack_b8);
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  FUN_1400019a0(&uStack_f0,uVar5);
  uStack_170 = uStack_170 & 0xffffffff;
  uStack_178 = 0xbff0000000000000;
  iVar3 = FUN_1416d9df0(&uStack_f0,&uStack_178,_DAT_1420f6b08,0);
  if (iVar3 == 0) {
    uStack_d0 = 0x2a;
    uVar14 = uStack_1d0;
  }
  else {
    uStack_d0 = 0x2b;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    puStack_b8 = &uStack_f0;
    FUN_140002730(&uStack_308,0x1420b2b20);
    puStack_b0 = &uStack_308;
    FUN_140002730(&uStack_2f8,0x1420b2b30);
    puStack_a8 = &uStack_2f8;
    uVar5 = CONCAT44(uVar4,_DAT_1420da650);
    FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar5,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_d0 = 0x2c;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    puStack_b8 = &uStack_f0;
    uVar6 = CONCAT44(uVar4,_DAT_1420da470);
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar6,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    FUN_1400019a0(&uStack_3b0,uVar5);
    uStack_d0 = 0x2d;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    puStack_b8 = &uStack_f0;
    FUN_140002730(&uStack_308,0x14217f2d8);
    puStack_b0 = &uStack_308;
    FUN_140002730(&uStack_2f8,0x14217f2d8);
    puStack_a8 = &uStack_2f8;
    uVar5 = CONCAT44(uVar4,_DAT_1420da650);
    FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar5,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_d0 = 0x31;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    puStack_b8 = &uStack_f0;
    FUN_140002730(&uStack_308,0x1420b2b40);
    uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
    puStack_b0 = &uStack_308;
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar6 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar6);
    FUN_1400019a0(&uStack_108,uVar5);
    func_0x0001416a8c00(1);
    FUN_1416d0790(0x4f,0x18b09,0x80000000,&uStack_108);
    uStack_d0 = 0x32;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_b8 = &uStack_f0;
    FUN_140002730(&uStack_308,0x1420b2b40);
    uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
    puStack_b0 = &uStack_308;
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar6 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar6);
    FUN_1400019a0(&uStack_138,uVar5);
    func_0x0001416a8c00(1);
    FUN_1416d0790(0x4f,0x18abd,0x80000000,&uStack_138);
    uStack_d0 = 0x33;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    puStack_b8 = &uStack_f0;
    FUN_140002730(&uStack_308,0x1420b2b40);
    ppuVar15 = &puStack_b8;
    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
    puStack_b0 = &uStack_308;
    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
    uVar6 = FUN_1416cfcc0(0x4f);
    FUN_1416a8cb0(uVar6);
    FUN_1400019a0(&uStack_158,uVar5);
    func_0x0001416a8c00(1);
    FUN_1416d0790(0x4f,0x18b9c,0x80000000,&uStack_158);
    uStack_d0 = 0x35;
    if ((0x46U >> (*(uint *)((longlong)puStack_250 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puStack_250);
    }
    *(undefined4 *)((longlong)puStack_250 + 0xc) = 0;
    *puStack_250 = 0xbff0000000000000;
    uStack_d0 = 0x36;
    _DAT_142182d90 = (longlong *)0x698765;
    uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b09);
    uVar6 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18abd);
    FUN_1416a8cb0(_DAT_14218ecf8);
    uVar4 = FUN_141693b30(uVar5);
    puVar8 = (undefined8 *)FUN_1416924a0(puStack_250,uVar4);
    FUN_1416a8cb0(*puStack_250);
    uVar4 = FUN_141693b30(uVar6);
    puVar9 = (undefined8 *)FUN_1416924a0(puVar8,uVar4);
    FUN_1416a8cb0(*puVar8);
    if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
      FUN_140001b50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
    func_0x0001416a8c00(3);
    uStack_d0 = 0x38;
    if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_248);
    }
    uStack_23c = 0;
    dStack_248 = 0.0;
    while( true ) {
      uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18b09);
      iVar3 = FUN_1416d9df0(&dStack_248,uVar5,_DAT_1420f6b08,1);
      if ((iVar3 == -2) || (0 < iVar3)) break;
      uStack_d0 = 0x39;
      if ((0x46U >> (uStack_274 & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_280);
      }
      uStack_274 = 0;
      dStack_280 = 0.0;
      while( true ) {
        uVar5 = (**(code **)(*plStack_78 + 8))(plStack_78,0x18abd);
        iVar3 = FUN_1416d9df0(&dStack_280,uVar5,_DAT_1420f6b08,1);
        if ((iVar3 == -2) || (0 < iVar3)) break;
        uStack_d0 = 0x3a;
        FUN_1416a8cb0(_DAT_14218ecf8);
        uVar4 = FUN_141693b30(&dStack_248);
        puVar8 = (undefined8 *)FUN_1416924a0(puStack_250,uVar4);
        FUN_1416a8cb0(*puStack_250);
        uVar4 = FUN_141693b30(&dStack_280);
        puVar9 = (undefined8 *)FUN_1416924a0(puVar8,uVar4);
        FUN_1416a8cb0(*puVar8);
        if ((0x46U >> (*(uint *)((longlong)puVar9 + 0xc) & 0x1f) & 1) != 0) {
          FUN_140001b50(puVar9);
        }
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        *puVar9 = 0;
        func_0x0001416a8c00(3);
        uStack_d0 = 0x3b;
        _DAT_142182d90 = (longlong *)0x680000;
        uStack_170 = uStack_170 & 0xffffffff;
        uStack_178 = 0;
        if ((uStack_274 & 0xffffff) == 0) {
          uVar4 = SUB84(dStack_280,0);
          uVar13 = (undefined4)((ulonglong)dStack_280 >> 0x20);
          if ((uStack_23c & 0xffffff) != 0) goto LAB_1400c868f;
LAB_1400c86b4:
          dVar12 = dStack_248;
        }
        else {
          uVar5 = FUN_1416940c0(&dStack_280);
          uVar4 = (undefined4)uVar5;
          uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((uStack_23c & 0xffffff) == 0) goto LAB_1400c86b4;
LAB_1400c868f:
          dVar12 = (double)FUN_1416940c0(&dStack_248);
        }
        FUN_1416cd560(puStack_250,(longlong)dVar12,(longlong)(double)CONCAT44(uVar13,uVar4),
                      &uStack_178);
        if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_178);
        }
        switch(uStack_274 & 0xffffff) {
        case 1:
          dStack_280 = (double)FUN_1416940c0(&dStack_280);
          dStack_280 = dStack_280 + 1.0;
          uStack_274 = 0;
          break;
        default:
          FUN_140001d70(&UNK_141981e6a,&dStack_280,&dStack_280);
          break;
        case 7:
          dStack_280 = (double)CONCAT44(dStack_280._4_4_,dStack_280._0_4_ + 1);
          break;
        case 10:
          dStack_280 = (double)((longlong)dStack_280 + 1);
          break;
        case 0xd:
          uStack_274 = 0;
        case 0:
          dStack_280 = dStack_280 + 1.0;
        }
      }
      switch(uStack_23c & 0xffffff) {
      case 1:
        dStack_248 = (double)FUN_1416940c0(&dStack_248);
        dStack_248 = dStack_248 + 1.0;
        uStack_23c = 0;
        break;
      default:
        FUN_140001d70(&UNK_141981e6a,&dStack_248,&dStack_248);
        break;
      case 7:
        dStack_248 = (double)CONCAT44(dStack_248._4_4_,dStack_248._0_4_ + 1);
        break;
      case 10:
        dStack_248 = (double)((longlong)dStack_248 + 1);
        break;
      case 0xd:
        uStack_23c = 0;
      case 0:
        dStack_248 = dStack_248 + 1.0;
      }
    }
    uStack_d0 = 0x3f;
    if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_128);
    }
    uStack_11c = 0;
    dStack_128 = 0.0;
    while( true ) {
      ppuVar15 = (undefined8 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_1416d0010(0x4f,0x18b09,0x80000000,&uStack_108,uVar14,ppuVar15);
      iVar3 = FUN_1416d9df0(&dStack_128,&uStack_108,_DAT_1420f6b08,1);
      if ((iVar3 == -2) || (-1 < iVar3)) break;
      uStack_d0 = 0x40;
      if ((0x46U >> (uStack_264 & 0x1f) & 1) != 0) {
        FUN_140001b50(&dStack_270);
      }
      uStack_264 = 0;
      dStack_270 = 0.0;
      while( true ) {
        ppuVar15 = (undefined8 **)((ulonglong)ppuVar15 & 0xffffffffffffff00);
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_1416d0010(0x4f,0x18abd,0x80000000,&uStack_138,uVar14,ppuVar15);
        iVar3 = FUN_1416d9df0(&dStack_270,&uStack_138,_DAT_1420f6b08,1);
        if ((iVar3 == -2) || (-1 < iVar3)) break;
        uStack_d0 = 0x41;
        if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_88);
        }
        uVar4 = (undefined4)(uVar14 >> 0x20);
        uStack_88 = 0;
        uStack_80 = 0x500000000;
        puStack_b8 = &uStack_f0;
        FUN_140002730(&uStack_308,0x1420b2b50);
        _DAT_142182d90 = (longlong *)0x680000;
        ppuVar15 = &puStack_b8;
        uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
        puStack_b0 = &uStack_308;
        uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
        if ((uStack_264 & 0xffffff) == 0) {
          uVar4 = SUB84(dStack_270,0);
          uVar13 = (undefined4)((ulonglong)dStack_270 >> 0x20);
          if ((uStack_11c & 0xffffff) != 0) goto LAB_1400c8a9f;
LAB_1400c8ac4:
          dVar12 = dStack_128;
        }
        else {
          uVar6 = FUN_1416940c0(&dStack_270);
          uVar4 = (undefined4)uVar6;
          uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((uStack_11c & 0xffffff) == 0) goto LAB_1400c8ac4;
LAB_1400c8a9f:
          dVar12 = (double)FUN_1416940c0(&dStack_128);
        }
        FUN_1416cd560(puStack_250,(longlong)dVar12,(longlong)(double)CONCAT44(uVar13,uVar4),uVar5);
        switch(uStack_264 & 0xffffff) {
        case 1:
          dStack_270 = (double)FUN_1416940c0(&dStack_270);
          dStack_270 = dStack_270 + 1.0;
          uStack_264 = 0;
          break;
        default:
          FUN_140001d70(&UNK_141981e6a,&dStack_270,&dStack_270);
          break;
        case 7:
          dStack_270 = (double)CONCAT44(dStack_270._4_4_,dStack_270._0_4_ + 1);
          break;
        case 10:
          dStack_270 = (double)((longlong)dStack_270 + 1);
          break;
        case 0xd:
          uStack_264 = 0;
        case 0:
          dStack_270 = dStack_270 + 1.0;
        }
      }
      switch(uStack_11c & 0xffffff) {
      case 1:
        dStack_128 = (double)FUN_1416940c0(&dStack_128);
        dStack_128 = dStack_128 + 1.0;
        uStack_11c = 0;
        break;
      default:
        FUN_140001d70(&UNK_141981e6a,&dStack_128,&dStack_128);
        break;
      case 7:
        dStack_128 = (double)CONCAT44(dStack_128._4_4_,dStack_128._0_4_ + 1);
        break;
      case 10:
        dStack_128 = (double)((longlong)dStack_128 + 1);
        break;
      case 0xd:
        uStack_11c = 0;
      case 0:
        dStack_128 = dStack_128 + 1.0;
      }
    }
    uStack_d0 = 0x45;
    if ((0x46U >> (uStack_384 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_390);
    }
    uVar4 = (undefined4)(uVar14 >> 0x20);
    uStack_384 = 0;
    uStack_390 = 0xc010000000000000;
    uStack_d0 = 0x46;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    FUN_1416ab210(plStack_78,uStack_90,&uStack_88,0,CONCAT44(uVar4,_DAT_1420da390),0);
    uStack_d0 = 0x47;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    uVar5 = 0;
    gml_Script_clear_objects(plStack_78,uStack_90,&uStack_88,0,0);
    do {
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_d0 = 0x49;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      puStack_b8 = &uStack_f0;
      uVar5 = CONCAT44(uVar4,_DAT_1420da470);
      puVar8 = (undefined8 *)FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar5,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_170 = puVar8[1];
      if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) == 0) {
        uStack_178 = *puVar8;
      }
      else {
        FUN_1400d2390(&uStack_178,puVar8);
      }
      FUN_140001c50(&uStack_178,1);
      iVar3 = FUN_1416d9df0(&uStack_178,&uStack_3b0,_DAT_1420f6b08,1);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_178);
      }
      if (-1 < iVar3) break;
      uStack_d0 = 0x4d;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_148);
      }
      uStack_148 = 0;
      uStack_140 = 0x500000000;
      puStack_b8 = &uStack_f0;
      FUN_140002730(&uStack_308,0x1420b2b60);
      uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
      puStack_b0 = &uStack_308;
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,2,uVar6,&puStack_b8);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_1400019a0(&uStack_2f8,uVar5);
      puStack_a8 = &uStack_2f8;
      uVar6 = CONCAT44(uVar4,_DAT_1420da460);
      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar6,&puStack_a8);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_1400019a0(&uStack_490,uVar5);
      uVar5 = _DAT_1420f6b08;
      uStack_170 = uStack_170 & 0xffffffff;
      uStack_178 = 0xbff0000000000000;
      iVar3 = FUN_1416d9df0(&uStack_490,&uStack_178,_DAT_1420f6b08,0);
      if (iVar3 != 0) {
        uStack_170 = uStack_170 & 0xffffffff;
        uStack_178 = 0xbff0000000000000;
        iVar3 = FUN_1416d9df0(&uStack_490,&uStack_178,uVar5,1);
        if (0 < iVar3) {
          uStack_d0 = 0x50;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          FUN_140002730(&uStack_308,0x1420b2b70);
          uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
          puStack_b0 = &uStack_308;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          FUN_1400019a0(&uStack_5e0,uVar5);
          uStack_d0 = 0x51;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          FUN_140002730(&uStack_308,0x1420b2b70);
          uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
          puStack_b0 = &uStack_308;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          FUN_1400019a0(&uStack_5d0,uVar5);
          uStack_d0 = 0x52;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          FUN_140002730(&uStack_308,0x1420b2b70);
          uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
          puStack_b0 = &uStack_308;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          FUN_1400019a0(&uStack_5c0,uVar5);
          uStack_d0 = 0x53;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          FUN_140002730(&uStack_308,0x1420b2b70);
          uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
          puStack_b0 = &uStack_308;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          FUN_1400019a0(&uStack_5b0,uVar5);
          uStack_d0 = 0x54;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          FUN_140002730(&uStack_308,0x1420b2b80);
          uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
          puStack_b0 = &uStack_308;
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          FUN_1400019a0(&uStack_4c0,uVar5);
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_f0;
          uVar5 = CONCAT44(uVar4,_DAT_1420da470);
          puVar8 = (undefined8 *)FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar5,&puStack_b8);
          uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
          uStack_170 = puVar8[1];
          if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) == 0) {
            uStack_178 = *puVar8;
          }
          else {
            FUN_1400d2390(&uStack_178,puVar8);
          }
          FUN_140001c50(&uStack_178,1);
          iVar3 = FUN_1416d9df0(&uStack_178,&uStack_3b0,_DAT_1420f6b08,1);
          if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_178);
          }
          if (-1 < iVar3) break;
          uStack_d0 = 0x58;
          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_88);
          }
          uStack_88 = 0;
          uStack_80 = 0x500000000;
          puStack_b8 = &uStack_5e0;
          puStack_b0 = &uStack_5d0;
          puStack_a8 = &uStack_4c0;
          puStack_a0 = &uStack_490;
          uVar6 = CONCAT44(uVar4,_DAT_1420da400);
          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,4,uVar6,&puStack_b8);
          FUN_1400019a0(&uStack_390,uVar5);
          iVar3 = FUN_1416ab810(&uStack_178,&plStack_78,&uStack_90,&uStack_390);
          uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (0 < iVar3) {
            do {
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              uStack_d0 = 0x5a;
              FUN_1400019a0(&uStack_5a0,&uStack_5c0);
              FUN_1416cfae0(plStack_78,_DAT_1420d58e8,0x80000000,&uStack_5a0);
              uStack_d0 = 0x5b;
              FUN_1400019a0(&uStack_590,&uStack_5b0);
              FUN_1416cfae0(plStack_78,_DAT_1420d58f8,0x80000000,&uStack_590);
              uStack_d0 = 0x5c;
              FUN_1400019a0(&uStack_580,&uStack_4c0);
              FUN_1416cfae0(plStack_78,_DAT_1420d5a18,0x80000000,&uStack_580);
              uStack_d0 = 0x5d;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_570,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5a98,0x80000000,&uStack_570);
              uStack_d0 = 0x5e;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_560,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5aa8,0x80000000,&uStack_560);
              uStack_d0 = 0x5f;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_550,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5ab8,0x80000000,&uStack_550);
              uStack_d0 = 0x60;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_540,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5ac8,0x80000000,&uStack_540);
              uStack_d0 = 0x61;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_530,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5ad8,0x80000000,&uStack_530);
              uStack_d0 = 0x62;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_520,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5ae8,0x80000000,&uStack_520);
              uStack_d0 = 99;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b80);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_510,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5af8,0x80000000,&uStack_510);
              uStack_d0 = 100;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b70);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_500,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5b08,0x80000000,&uStack_500);
              uStack_d0 = 0x65;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b90);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_4f0,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5b18,0x80000000,&uStack_4f0);
              uStack_d0 = 0x66;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_148);
              }
              uStack_148 = 0;
              uStack_140 = 0x500000000;
              if ((0x46U >> (uStack_1d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_1d8);
              }
              uStack_1d8 = 0;
              uStack_1d0 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b90);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_1d8,2,uVar6,&puStack_b8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_2f8,uVar5);
              puStack_a8 = &uStack_2f8;
              uVar6 = CONCAT44(uVar4,_DAT_1420da230);
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar6,&puStack_a8);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
              FUN_1400019a0(&uStack_2e8,uVar5);
              puStack_a0 = &uStack_2e8;
              ppuVar15 = &puStack_a0;
              uVar14 = CONCAT44(uVar4,_DAT_1420da620);
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar14,ppuVar15);
              FUN_1400019a0(&uStack_4e0,uVar5);
              FUN_1416cfae0(plStack_78,_DAT_1420d5b28,0x80000000,&uStack_4e0);
              uStack_d0 = 0x68;
              if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_208);
              }
              uStack_1fc = 0;
              uStack_208 = 0;
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,0,&uStack_480,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = (ulonglong)(uint)uStack_c0;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_480,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x69;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_480,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,0,&uStack_480);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,1,&uStack_470,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_470,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6a;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_470,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,1,&uStack_470);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,2,&uStack_460,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_460,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6b;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_460,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,2,&uStack_460);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,3,&uStack_450,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_450,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6c;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_450,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,3,&uStack_450);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,4,&uStack_440,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_440,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6d;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_440,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,4,&uStack_440);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,5,&uStack_430,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_430,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6e;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_430,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,5,&uStack_430);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,6,&uStack_420,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_420,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x6f;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_420,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,6,&uStack_420);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,7,&uStack_410,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_410,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x70;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_410,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,7,&uStack_410);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,8,&uStack_400,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_400,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x71;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_400,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,8,&uStack_400);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,9,&uStack_3f0,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_3f0,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x72;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_3f0,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,9,&uStack_3f0);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,10,&uStack_3e0,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_3e0,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x73;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_3e0,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,10,&uStack_3e0);
              }
              uVar14 = uVar14 & 0xffffffffffffff00;
              FUN_1416cea80(plStack_78,_DAT_1420d5a48,0xb,&uStack_3d0,uVar14,
                            (ulonglong)ppuVar15 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              uStack_c0._4_4_ = 0;
              uStack_c8 = 0xbff0000000000000;
              iVar3 = FUN_1416d9df0(&uStack_3d0,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar3 == -2) || (0 < iVar3)) {
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
                uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_1400019a0(&uStack_208,uVar5);
              }
              else {
                uStack_d0 = 0x74;
                _DAT_142182d90 = (longlong *)0x6809fa;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b80);
                uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
                uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_1400019a0(&uStack_3d0,uVar5);
                FUN_1416cfae0(plStack_78,_DAT_1420d5a48,0xb,&uStack_3d0);
              }
              uStack_d0 = 0x76;
              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_88);
              }
              uStack_88 = 0;
              uStack_80 = 0x500000000;
              puStack_b8 = &uStack_f0;
              FUN_140002730(&uStack_308,0x1420b2b50);
              uVar6 = CONCAT44(uVar4,_DAT_1420da3e0);
              puStack_b0 = &uStack_308;
              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
              FUN_1400019a0(&uStack_4d0,uVar5);
              if ((0x46U >> (uStack_2a4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_2b0);
              }
              uStack_2a4 = 0;
              uStack_2b0 = 0;
              if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_338);
              }
              uStack_32c = 0;
              uStack_338 = 0;
              if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_198);
              }
              uStack_18c = 0;
              uStack_198 = 0;
              if ((0x46U >> (uStack_374 & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_380);
              }
              uStack_374 = 0;
              uStack_380 = 0;
              if ((0x46U >> (uStack_2b4 & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_2c0);
              }
              uStack_2b4 = 0;
              uStack_2c0 = 0x3ff0000000000000;
              uStack_d0 = 0x78;
              if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_238);
              }
              uStack_22c = 0;
              dStack_238 = 0.0;
              while( true ) {
                iVar3 = FUN_1416d9df0(&dStack_238,&uStack_4d0,_DAT_1420f6b08,1);
                uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                if ((iVar3 == -2) || (-1 < iVar3)) break;
                uStack_d0 = 0x7a;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b60);
                ppuVar15 = &puStack_b8;
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                FUN_1400019a0(&uStack_2b0,uVar5);
                uStack_d0 = 0x7c;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                uVar14 = uVar14 & 0xffffffffffffff00;
                FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                              (ulonglong)ppuVar15 & 0xffffffffffffff00);
                uVar4 = (undefined4)(uVar14 >> 0x20);
                FUN_1400019a0(&uStack_318,&uStack_260);
                puStack_b8 = &uStack_318;
                puStack_b0 = &uStack_2b0;
                uVar6 = CONCAT44(uVar4,_DAT_1420da350);
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
                uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                FUN_1400019a0(&uStack_2c0,uVar5);
                uStack_d0 = 0x7e;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                FUN_140002730(&uStack_308,0x1420b2b40);
                uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                puStack_b0 = &uStack_308;
                uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,&puStack_b8);
                FUN_1400019a0(&uStack_338,uVar5);
                uStack_d0 = 0x80;
                uStack_c0._4_4_ = uStack_32c;
                uStack_c0._0_4_ = uStack_330;
                if ((0x46U >> (uStack_32c & 0x1f) & 1) == 0) {
                  uStack_c8 = uStack_338;
                }
                else {
                  FUN_1400d2390(&uStack_c8,&uStack_338);
                }
                if ((*(int *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 4) < _DAT_14217f368) &&
                   (FUN_14193dcf0(&DAT_14217f368), _DAT_14217f368 == -1)) {
                  _DAT_14217f2fc = 0;
                  _DAT_14217f2f0 = 0x3ff0000000000000;
                  _DAT_14217f310 = 0x100000000;
                  _DAT_14217f304 = 0x4000000000000000;
                  _DAT_14217f324 = 0x200000000;
                  _DAT_14217f318 = 0x4008000000000000;
                  _DAT_14217f338 = 0x300000000;
                  _DAT_14217f32c = 0x4010000000000000;
                  _DAT_14217f34c = 0x400000000;
                  _DAT_14217f340 = 0x4014000000000000;
                  _DAT_14217f360 = 0x500000000;
                  _DAT_14217f354 = 0x4018000000000000;
                  FUN_14193e038(FUN_1400d1ff0);
                  FUN_14193dc90(&DAT_14217f368);
                }
                uVar5 = _DAT_1420f6b08;
                iVar3 = FUN_1416d9df0(&DAT_14217f2f0,&uStack_c8,_DAT_1420f6b08,0);
                if (iVar3 == 0) {
                  lVar10 = 0;
LAB_1400cb8f0:
                  uVar4 = (undefined4)(uVar14 >> 0x20);
                  switch(*(undefined4 *)(lVar10 * 0x14 + 0x14217f300)) {
                  case 0:
                    uStack_d0 = 0x82;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2b70);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_198,uVar5);
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    uVar4 = 0x84;
                    if (cVar2 != '\0') {
                      uStack_d0 = 0x83;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_318,&uStack_260);
                      puStack_b8 = &uStack_318;
                      puStack_b0 = &uStack_2b0;
                      puStack_a8 = &uStack_198;
                      uVar14 = CONCAT44(uVar13,uRam00000001420da680);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar14,&puStack_b8);
                    }
                    break;
                  case 1:
                    uStack_d0 = 0x87;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2b60);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_198,uVar5);
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    uVar4 = 0x89;
                    if (cVar2 != '\0') {
                      uStack_d0 = 0x88;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_318,&uStack_260);
                      puStack_b8 = &uStack_318;
                      puStack_b0 = &uStack_2b0;
                      puStack_a8 = &uStack_198;
                      uVar14 = CONCAT44(uVar13,uRam00000001420da680);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar14,&puStack_b8);
                    }
                    break;
                  case 2:
                    uStack_d0 = 0x8c;
                    if ((0x46U >> (uStack_354 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_360);
                    }
                    uStack_354 = 0;
                    uStack_360 = 0;
                    if ((0x46U >> (uStack_344 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_350);
                    }
                    uStack_344 = 0;
                    uStack_350 = 0;
                    if ((0x46U >> (uStack_294 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_2a0);
                    }
                    uStack_294 = 0;
                    uStack_2a0 = 0;
                    if ((0x46U >> (uStack_364 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_370);
                    }
                    uStack_364 = 0;
                    uStack_370 = 0;
                    if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_188);
                    }
                    uStack_17c = 0;
                    uStack_188 = 0;
                    uStack_d0 = 0x8d;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2b50);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_2a0,uVar5);
                    uStack_d0 = 0x8f;
                    if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_1f8);
                    }
                    uStack_1ec = 0;
                    dStack_1f8 = 0.0;
                    while ((iVar3 = FUN_1416d9df0(&dStack_1f8,&uStack_2a0,_DAT_1420f6b08,1),
                           iVar3 != -2 && (iVar3 < 0))) {
                      uStack_d0 = 0x90;
                      _DAT_142182d90 = (longlong *)0x698866;
                      uVar4 = FUN_141693b30(&dStack_1f8);
                      puVar8 = (undefined8 *)FUN_1416924a0(&uStack_360,uVar4);
                      FUN_1416a8cb0(uStack_360);
                      if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                        FUN_140001b50(puVar8);
                      }
                      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                      *puVar8 = 0;
                      func_0x0001416a8c00(1);
                      switch(uStack_1ec & 0xffffff) {
                      case 1:
                        dStack_1f8 = (double)FUN_1416940c0(&dStack_1f8);
                        dStack_1f8 = dStack_1f8 + 1.0;
                        uStack_1ec = 0;
                        break;
                      default:
                        FUN_140001d70(&UNK_141981e6a,&dStack_1f8,&dStack_1f8);
                        break;
                      case 7:
                        dStack_1f8 = (double)CONCAT44(dStack_1f8._4_4_,dStack_1f8._0_4_ + 1);
                        break;
                      case 10:
                        dStack_1f8 = (double)((longlong)dStack_1f8 + 1);
                        break;
                      case 0xd:
                        uStack_1ec = 0;
                      case 0:
                        dStack_1f8 = dStack_1f8 + 1.0;
                      }
                    }
                    uStack_d0 = 0x93;
                    if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_128);
                    }
                    uStack_11c = 0;
                    dStack_128 = 0.0;
                    while ((iVar3 = FUN_1416d9df0(&dStack_128,&uStack_2a0,_DAT_1420f6b08,1),
                           iVar3 != -2 && (iVar3 < 0))) {
                      uStack_d0 = 0x94;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uVar4 = (undefined4)(uVar14 >> 0x20);
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      puStack_b8 = &uStack_f0;
                      FUN_140002730(&uStack_308,0x1420b2b40);
                      ppuVar15 = &puStack_b8;
                      uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                      puStack_b0 = &uStack_308;
                      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                      FUN_1400019a0(&uStack_188,uVar5);
                      uStack_d0 = 0x95;
                      uStack_10c = uStack_17c;
                      uStack_110 = uStack_180;
                      if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
                        uStack_118 = uStack_188;
                      }
                      else {
                        FUN_1400d2390(&uStack_118,&uStack_188);
                      }
                      if ((*(int *)(*(longlong *)
                                     (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                     (ulonglong)__tls_index * 8) + 4) < iRam000000014217f3ac) &&
                         (FUN_14193dcf0(0x14217f3ac), iRam000000014217f3ac == -1)) {
                        uRam000000014217f37c = 0;
                        uRam000000014217f370 = 0x3ff0000000000000;
                        uRam000000014217f390 = 0x100000000;
                        uRam000000014217f384 = 0x4008000000000000;
                        uRam000000014217f3a4 = 0x200000000;
                        uRam000000014217f398 = 0x4010000000000000;
                        FUN_14193e038(FUN_1400d20f0);
                        FUN_14193dc90(0x14217f3ac);
                      }
                      uVar5 = _DAT_1420f6b08;
                      iVar3 = FUN_1416d9df0(0x14217f370,&uStack_118,_DAT_1420f6b08,0);
                      if (iVar3 == 0) {
                        lVar10 = 0;
code_r0x0001400cc685:
                        iVar3 = *(int *)(lVar10 * 0x14 + 0x14217f380);
                        if (iVar3 == 2) {
                          uStack_d0 = 0xb3;
                          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_88);
                          }
                          uVar4 = (undefined4)(uVar14 >> 0x20);
                          uStack_88 = 0;
                          uStack_80 = 0x500000000;
                          puStack_b8 = &uStack_f0;
                          FUN_140002730(&uStack_308,0x1420b2ba0);
                          ppuVar15 = &puStack_b8;
                          uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                          puStack_b0 = &uStack_308;
                          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                          FUN_1400019a0(&uStack_198,uVar5);
                        }
                        else {
                          if (iVar3 != 1) {
                            if (iVar3 == 0) {
                              uStack_d0 = 0x97;
                              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_88);
                              }
                              uVar4 = (undefined4)(uVar14 >> 0x20);
                              uStack_88 = 0;
                              uStack_80 = 0x500000000;
                              puStack_b8 = &uStack_f0;
                              FUN_140002730(&uStack_308,0x1420b2b70);
                              ppuVar15 = &puStack_b8;
                              uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                              puStack_b0 = &uStack_308;
                              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,
                                                    ppuVar15);
                              FUN_1400019a0(&uStack_198,uVar5);
                            }
                            goto code_r0x0001400cc760;
                          }
                          uStack_d0 = 0x9b;
                          if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_88);
                          }
                          uVar4 = (undefined4)(uVar14 >> 0x20);
                          uStack_88 = 0;
                          uStack_80 = 0x500000000;
                          puStack_b8 = &uStack_f0;
                          FUN_140002730(&uStack_308,0x1420b2b50);
                          ppuVar15 = &puStack_b8;
                          uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                          puStack_b0 = &uStack_308;
                          uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                          FUN_1400019a0(&uStack_370,uVar5);
                          uStack_d0 = 0x9c;
                          if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_1e8);
                          }
                          uStack_1dc = 0;
                          dStack_1e8 = 0.0;
                          while ((iVar3 = FUN_1416d9df0(&dStack_1e8,&uStack_370,_DAT_1420f6b08,1),
                                 iVar3 != -2 && (iVar3 < 0))) {
                            uStack_d0 = 0x9d;
                            _DAT_142182d90 = (longlong *)0x698867;
                            uVar4 = FUN_141693b30(&dStack_1e8);
                            puVar8 = (undefined8 *)FUN_1416924a0(&uStack_350,uVar4);
                            FUN_1416a8cb0(uStack_350);
                            if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) != 0) {
                              FUN_140001b50(puVar8);
                            }
                            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
                            *puVar8 = 0;
                            func_0x0001416a8c00(1);
                            switch(uStack_1dc & 0xffffff) {
                            case 1:
                              dStack_1e8 = (double)FUN_1416940c0(&dStack_1e8);
                              dStack_1e8 = dStack_1e8 + 1.0;
                              uStack_1dc = 0;
                              break;
                            default:
                              FUN_140001d70(&UNK_141981e6a,&dStack_1e8,&dStack_1e8);
                              break;
                            case 7:
                              dStack_1e8 = (double)CONCAT44(dStack_1e8._4_4_,dStack_1e8._0_4_ + 1);
                              break;
                            case 10:
                              dStack_1e8 = (double)((longlong)dStack_1e8 + 1);
                              break;
                            case 0xd:
                              uStack_1dc = 0;
                            case 0:
                              dStack_1e8 = dStack_1e8 + 1.0;
                            }
                          }
                          uStack_d0 = 0xa0;
                          if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
                            FUN_140001b50(&dStack_1c8);
                          }
                          uStack_1bc = 0;
                          dStack_1c8 = 0.0;
                          while ((iVar3 = FUN_1416d9df0(&dStack_1c8,&uStack_370,_DAT_1420f6b08,1),
                                 iVar3 != -2 && (iVar3 < 0))) {
                            uStack_d0 = 0xa1;
                            if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_88);
                            }
                            uVar4 = (undefined4)(uVar14 >> 0x20);
                            uStack_88 = 0;
                            uStack_80 = 0x500000000;
                            puStack_b8 = &uStack_f0;
                            FUN_140002730(&uStack_308,0x1420b2b40);
                            ppuVar15 = &puStack_b8;
                            uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                            puStack_b0 = &uStack_308;
                            uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15)
                            ;
                            FUN_1400019a0(&uStack_188,uVar5);
                            uStack_d0 = 0xa2;
                            uStack_284 = uStack_17c;
                            uStack_288 = uStack_180;
                            if ((0x46U >> (uStack_17c & 0x1f) & 1) == 0) {
                              uStack_290 = uStack_188;
                            }
                            else {
                              FUN_1400d2390(&uStack_290,&uStack_188);
                            }
                            if ((*(int *)(*(longlong *)
                                           (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                           (ulonglong)__tls_index * 8) + 4) < iRam000000014217f3d8)
                               && (FUN_14193dcf0(0x14217f3d8), iRam000000014217f3d8 == -1)) {
                              uRam000000014217f3bc = 0;
                              uRam000000014217f3b0 = 0x3ff0000000000000;
                              uRam000000014217f3d0 = 0x100000000;
                              uRam000000014217f3c4 = 0x4010000000000000;
                              FUN_14193e038(FUN_1400d21a0);
                              FUN_14193dc90(0x14217f3d8);
                            }
                            uVar5 = _DAT_1420f6b08;
                            iVar3 = FUN_1416d9df0(0x14217f3b0,&uStack_290,_DAT_1420f6b08,0);
                            if (iVar3 == 0) {
                              lVar10 = 0;
code_r0x0001400ccce2:
                              iVar3 = *(int *)(lVar10 * 0x14 + 0x14217f3c0);
                              if (iVar3 != 1) {
                                if (iVar3 == 0) {
                                  uStack_d0 = 0xa4;
                                  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                                    FUN_140001b50(&uStack_88);
                                  }
                                  uVar4 = (undefined4)(uVar14 >> 0x20);
                                  uStack_88 = 0;
                                  uStack_80 = 0x500000000;
                                  puStack_b8 = &uStack_f0;
                                  FUN_140002730(&uStack_308,0x1420b2b70);
                                  ppuVar15 = &puStack_b8;
                                  uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                                  puStack_b0 = &uStack_308;
                                  uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,
                                                        ppuVar15);
                                  FUN_1400019a0(&uStack_380,uVar5);
                                }
                                goto code_r0x0001400ccdab;
                              }
                              uStack_d0 = 0xa8;
                              if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                                FUN_140001b50(&uStack_88);
                              }
                              uVar4 = (undefined4)(uVar14 >> 0x20);
                              uStack_88 = 0;
                              uStack_80 = 0x500000000;
                              puStack_b8 = &uStack_f0;
                              FUN_140002730(&uStack_308,0x1420b2ba0);
                              ppuVar15 = &puStack_b8;
                              uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                              puStack_b0 = &uStack_308;
                              uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,
                                                    ppuVar15);
                              FUN_1400019a0(&uStack_380,uVar5);
                              if ((uStack_1bc & 0xffffff) != 0) goto code_r0x0001400ccdd0;
code_r0x0001400cceaf:
                              uStack_d0 = 0xac;
                              _DAT_142182d90 = (longlong *)0x680000;
                              dVar12 = dStack_1c8;
                            }
                            else {
                              iVar3 = FUN_1416d9df0(0x14217f3c4,&uStack_290,uVar5,0);
                              if (iVar3 == 0) {
                                lVar10 = 1;
                                goto code_r0x0001400ccce2;
                              }
code_r0x0001400ccdab:
                              if ((uStack_1bc & 0xffffff) == 0) goto code_r0x0001400cceaf;
code_r0x0001400ccdd0:
                              uStack_d0 = 0xac;
                              _DAT_142182d90 = (longlong *)0x680000;
                              dVar12 = (double)FUN_1416940c0(&dStack_1c8);
                            }
                            FUN_1416cd4e0(&uStack_350,(longlong)dVar12,&uStack_380);
                            if ((0x46U >> (uStack_284 & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_290);
                            }
                            switch(uStack_1bc & 0xffffff) {
                            case 1:
                              dStack_1c8 = (double)FUN_1416940c0(&dStack_1c8);
                              dStack_1c8 = dStack_1c8 + 1.0;
                              uStack_1bc = 0;
                              break;
                            default:
                              FUN_140001d70(&UNK_141981e6a,&dStack_1c8,&dStack_1c8);
                              break;
                            case 7:
                              dStack_1c8 = (double)CONCAT44(dStack_1c8._4_4_,dStack_1c8._0_4_ + 1);
                              break;
                            case 10:
                              dStack_1c8 = (double)((longlong)dStack_1c8 + 1);
                              break;
                            case 0xd:
                              uStack_1bc = 0;
                            case 0:
                              dStack_1c8 = dStack_1c8 + 1.0;
                            }
                          }
                          uStack_d0 = 0xaf;
                          FUN_1400019a0(&uStack_198,&uStack_350);
                        }
                        if ((uStack_11c & 0xffffff) != 0) goto code_r0x0001400cc785;
code_r0x0001400cca80:
                        uStack_d0 = 0xb7;
                        _DAT_142182d90 = (longlong *)0x680000;
                        dVar12 = dStack_128;
                      }
                      else {
                        iVar3 = FUN_1416d9df0(0x14217f384,&uStack_118,uVar5,0);
                        if (iVar3 == 0) {
                          lVar10 = 1;
                          goto code_r0x0001400cc685;
                        }
                        iVar3 = FUN_1416d9df0(0x14217f398,&uStack_118,uVar5,0);
                        if (iVar3 == 0) {
                          lVar10 = 2;
                          goto code_r0x0001400cc685;
                        }
code_r0x0001400cc760:
                        if ((uStack_11c & 0xffffff) == 0) goto code_r0x0001400cca80;
code_r0x0001400cc785:
                        uStack_d0 = 0xb7;
                        _DAT_142182d90 = (longlong *)0x680000;
                        dVar12 = (double)FUN_1416940c0(&dStack_128);
                      }
                      FUN_1416cd4e0(&uStack_360,(longlong)dVar12,&uStack_198);
                      if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_118);
                      }
                      switch(uStack_11c & 0xffffff) {
                      case 1:
                        dStack_128 = (double)FUN_1416940c0(&dStack_128);
                        dStack_128 = dStack_128 + 1.0;
                        uStack_11c = 0;
                        break;
                      default:
                        FUN_140001d70(&UNK_141981e6a,&dStack_128,&dStack_128);
                        break;
                      case 7:
                        dStack_128 = (double)CONCAT44(dStack_128._4_4_,dStack_128._0_4_ + 1);
                        break;
                      case 10:
                        dStack_128 = (double)((longlong)dStack_128 + 1);
                        break;
                      case 0xd:
                        uStack_11c = 0;
                      case 0:
                        dStack_128 = dStack_128 + 1.0;
                      }
                    }
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    uVar4 = 0xbb;
                    if (cVar2 != '\0') {
                      uStack_d0 = 0xba;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_318,&uStack_260);
                      puStack_b8 = &uStack_318;
                      puStack_b0 = &uStack_2b0;
                      puStack_a8 = &uStack_360;
                      uVar14 = CONCAT44(uVar13,uRam00000001420da680);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar14,&puStack_b8);
                    }
                    break;
                  case 3:
                    uStack_d0 = 0xbe;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2ba0);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_198,uVar5);
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    uVar4 = 0xc0;
                    if (cVar2 != '\0') {
                      uStack_d0 = 0xbf;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_318,&uStack_260);
                      puStack_b8 = &uStack_318;
                      puStack_b0 = &uStack_2b0;
                      puStack_a8 = &uStack_198;
                      uVar14 = CONCAT44(uVar13,uRam00000001420da680);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar14,&puStack_b8);
                    }
                    break;
                  case 4:
                    uStack_d0 = 0xc3;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2bb0);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_198,uVar5);
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    uVar4 = 0xc5;
                    if (cVar2 != '\0') {
                      uStack_d0 = 0xc4;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_318,&uStack_260);
                      puStack_b8 = &uStack_318;
                      puStack_b0 = &uStack_2b0;
                      puStack_a8 = &uStack_198;
                      uVar14 = CONCAT44(uVar13,uRam00000001420da680);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,3,uVar14,&puStack_b8);
                    }
                    break;
                  case 5:
                    uStack_d0 = 200;
                    if ((0x46U >> (uStack_294 & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_2a0);
                    }
                    uStack_294 = 0;
                    uStack_2a0 = 0;
                    if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_188);
                    }
                    uStack_17c = 0;
                    uStack_188 = 0;
                    uStack_d0 = 0xc9;
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_f0;
                    FUN_140002730(&uStack_308,0x1420b2b50);
                    ppuVar15 = &puStack_b8;
                    uVar14 = CONCAT44(uVar4,_DAT_1420da3e0);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,ppuVar15);
                    FUN_1400019a0(&uStack_2a0,uVar5);
                    uStack_d0 = 0xcb;
                    cVar2 = FUN_1416927d0(&uStack_2c0);
                    if (cVar2 == '\0') {
                      uVar5 = CONCAT44((int)(uVar14 >> 0x20),_DAT_1420da020);
                      puVar8 = (undefined8 *)
                               FUN_1416ab210(plStack_78,uStack_90,&uStack_1d8,0,uVar5,0);
                      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                      uStack_10c = *(uint *)((longlong)puVar8 + 0xc);
                      uStack_110 = *(uint *)(puVar8 + 1);
                      if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) goto code_r0x0001400cd25a;
                      FUN_1400d2390(&uStack_118,puVar8);
                    }
                    else {
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_148);
                      }
                      uStack_148 = 0;
                      uStack_140 = 0x500000000;
                      uVar14 = uVar14 & 0xffffffffffffff00;
                      FUN_1416cea80(plStack_78,_DAT_1420d59e8,0x80000000,&uStack_260,uVar14,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      uVar4 = (undefined4)(uVar14 >> 0x20);
                      FUN_1400019a0(&uStack_2f8,&uStack_260);
                      puStack_a8 = &uStack_2f8;
                      puStack_a0 = &uStack_2b0;
                      uVar5 = CONCAT44(uVar4,_DAT_1420da670);
                      puVar8 = (undefined8 *)
                               FUN_1416ab210(plStack_78,uStack_90,&uStack_148,2,uVar5,&puStack_a8);
                      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
                      uStack_10c = *(uint *)((longlong)puVar8 + 0xc);
                      uStack_110 = *(uint *)(puVar8 + 1);
                      if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
code_r0x0001400cd25a:
                        uStack_118 = *puVar8;
                      }
                      else {
                        FUN_1400d2390(&uStack_118,puVar8);
                      }
                    }
                    FUN_1400019a0(&uStack_198,&uStack_118);
                    if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_118);
                    }
                    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_88);
                    }
                    uStack_88 = 0;
                    uStack_80 = 0x500000000;
                    puStack_b8 = &uStack_198;
                    FUN_140002730(&uStack_308,0x1420b2b20);
                    uVar14 = CONCAT44(uVar4,_DAT_1420da430);
                    puStack_b0 = &uStack_308;
                    uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,&puStack_b8);
                    cVar2 = FUN_1416927d0(uVar5);
                    uVar4 = (undefined4)(uVar14 >> 0x20);
                    if (cVar2 != '\0') {
                      uStack_d0 = 0xcd;
                      if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_148);
                      }
                      uStack_148 = 0;
                      uStack_140 = 0x500000000;
                      puStack_a8 = &uStack_198;
                      uVar14 = CONCAT44(uVar4,_DAT_1420da010);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_148,1,uVar14,&puStack_a8);
                    }
                    uStack_d0 = 0xcf;
                    if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&dStack_128);
                    }
                    uStack_11c = 0;
                    dStack_128 = 0.0;
                    while( true ) {
                      iVar3 = FUN_1416d9df0(&dStack_128,&uStack_2a0,_DAT_1420f6b08,1);
                      uVar13 = (undefined4)(uVar14 >> 0x20);
                      uVar4 = 0xd4;
                      if ((iVar3 == -2) || (-1 < iVar3)) break;
                      uStack_d0 = 0xd0;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      puStack_b8 = &uStack_f0;
                      FUN_140002730(&uStack_308,0x1420b2b70);
                      uVar6 = CONCAT44(uVar13,_DAT_1420da3e0);
                      puStack_b0 = &uStack_308;
                      uVar5 = FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar6,&puStack_b8);
                      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
                      FUN_1400019a0(&uStack_188,uVar5);
                      uStack_d0 = 0xd1;
                      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                        FUN_140001b50(&uStack_88);
                      }
                      uStack_88 = 0;
                      uStack_80 = 0x500000000;
                      puStack_b8 = &uStack_198;
                      puStack_b0 = &uStack_188;
                      uVar14 = CONCAT44(uVar4,_DAT_1420da1d0);
                      FUN_1416ab210(plStack_78,uStack_90,&uStack_88,2,uVar14,&puStack_b8);
                      switch(uStack_11c & 0xffffff) {
                      case 1:
                        dStack_128 = (double)FUN_1416940c0(&dStack_128);
                        dStack_128 = dStack_128 + 1.0;
                        uStack_11c = 0;
                        break;
                      default:
                        FUN_140001d70(&UNK_141981e6a,&dStack_128,&dStack_128);
                        break;
                      case 7:
                        dStack_128 = (double)CONCAT44(dStack_128._4_4_,dStack_128._0_4_ + 1);
                        break;
                      case 10:
                        dStack_128 = (double)((longlong)dStack_128 + 1);
                        break;
                      case 0xd:
                        uStack_11c = 0;
                      case 0:
                        dStack_128 = dStack_128 + 1.0;
                      }
                    }
                    break;
                  default:
                    uVar4 = 0xd6;
                  }
                }
                else {
                  iVar3 = FUN_1416d9df0(&DAT_14217f304,&uStack_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar10 = 1;
                    goto LAB_1400cb8f0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f318,&uStack_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar10 = 2;
                    goto LAB_1400cb8f0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f32c,&uStack_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar10 = 3;
                    goto LAB_1400cb8f0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f340,&uStack_c8,uVar5,0);
                  if (iVar3 == 0) {
                    lVar10 = 4;
                    goto LAB_1400cb8f0;
                  }
                  iVar3 = FUN_1416d9df0(&DAT_14217f354,&uStack_c8,uVar5,0);
                  uVar4 = 0xd6;
                  if (iVar3 == 0) {
                    lVar10 = 5;
                    goto LAB_1400cb8f0;
                  }
                }
                uVar13 = (undefined4)(uVar14 >> 0x20);
                uStack_d0 = uVar4;
                if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_88);
                }
                uStack_88 = 0;
                uStack_80 = 0x500000000;
                puStack_b8 = &uStack_f0;
                uVar6 = CONCAT44(uVar13,_DAT_1420da470);
                puVar8 = (undefined8 *)
                         FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar6,&puStack_b8);
                uStack_10c = *(uint *)((longlong)puVar8 + 0xc);
                uStack_110 = *(uint *)(puVar8 + 1);
                if ((0x46U >> (uStack_10c & 0x1f) & 1) == 0) {
                  uStack_118 = *puVar8;
                }
                else {
                  FUN_1400d2390(&uStack_118,puVar8);
                }
                FUN_140001c50(&uStack_118,1);
                iVar3 = FUN_1416d9df0(&uStack_118,&uStack_3b0,_DAT_1420f6b08,1);
                if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_118);
                }
                if (iVar3 < 0) {
                  iVar11 = 0;
                  iVar3 = 0;
                }
                else {
                  uStack_d0 = 0xd9;
                  iVar11 = 0x9f;
                  iVar3 = 0x9f;
                }
                if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_c8);
                  iVar3 = iVar11;
                }
                if (iVar3 != 0) break;
                switch(uStack_22c & 0xffffff) {
                case 1:
                  dStack_238 = (double)FUN_1416940c0(&dStack_238);
                  dStack_238 = dStack_238 + 1.0;
                  uStack_22c = 0;
                  break;
                default:
                  FUN_140001d70(&UNK_141981e6a,&dStack_238,&dStack_238);
                  break;
                case 7:
                  dStack_238 = (double)CONCAT44(dStack_238._4_4_,dStack_238._0_4_ + 1);
                  break;
                case 10:
                  dStack_238 = (double)((longlong)dStack_238 + 1);
                  break;
                case 0xd:
                  uStack_22c = 0;
                case 0:
                  dStack_238 = dStack_238 + 1.0;
                }
              }
              cVar2 = func_0x0001416abe60(&uStack_178,&plStack_78,&uStack_90);
              uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
            } while (cVar2 != '\0');
          }
          FUN_1416ab620(&uStack_178,&plStack_78,&uStack_90);
          if (lStack_168 != 0) {
            func_0x000141695b90();
            lStack_168 = 0;
          }
        }
      }
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      puStack_b8 = &uStack_f0;
      uVar5 = CONCAT44(uVar4,_DAT_1420da470);
      puVar8 = (undefined8 *)FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,uVar5,&puStack_b8);
      uStack_170 = puVar8[1];
      if ((0x46U >> (*(uint *)((longlong)puVar8 + 0xc) & 0x1f) & 1) == 0) {
        uStack_178 = *puVar8;
      }
      else {
        FUN_1400d2390(&uStack_178,puVar8);
      }
      FUN_140001c50(&uStack_178,1);
      iVar3 = FUN_1416d9df0(&uStack_178,&uStack_3b0,_DAT_1420f6b08,1);
      if ((0x46U >> (uStack_170._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_178);
      }
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    } while (iVar3 < 0);
    uStack_d0 = 0xe1;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    puStack_b8 = &uStack_f0;
    FUN_1416ab210(plStack_78,uStack_90,&uStack_88,1,CONCAT44(uVar4,_DAT_1420da370),&puStack_b8);
    uStack_d0 = 0xe3;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    gml_Script__SET_SCENE(plStack_78,uStack_90,&uStack_88,0,0);
    uVar14 = uStack_1d0;
  }
  if (lStack_1a8 == 0) {
    uStack_1d0._4_4_ = (uint)(uVar14 >> 0x20);
    uVar1 = uStack_1d0._4_4_;
  }
  else {
    uStack_1d0 = uVar14;
    func_0x000141695b90();
    uVar14 = uStack_1d0;
    uVar1 = uStack_1d0._4_4_;
  }
  uStack_1d0 = uVar14;
  lStack_1a8 = 0;
  if ((0x46U >> (uVar1 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_140._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1c8);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1e8);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1f8);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_188);
  }
  if ((0x46U >> (uStack_364 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_370);
  }
  if ((0x46U >> (uStack_294 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2a0);
  }
  if ((0x46U >> (uStack_344 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_350);
  }
  if ((0x46U >> (uStack_354 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_360);
  }
  if ((0x46U >> (uStack_254 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_260);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_238);
  }
  if ((0x46U >> (uStack_2b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2c0);
  }
  if ((0x46U >> (uStack_374 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_380);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_198);
  }
  if ((0x46U >> (uStack_32c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_338);
  }
  if ((0x46U >> (uStack_2a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2b0);
  }
  if ((0x46U >> (uStack_4c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4d0);
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
  if ((0x46U >> (uStack_3f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_400);
  }
  if ((0x46U >> (uStack_404 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_410);
  }
  if ((0x46U >> (uStack_414 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_420);
  }
  if ((0x46U >> (uStack_424 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_430);
  }
  if ((0x46U >> (uStack_434 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_440);
  }
  if ((0x46U >> (uStack_444 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_450);
  }
  if ((0x46U >> (uStack_454 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_460);
  }
  if ((0x46U >> (uStack_464 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_470);
  }
  if ((0x46U >> (uStack_474 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_480);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_4d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4e0);
  }
  if ((0x46U >> (uStack_4e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4f0);
  }
  if ((0x46U >> (uStack_4f4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_500);
  }
  if ((0x46U >> (uStack_504 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_510);
  }
  if ((0x46U >> (uStack_514 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_520);
  }
  if ((0x46U >> (uStack_524 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_530);
  }
  if ((0x46U >> (uStack_534 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_540);
  }
  if ((0x46U >> (uStack_544 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_550);
  }
  if ((0x46U >> (uStack_554 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_560);
  }
  if ((0x46U >> (uStack_564 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_570);
  }
  if ((0x46U >> (uStack_574 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_580);
  }
  if ((0x46U >> (uStack_584 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_590);
  }
  if ((0x46U >> (uStack_594 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5a0);
  }
  if ((0x46U >> (uStack_4b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4c0);
  }
  if ((0x46U >> (uStack_5a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5b0);
  }
  if ((0x46U >> (uStack_5b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5c0);
  }
  if ((0x46U >> (uStack_5c4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5d0);
  }
  if ((0x46U >> (uStack_5d4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_5e0);
  }
  if ((0x46U >> (uStack_484 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_490);
  }
  if ((0x46U >> (uStack_384 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_390);
  }
  if ((0x46U >> (uStack_264 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_270);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_128);
  }
  if ((0x46U >> (uStack_274 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_280);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_248);
  }
  if ((0x46U >> (uStack_3a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b0);
  }
  if ((0x46U >> (uStack_e4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f0);
  }
  if ((0x46U >> (uStack_3b4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3c0);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_494 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4a0);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_4a4 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b0);
  }
  if ((0x46U >> (uStack_31c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_328);
  }
  if ((0x46U >> (uStack_394 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3a0);
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
  _DAT_142182d78 = (undefined8 *)uStack_e0;
  return param_3;
}

