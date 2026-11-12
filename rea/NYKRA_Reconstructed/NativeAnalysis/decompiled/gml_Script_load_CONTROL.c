
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_CONTROL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong unaff_GS_OFFSET;
  double dVar9;
  uint in_stack_fffffffffffffac8;
  uint uVar10;
  ulonglong in_stack_fffffffffffffad0;
  undefined8 **ppuVar11;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  uint uStack_4fc;
  undefined8 uStack_4f8;
  uint uStack_4ec;
  undefined8 uStack_4e8;
  uint uStack_4dc;
  undefined8 uStack_4d8;
  uint uStack_4cc;
  undefined8 uStack_4c8;
  uint uStack_4bc;
  undefined8 uStack_4b8;
  uint uStack_4ac;
  undefined8 uStack_4a8;
  uint uStack_49c;
  undefined8 uStack_498;
  uint uStack_48c;
  undefined8 uStack_488;
  uint uStack_47c;
  undefined8 uStack_478;
  uint uStack_46c;
  undefined8 uStack_468;
  uint uStack_45c;
  undefined8 uStack_458;
  uint uStack_44c;
  undefined8 uStack_448;
  uint uStack_43c;
  undefined8 uStack_438;
  uint uStack_42c;
  undefined8 uStack_428;
  uint uStack_41c;
  undefined8 uStack_418;
  uint uStack_40c;
  undefined8 uStack_408;
  uint uStack_3fc;
  undefined8 uStack_3f8;
  uint uStack_3ec;
  undefined8 uStack_3e8;
  uint uStack_3dc;
  undefined8 uStack_3d8;
  uint uStack_3cc;
  undefined8 uStack_3c8;
  uint uStack_3bc;
  undefined8 uStack_3b8;
  uint uStack_3ac;
  undefined8 uStack_3a8;
  uint uStack_39c;
  undefined8 uStack_398;
  uint uStack_38c;
  undefined8 uStack_388;
  uint uStack_37c;
  undefined8 uStack_378;
  uint uStack_36c;
  undefined8 uStack_368;
  uint uStack_35c;
  undefined8 uStack_358;
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
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [12];
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
  uint uStack_220;
  uint uStack_21c;
  undefined8 uStack_218;
  uint uStack_210;
  uint uStack_20c;
  undefined8 uStack_208;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint uStack_1d0;
  uint uStack_1cc;
  double dStack_1c8;
  uint uStack_1bc;
  undefined8 uStack_1b8;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  uint uStack_19c;
  double dStack_198;
  uint uStack_18c;
  double dStack_188;
  uint uStack_17c;
  double dStack_178;
  uint uStack_16c;
  double dStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_150;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_e8 = &UNK_1419848ef;
  uStack_e0 = 0;
  uStack_f0 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_f0;
  uStack_2ac = 0xffffff;
  uStack_2b8 = 0;
  uStack_29c = 0xffffff;
  uStack_2a8 = 0;
  uStack_28c = 0xffffff;
  uStack_298 = 0;
  uStack_27c = 0xffffff;
  uStack_288 = 0;
  uStack_2fc = 0xffffff;
  uStack_308 = 0;
  uStack_2ec = 0xffffff;
  uStack_2f8 = 0;
  uStack_20c = 0xffffff;
  uStack_218 = 0;
  _DAT_142182d90 = param_1;
  uStack_90 = param_2;
  uStack_88 = param_1;
  uVar4 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_2dc = 0xffffff;
  uStack_2e8 = 0;
  uStack_3cc = 0xffffff;
  uStack_3d8 = 0;
  uStack_4fc = 0xffffff;
  uStack_508 = 0;
  uStack_4ec = 0xffffff;
  uStack_4f8 = 0;
  uStack_4dc = 0xffffff;
  uStack_4e8 = 0;
  uStack_4cc = 0xffffff;
  uStack_4d8 = 0;
  uStack_4bc = 0xffffff;
  uStack_4c8 = 0;
  uStack_4ac = 0xffffff;
  uStack_4b8 = 0;
  uStack_49c = 0xffffff;
  uStack_4a8 = 0;
  uStack_48c = 0xffffff;
  uStack_498 = 0;
  uStack_47c = 0xffffff;
  uStack_488 = 0;
  uStack_46c = 0xffffff;
  uStack_478 = 0;
  uStack_45c = 0xffffff;
  uStack_468 = 0;
  uStack_44c = 0xffffff;
  uStack_458 = 0;
  uStack_43c = 0xffffff;
  uStack_448 = 0;
  uStack_42c = 0xffffff;
  uStack_438 = 0;
  uStack_41c = 0xffffff;
  uStack_428 = 0;
  uStack_40c = 0xffffff;
  uStack_418 = 0;
  uStack_3fc = 0xffffff;
  uStack_408 = 0;
  uStack_3ec = 0xffffff;
  uStack_3f8 = 0;
  uStack_1ac = 0xffffff;
  uStack_1b8 = 0;
  uStack_3bc = 0xffffff;
  uStack_3c8 = 0;
  uStack_3ac = 0xffffff;
  uStack_3b8 = 0;
  uStack_39c = 0xffffff;
  uStack_3a8 = 0;
  uStack_38c = 0xffffff;
  uStack_398 = 0;
  uStack_37c = 0xffffff;
  uStack_388 = 0;
  uStack_36c = 0xffffff;
  uStack_378 = 0;
  uStack_35c = 0xffffff;
  uStack_368 = 0;
  uStack_34c = 0xffffff;
  uStack_358 = 0;
  uStack_33c = 0xffffff;
  uStack_348 = 0;
  uStack_32c = 0xffffff;
  uStack_338 = 0;
  uStack_31c = 0xffffff;
  uStack_328 = 0;
  uStack_30c = 0xffffff;
  uStack_318 = 0;
  uStack_3dc = 0xffffff;
  uStack_3e8 = 0;
  uStack_1ec = 0xffffff;
  uStack_1f8 = 0;
  uStack_21c = 0xffffff;
  uStack_228 = 0;
  uStack_19c = 0xffffff;
  uStack_1a8 = 0;
  uStack_26c = 0xffffff;
  uStack_278 = 0;
  uStack_1fc = 0xffffff;
  uStack_208 = 0;
  uStack_1bc = 0xffffff;
  dStack_1c8 = 0.0;
  uStack_1dc = 0xffffff;
  uStack_1e8 = 0;
  uStack_23c = 0xffffff;
  uStack_248 = 0;
  uStack_22c = 0xffffff;
  uStack_238 = 0;
  uStack_25c = 0xffffff;
  uStack_268 = 0;
  uStack_24c = 0xffffff;
  uStack_258 = 0;
  uStack_1cc = 0xffffff;
  uStack_1d8 = 0;
  uStack_18c = 0xffffff;
  dStack_198 = 0.0;
  uStack_16c = 0xffffff;
  dStack_178 = 0.0;
  uStack_17c = 0xffffff;
  dStack_188 = 0.0;
  uStack_15c = 0xffffff;
  dStack_168 = 0.0;
  uStack_78 = (ulonglong)(uint)uStack_78;
  uStack_80 = 0;
  uStack_130 = (ulonglong)(uint)uStack_130;
  uStack_138 = 0;
  uStack_2d0 = (ulonglong)(uint)uStack_2d0;
  uStack_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(_DAT_1420dd880);
  uStack_e0 = 2;
  if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_308);
  }
  FUN_1416ab000(&uStack_308,0x14217f820);
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  FUN_1416ab000(&uStack_2f8,0x1420b3980);
  uStack_e0 = 4;
  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  uStack_80 = 0;
  uStack_78 = 0x500000000;
  uStack_518 = 0;
  uStack_510 = 0;
  FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_518,in_stack_fffffffffffffac8 & 0xffffff00,
                in_stack_fffffffffffffad0 & 0xffffffffffffff00);
  FUN_1400019a0(&uStack_2b8,&uStack_518);
  puStack_b8 = &uStack_2b8;
  ppuVar11 = &puStack_b8;
  uVar10 = _DAT_1420da4b0;
  uVar5 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da4b0,ppuVar11);
  uStack_110 = (ulonglong)(uint)uStack_110;
  uStack_118 = 0xbff0000000000000;
  iVar2 = FUN_1416d9df0(uVar5,&uStack_118,_DAT_1420f6b08,1);
  if ((iVar2 == -2) || (0 < iVar2)) {
    uStack_e0 = 7;
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_80);
    }
    uStack_80 = 0;
    uStack_78 = 0x500000000;
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_138);
    }
    uStack_138 = 0;
    uStack_130 = 0x500000000;
    func_0x0001416ce870(uStack_88,_DAT_1420d59d8,0x80000000,&uStack_218);
    FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_518,uVar10 & 0xffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    FUN_1400019a0(&uStack_2b8,&uStack_518);
    puStack_b8 = &uStack_2b8;
    puVar6 = (undefined8 *)
             FUN_1416ab210(uStack_88,uStack_90,&uStack_138,1,_DAT_1420da4b0,&puStack_b8);
    uStack_110._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
    uStack_110._0_4_ = *(uint *)(puVar6 + 1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
      uStack_118 = *puVar6;
    }
    else {
      FUN_1401c29b0(&uStack_118,puVar6);
    }
    FUN_140001c50(&uStack_118,1);
    FUN_1400019a0(&uStack_2a8,&uStack_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    puStack_b0 = &uStack_2a8;
    FUN_1416ac010(&uStack_158,0x1420b39a5);
    uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da2b0,&puStack_b0);
    FUN_1416ac010(auStack_2c8,0x1420b39b0);
    uStack_13c = uStack_20c;
    uStack_140 = uStack_210;
    if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
      uStack_148 = uStack_218;
    }
    else {
      FUN_1401c29b0(&uStack_148,&uStack_218);
    }
    FUN_140003ca0(&uStack_148,auStack_2c8);
    uStack_11c = uStack_13c;
    uStack_120 = uStack_140;
    if ((0x46U >> (uStack_13c & 0x1f) & 1) == 0) {
      uStack_128 = uStack_148;
    }
    else {
      FUN_1401c29b0(&uStack_128,&uStack_148);
    }
    FUN_140003ca0(&uStack_128,uVar4);
    uStack_c0._4_4_ = uStack_11c;
    uStack_c0._0_4_ = uStack_120;
    if ((0x46U >> (uStack_11c & 0x1f) & 1) == 0) {
      uStack_c8 = uStack_128;
    }
    else {
      FUN_1401c29b0(&uStack_c8,&uStack_128);
    }
    FUN_140003ca0(&uStack_c8,&uStack_158);
    uStack_110._4_4_ = uStack_c0._4_4_;
    uStack_110._0_4_ = (uint)uStack_c0;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      uStack_118 = uStack_c8;
    }
    else {
      FUN_1401c29b0(&uStack_118,&uStack_c8);
    }
    FUN_140003ca0(&uStack_118,&uStack_2f8);
    FUN_1400019a0(&uStack_308,&uStack_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_128);
    }
    if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_2c8);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_158);
    }
  }
  else {
    uStack_e0 = 5;
    if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_138);
    }
    uStack_138 = 0;
    uStack_130 = 0x500000000;
    func_0x0001416ce870(uStack_88,_DAT_1420d59d8,0x80000000,&uStack_218);
    FUN_1400019a0(&uStack_2a8,uVar4);
    puStack_b0 = &uStack_2a8;
    FUN_1416ac010(&uStack_158,0x1420b39a5);
    uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_138,1,_DAT_1420da2b0,&puStack_b0);
    FUN_1416ac010(auStack_2c8,0x1420b3990);
    uStack_13c = uStack_20c;
    uStack_140 = uStack_210;
    if ((0x46U >> (uStack_20c & 0x1f) & 1) == 0) {
      uStack_148 = uStack_218;
    }
    else {
      FUN_1401c29b0(&uStack_148,&uStack_218);
    }
    FUN_140003ca0(&uStack_148,auStack_2c8);
    uStack_11c = uStack_13c;
    uStack_120 = uStack_140;
    if ((0x46U >> (uStack_13c & 0x1f) & 1) == 0) {
      uStack_128 = uStack_148;
    }
    else {
      FUN_1401c29b0(&uStack_128,&uStack_148);
    }
    FUN_140003ca0(&uStack_128,uVar4);
    uStack_c0._0_4_ = uStack_120;
    uStack_c0._4_4_ = uStack_11c;
    if ((0x46U >> (uStack_11c & 0x1f) & 1) == 0) {
      uStack_c8 = uStack_128;
    }
    else {
      FUN_1401c29b0(&uStack_c8,&uStack_128);
    }
    FUN_140003ca0(&uStack_c8,&uStack_158);
    uStack_110._0_4_ = (uint)uStack_c0;
    uStack_110._4_4_ = uStack_c0._4_4_;
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) == 0) {
      uStack_118 = uStack_c8;
    }
    else {
      FUN_1401c29b0(&uStack_118,&uStack_c8);
    }
    FUN_140003ca0(&uStack_118,&uStack_2f8);
    FUN_1400019a0(&uStack_308,&uStack_118);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_c8);
    }
    if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_128);
    }
    if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_148);
    }
    if ((0x46U >> (uStack_2bc & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_2c8);
    }
    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_158);
    }
  }
  uStack_e0 = 10;
  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  uStack_80 = 0;
  uStack_78 = 0x500000000;
  puStack_b8 = &uStack_308;
  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da3d0,&puStack_b8);
  FUN_1400019a0(&uStack_d8,uVar4);
  uStack_110._4_4_ = 0;
  uStack_118 = 0xbff0000000000000;
  iVar2 = FUN_1416d9df0(&uStack_d8,&uStack_118,_DAT_1420f6b08,0);
  if (iVar2 == 0) {
    uStack_e0 = 0xb;
  }
  else {
    uStack_e0 = 0xc;
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_80);
    }
    uStack_80 = 0;
    uStack_78 = 0x500000000;
    puStack_b8 = &uStack_d8;
    FUN_140002730(&uStack_2a8,0x1420b39d0);
    puStack_b0 = &uStack_2a8;
    FUN_140002730(&uStack_298,0x14217f828);
    puStack_a8 = &uStack_298;
    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,_DAT_1420da650,&puStack_b8);
    uStack_e0 = 0xd;
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_80);
    }
    uStack_80 = 0;
    uStack_78 = 0x500000000;
    puStack_b8 = &uStack_d8;
    uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da470,&puStack_b8);
    FUN_1400019a0(&uStack_2e8,uVar4);
    uStack_e0 = 0xe;
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_80);
    }
    uStack_80 = 0;
    uStack_78 = 0x500000000;
    puStack_b8 = &uStack_d8;
    FUN_140002730(&uStack_2a8,0x14217f828);
    puStack_b0 = &uStack_2a8;
    FUN_140002730(&uStack_298,0x14217f828);
    puStack_a8 = &uStack_298;
    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,_DAT_1420da650,&puStack_b8);
    uStack_e0 = 0x12;
    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_80);
    }
    uStack_80 = 0;
    uStack_78 = 0x500000000;
    puStack_b8 = &uStack_d8;
    puVar6 = (undefined8 *)
             FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da470,&puStack_b8);
    uStack_110._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
    uStack_110._0_4_ = *(uint *)(puVar6 + 1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
      uStack_118 = *puVar6;
    }
    else {
      FUN_1401c29b0(&uStack_118,puVar6);
    }
    FUN_140001c50(&uStack_118,1);
    iVar2 = FUN_1416d9df0(&uStack_118,&uStack_2e8,_DAT_1420f6b08,1);
    if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_118);
    }
    if (iVar2 < 0) {
      uStack_e0 = 0x16;
      if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_80);
      }
      uStack_80 = 0;
      uStack_78 = 0x500000000;
      if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_138);
      }
      uStack_138 = 0;
      uStack_130 = 0x500000000;
      puStack_b8 = &uStack_d8;
      FUN_140002730(&uStack_2a8,0x1420b39e0);
      puStack_b0 = &uStack_2a8;
      uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_138,2,_DAT_1420da3e0,&puStack_b8);
      FUN_1400019a0(&uStack_298,uVar4);
      puStack_a8 = &uStack_298;
      uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da460,&puStack_a8);
      FUN_1400019a0(&uStack_3d8,uVar4);
      uVar4 = _DAT_1420f6b08;
      uStack_110._4_4_ = 0;
      uStack_118 = 0xbff0000000000000;
      iVar2 = FUN_1416d9df0(&uStack_3d8,&uStack_118,_DAT_1420f6b08,0);
      if (iVar2 != 0) {
        uStack_110._4_4_ = 0;
        uStack_118 = 0xbff0000000000000;
        iVar2 = FUN_1416d9df0(&uStack_3d8,&uStack_118,uVar4,1);
        if (0 < iVar2) {
          uStack_e0 = 0x19;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          FUN_140002730(&uStack_2a8,0x1420b39f0);
          puStack_b0 = &uStack_2a8;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
          FUN_1400019a0(&uStack_508,uVar4);
          uStack_e0 = 0x1a;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          FUN_140002730(&uStack_2a8,0x1420b39f0);
          puStack_b0 = &uStack_2a8;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
          FUN_1400019a0(&uStack_4f8,uVar4);
          uStack_e0 = 0x1b;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          FUN_140002730(&uStack_2a8,0x1420b39f0);
          puStack_b0 = &uStack_2a8;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
          FUN_1400019a0(&uStack_4e8,uVar4);
          uStack_e0 = 0x1c;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          FUN_140002730(&uStack_2a8,0x1420b39f0);
          puStack_b0 = &uStack_2a8;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
          FUN_1400019a0(&uStack_4d8,uVar4);
          uStack_e0 = 0x1d;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          FUN_140002730(&uStack_2a8,0x1420b3a00);
          puStack_b0 = &uStack_2a8;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
          FUN_1400019a0(&uStack_4c8,uVar4);
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          puStack_b8 = &uStack_d8;
          puVar6 = (undefined8 *)
                   FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da470,&puStack_b8);
          uStack_110._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
          uStack_110._0_4_ = *(uint *)(puVar6 + 1);
          if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
            uStack_118 = *puVar6;
          }
          else {
            FUN_1401c29b0(&uStack_118,puVar6);
          }
          FUN_140001c50(&uStack_118,1);
          iVar2 = FUN_1416d9df0(&uStack_118,&uStack_2e8,_DAT_1420f6b08,1);
          if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_118);
          }
          if (-1 < iVar2) {
            uStack_e0 = 0x1f;
            goto joined_r0x0001401bb22e;
          }
          uStack_c0._4_4_ = 0;
          uStack_c8 = 0x4053c00000000000;
          iVar2 = FUN_1416ab810(&uStack_118,&uStack_88,&uStack_90,&uStack_c8);
          if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_c8);
          }
          if (0 < iVar2) {
            do {
              uStack_e0 = 0x23;
              FUN_1400019a0(&uStack_4b8,&uStack_4e8);
              FUN_1416cfae0(uStack_88,_DAT_1420d58e8,0x80000000,&uStack_4b8);
              uStack_e0 = 0x24;
              FUN_1400019a0(&uStack_4a8,&uStack_4d8);
              FUN_1416cfae0(uStack_88,_DAT_1420d58f8,0x80000000,&uStack_4a8);
              uStack_e0 = 0x25;
              FUN_1400019a0(&uStack_498,&uStack_4c8);
              FUN_1416cfae0(uStack_88,_DAT_1420d5a18,0x80000000,&uStack_498);
              uStack_e0 = 0x26;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_488,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5a98,0x80000000,&uStack_488);
              uStack_e0 = 0x27;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_478,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5aa8,0x80000000,&uStack_478);
              uStack_e0 = 0x28;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_468,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5ab8,0x80000000,&uStack_468);
              uStack_e0 = 0x29;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_458,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5ac8,0x80000000,&uStack_458);
              uStack_e0 = 0x2a;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_448,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5ad8,0x80000000,&uStack_448);
              uStack_e0 = 0x2b;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_438,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5ae8,0x80000000,&uStack_438);
              uStack_e0 = 0x2c;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a00);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_428,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5af8,0x80000000,&uStack_428);
              uStack_e0 = 0x2d;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b39f0);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_418,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5b08,0x80000000,&uStack_418);
              uStack_e0 = 0x2e;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a10);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_408,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5b18,0x80000000,&uStack_408);
              uStack_e0 = 0x2f;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_138);
              }
              uStack_138 = 0;
              uStack_130 = 0x500000000;
              if ((0x46U >> (uStack_2d0._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_2d8);
              }
              uStack_2d8 = 0;
              uStack_2d0 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a10);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_2d8,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_298,uVar4);
              puStack_a8 = &uStack_298;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_138,1,_DAT_1420da230,&puStack_a8);
              FUN_1400019a0(&uStack_288,uVar4);
              apuStack_a0[0] = &uStack_288;
              ppuVar11 = apuStack_a0;
              uVar10 = _DAT_1420da620;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da620,ppuVar11);
              FUN_1400019a0(&uStack_3f8,uVar4);
              FUN_1416cfae0(uStack_88,_DAT_1420d5b28,0x80000000,&uStack_3f8);
              uStack_e0 = 0x31;
              if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_1b8);
              }
              uStack_1ac = 0;
              uStack_1b8 = 0;
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,0,&uStack_3c8,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = (ulonglong)(uint)uStack_c0;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_3c8,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x32;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_3c8,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,0,&uStack_3c8);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,1,&uStack_3b8,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_3b8,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x33;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_3b8,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,1,&uStack_3b8);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,2,&uStack_3a8,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_3a8,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x34;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_3a8,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,2,&uStack_3a8);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,3,&uStack_398,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_398,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x35;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_398,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,3,&uStack_398);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,4,&uStack_388,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_388,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x36;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_388,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,4,&uStack_388);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,5,&uStack_378,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_378,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x37;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_378,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,5,&uStack_378);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,6,&uStack_368,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_368,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x38;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_368,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,6,&uStack_368);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,7,&uStack_358,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_358,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x39;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_358,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,7,&uStack_358);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,8,&uStack_348,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_348,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x3a;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_348,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,8,&uStack_348);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,9,&uStack_338,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_338,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x3b;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_338,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,9,&uStack_338);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,10,&uStack_328,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0 = uStack_c0 & 0xffffffff;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_328,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x3c;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_328,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,10,&uStack_328);
              }
              FUN_1416cea80(uStack_88,_DAT_1420d5a48,0xb,&uStack_318,uVar10 & 0xffffff00,
                            (ulonglong)ppuVar11 & 0xffffffffffffff00);
              uStack_c0._4_4_ = 0;
              uStack_c8 = 0xbff0000000000000;
              iVar2 = FUN_1416d9df0(&uStack_318,&uStack_c8,_DAT_1420f6b08,1);
              if ((iVar2 == -2) || (0 < iVar2)) {
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
                FUN_1400019a0(&uStack_1b8,uVar4);
              }
              else {
                uStack_e0 = 0x3d;
                _DAT_142182d90 = 0xc309fa;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a00);
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
                FUN_1400019a0(&uStack_318,uVar4);
                FUN_1416cfae0(uStack_88,_DAT_1420d5a48,0xb,&uStack_318);
              }
              uStack_e0 = 0x3f;
              if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_80);
              }
              uStack_80 = 0;
              uStack_78 = 0x500000000;
              puStack_b8 = &uStack_d8;
              FUN_140002730(&uStack_2a8,0x1420b3a20);
              puStack_b0 = &uStack_2a8;
              uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
              FUN_1400019a0(&uStack_3e8,uVar4);
              if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_1f8);
              }
              uStack_1ec = 0;
              uStack_1f8 = 0;
              if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_228);
              }
              uStack_21c = 0;
              uStack_228 = 0;
              if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_1a8);
              }
              uStack_19c = 0;
              uStack_1a8 = 0;
              if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_278);
              }
              uStack_26c = 0;
              uStack_278 = 0;
              if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
                FUN_140001b50(&uStack_208);
              }
              uStack_1fc = 0;
              uStack_208 = 0x3ff0000000000000;
              uStack_e0 = 0x41;
              if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
                FUN_140001b50(&dStack_1c8);
              }
              uStack_1bc = 0;
              dStack_1c8 = 0.0;
              while ((iVar2 = FUN_1416d9df0(&dStack_1c8,&uStack_3e8,_DAT_1420f6b08,1), iVar2 != -2
                     && (iVar2 < 0))) {
                uStack_e0 = 0x43;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b39e0);
                ppuVar11 = &puStack_b8;
                uVar10 = _DAT_1420da3e0;
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                FUN_1400019a0(&uStack_1f8,uVar4);
                uStack_e0 = 0x45;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,uVar10 & 0xffffff00,
                              (ulonglong)ppuVar11 & 0xffffffffffffff00);
                FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                puStack_b8 = &uStack_2b8;
                puStack_b0 = &uStack_1f8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da350,&puStack_b8);
                FUN_1400019a0(&uStack_208,uVar4);
                uStack_e0 = 0x47;
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                FUN_140002730(&uStack_2a8,0x1420b3a30);
                puStack_b0 = &uStack_2a8;
                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,&puStack_b8);
                FUN_1400019a0(&uStack_228,uVar4);
                uStack_e0 = 0x49;
                uStack_c0._4_4_ = uStack_21c;
                uStack_c0._0_4_ = uStack_220;
                if ((0x46U >> (uStack_21c & 0x1f) & 1) == 0) {
                  uStack_c8 = uStack_228;
                }
                else {
                  FUN_1401c29b0(&uStack_c8,&uStack_228);
                }
                if ((*(int *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 4) < _DAT_14217f8a4) &&
                   (FUN_14193dcf0(&DAT_14217f8a4), _DAT_14217f8a4 == -1)) {
                  _DAT_14217f84c = 0;
                  _DAT_14217f840 = 0x3ff0000000000000;
                  _DAT_14217f860 = 0x100000000;
                  _DAT_14217f854 = 0x4000000000000000;
                  _DAT_14217f874 = 0x200000000;
                  _DAT_14217f868 = 0x4008000000000000;
                  _DAT_14217f888 = 0x300000000;
                  _DAT_14217f87c = 0x4010000000000000;
                  _DAT_14217f89c = 0x400000000;
                  _DAT_14217f890 = 0x4014000000000000;
                  FUN_14193e038(FUN_1401c2630);
                  FUN_14193dc90(&DAT_14217f8a4);
                }
                uVar4 = _DAT_1420f6b08;
                iVar2 = FUN_1416d9df0(&DAT_14217f840,&uStack_c8,_DAT_1420f6b08,0);
                if (iVar2 != 0) {
                  iVar2 = FUN_1416d9df0(&DAT_14217f854,&uStack_c8,uVar4,0);
                  if (iVar2 == 0) {
                    lVar7 = 1;
                    goto LAB_1401bd7c0;
                  }
                  iVar2 = FUN_1416d9df0(&DAT_14217f868,&uStack_c8,uVar4,0);
                  if (iVar2 == 0) {
                    lVar7 = 2;
                    goto LAB_1401bd7c0;
                  }
                  iVar2 = FUN_1416d9df0(&DAT_14217f87c,&uStack_c8,uVar4,0);
                  if (iVar2 == 0) {
                    lVar7 = 3;
                    goto LAB_1401bd7c0;
                  }
                  iVar2 = FUN_1416d9df0(&DAT_14217f890,&uStack_c8,uVar4,0);
                  uVar3 = 0x90;
                  if (iVar2 == 0) {
                    lVar7 = 4;
                    goto LAB_1401bd7c0;
                  }
                  goto LAB_1401beee0;
                }
                lVar7 = 0;
LAB_1401bd7c0:
                switch(*(undefined4 *)(lVar7 * 0x14 + 0x14217f850)) {
                case 0:
                  uStack_e0 = 0x4b;
                  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_80);
                  }
                  uStack_80 = 0;
                  uStack_78 = 0x500000000;
                  puStack_b8 = &uStack_d8;
                  FUN_140002730(&uStack_2a8,0x1420b39f0);
                  ppuVar11 = &puStack_b8;
                  uVar10 = _DAT_1420da3e0;
                  puStack_b0 = &uStack_2a8;
                  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                  FUN_1400019a0(&uStack_1a8,uVar4);
                  cVar1 = FUN_1416927d0(&uStack_208);
                  uVar3 = 0x4d;
                  if (cVar1 != '\0') {
                    uStack_e0 = 0x4c;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,
                                  uVar10 & 0xffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
                    FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                    puStack_b8 = &uStack_2b8;
                    puStack_b0 = &uStack_1f8;
                    puStack_a8 = &uStack_1a8;
                    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,uRam00000001420da680,&puStack_b8)
                    ;
                  }
                  break;
                case 1:
                  uStack_e0 = 0x50;
                  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_80);
                  }
                  uStack_80 = 0;
                  uStack_78 = 0x500000000;
                  puStack_b8 = &uStack_d8;
                  FUN_140002730(&uStack_2a8,0x1420b39e0);
                  ppuVar11 = &puStack_b8;
                  uVar10 = _DAT_1420da3e0;
                  puStack_b0 = &uStack_2a8;
                  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                  FUN_1400019a0(&uStack_1a8,uVar4);
                  cVar1 = FUN_1416927d0(&uStack_208);
                  uVar3 = 0x52;
                  if (cVar1 != '\0') {
                    uStack_e0 = 0x51;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,
                                  uVar10 & 0xffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
                    FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                    puStack_b8 = &uStack_2b8;
                    puStack_b0 = &uStack_1f8;
                    puStack_a8 = &uStack_1a8;
                    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,uRam00000001420da680,&puStack_b8)
                    ;
                  }
                  break;
                case 2:
                  uStack_e0 = 0x55;
                  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_248);
                  }
                  uStack_23c = 0;
                  uStack_248 = 0;
                  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_238);
                  }
                  uStack_22c = 0;
                  uStack_238 = 0;
                  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_268);
                  }
                  uStack_25c = 0;
                  uStack_268 = 0;
                  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_258);
                  }
                  uStack_24c = 0;
                  uStack_258 = 0;
                  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_1d8);
                  }
                  uStack_1cc = 0;
                  uStack_1d8 = 0;
                  uStack_e0 = 0x56;
                  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_80);
                  }
                  uStack_80 = 0;
                  uStack_78 = 0x500000000;
                  puStack_b8 = &uStack_d8;
                  FUN_140002730(&uStack_2a8,0x1420b3a20);
                  ppuVar11 = &puStack_b8;
                  uVar10 = _DAT_1420da3e0;
                  puStack_b0 = &uStack_2a8;
                  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                  FUN_1400019a0(&uStack_268,uVar4);
                  uStack_e0 = 0x58;
                  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_198);
                  }
                  uStack_18c = 0;
                  dStack_198 = 0.0;
                  while ((iVar2 = FUN_1416d9df0(&dStack_198,&uStack_268,_DAT_1420f6b08,1),
                         iVar2 != -2 && (iVar2 < 0))) {
                    uStack_e0 = 0x59;
                    _DAT_142182d90 = 0xc48866;
                    uVar3 = FUN_141693b30(&dStack_198);
                    puVar6 = (undefined8 *)FUN_1416924a0(&uStack_248,uVar3);
                    FUN_1416a8cb0(uStack_248);
                    if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                      FUN_140001b50(puVar6);
                    }
                    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
                    *puVar6 = 0;
                    func_0x0001416a8c00(1);
                    switch(uStack_18c & 0xffffff) {
                    case 1:
                      dStack_198 = (double)FUN_1416940c0(&dStack_198);
                      dStack_198 = dStack_198 + 1.0;
                      uStack_18c = 0;
                      break;
                    default:
                      FUN_140001d70(&UNK_141981e6a,&dStack_198,&dStack_198);
                      break;
                    case 7:
                      dStack_198 = (double)CONCAT44(dStack_198._4_4_,dStack_198._0_4_ + 1);
                      break;
                    case 10:
                      dStack_198 = (double)((longlong)dStack_198 + 1);
                      break;
                    case 0xd:
                      uStack_18c = 0;
                    case 0:
                      dStack_198 = dStack_198 + 1.0;
                    }
                  }
                  uStack_e0 = 0x5c;
                  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
                    FUN_140001b50(&dStack_178);
                  }
                  uStack_16c = 0;
                  dStack_178 = 0.0;
                  while ((iVar2 = FUN_1416d9df0(&dStack_178,&uStack_268,_DAT_1420f6b08,1),
                         iVar2 != -2 && (iVar2 < 0))) {
                    uStack_e0 = 0x5d;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    puStack_b8 = &uStack_d8;
                    FUN_140002730(&uStack_2a8,0x1420b3a30);
                    ppuVar11 = &puStack_b8;
                    uVar10 = _DAT_1420da3e0;
                    puStack_b0 = &uStack_2a8;
                    uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                    FUN_1400019a0(&uStack_1d8,uVar4);
                    uStack_e0 = 0x5e;
                    uStack_14c = uStack_1cc;
                    uStack_150 = uStack_1d0;
                    if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
                      uStack_158 = uStack_1d8;
                    }
                    else {
                      FUN_1401c29b0(&uStack_158,&uStack_1d8);
                    }
                    if ((*(int *)(*(longlong *)
                                   (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                   (ulonglong)__tls_index * 8) + 4) < iRam000000014217f8ec) &&
                       (FUN_14193dcf0(0x14217f8ec), iRam000000014217f8ec == -1)) {
                      uRam000000014217f8bc = 0;
                      uRam000000014217f8b0 = 0x3ff0000000000000;
                      uRam000000014217f8d0 = 0x100000000;
                      uRam000000014217f8c4 = 0x4008000000000000;
                      uRam000000014217f8e4 = 0x200000000;
                      uRam000000014217f8d8 = 0x4010000000000000;
                      FUN_14193e038(FUN_1401c2710);
                      FUN_14193dc90(0x14217f8ec);
                    }
                    uVar4 = _DAT_1420f6b08;
                    iVar2 = FUN_1416d9df0(0x14217f8b0,&uStack_158,_DAT_1420f6b08,0);
                    if (iVar2 == 0) {
                      lVar7 = 0;
code_r0x0001401be365:
                      iVar2 = *(int *)(lVar7 * 0x14 + 0x14217f8c0);
                      if (iVar2 == 2) {
                        uStack_e0 = 0x7c;
                        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_80);
                        }
                        uStack_80 = 0;
                        uStack_78 = 0x500000000;
                        puStack_b8 = &uStack_d8;
                        FUN_140002730(&uStack_2a8,0x1420b3a40);
                        ppuVar11 = &puStack_b8;
                        uVar10 = _DAT_1420da3e0;
                        puStack_b0 = &uStack_2a8;
                        uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,
                                              ppuVar11);
                        FUN_1400019a0(&uStack_1a8,uVar4);
                      }
                      else {
                        if (iVar2 != 1) {
                          if (iVar2 == 0) {
                            uStack_e0 = 0x60;
                            if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_80);
                            }
                            uStack_80 = 0;
                            uStack_78 = 0x500000000;
                            puStack_b8 = &uStack_d8;
                            FUN_140002730(&uStack_2a8,0x1420b39f0);
                            ppuVar11 = &puStack_b8;
                            uVar10 = _DAT_1420da3e0;
                            puStack_b0 = &uStack_2a8;
                            uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,
                                                  ppuVar11);
                            FUN_1400019a0(&uStack_1a8,uVar4);
                          }
                          goto code_r0x0001401be440;
                        }
                        uStack_e0 = 100;
                        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                          FUN_140001b50(&uStack_80);
                        }
                        uStack_80 = 0;
                        uStack_78 = 0x500000000;
                        puStack_b8 = &uStack_d8;
                        FUN_140002730(&uStack_2a8,0x1420b3a20);
                        ppuVar11 = &puStack_b8;
                        uVar10 = _DAT_1420da3e0;
                        puStack_b0 = &uStack_2a8;
                        uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,
                                              ppuVar11);
                        FUN_1400019a0(&uStack_258,uVar4);
                        uStack_e0 = 0x65;
                        if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_188);
                        }
                        uStack_17c = 0;
                        dStack_188 = 0.0;
                        while ((iVar2 = FUN_1416d9df0(&dStack_188,&uStack_258,_DAT_1420f6b08,1),
                               iVar2 != -2 && (iVar2 < 0))) {
                          uStack_e0 = 0x66;
                          _DAT_142182d90 = 0xc48867;
                          uVar3 = FUN_141693b30(&dStack_188);
                          puVar6 = (undefined8 *)FUN_1416924a0(&uStack_238,uVar3);
                          FUN_1416a8cb0(uStack_238);
                          if ((0x46U >> (*(uint *)((longlong)puVar6 + 0xc) & 0x1f) & 1) != 0) {
                            FUN_140001b50(puVar6);
                          }
                          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
                          *puVar6 = 0;
                          func_0x0001416a8c00(1);
                          switch(uStack_17c & 0xffffff) {
                          case 1:
                            dStack_188 = (double)FUN_1416940c0(&dStack_188);
                            dStack_188 = dStack_188 + 1.0;
                            uStack_17c = 0;
                            break;
                          default:
                            FUN_140001d70(&UNK_141981e6a,&dStack_188,&dStack_188);
                            break;
                          case 7:
                            dStack_188 = (double)CONCAT44(dStack_188._4_4_,dStack_188._0_4_ + 1);
                            break;
                          case 10:
                            dStack_188 = (double)((longlong)dStack_188 + 1);
                            break;
                          case 0xd:
                            uStack_17c = 0;
                          case 0:
                            dStack_188 = dStack_188 + 1.0;
                          }
                        }
                        uStack_e0 = 0x69;
                        if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
                          FUN_140001b50(&dStack_168);
                        }
                        uStack_15c = 0;
                        dStack_168 = 0.0;
                        while ((iVar2 = FUN_1416d9df0(&dStack_168,&uStack_258,_DAT_1420f6b08,1),
                               iVar2 != -2 && (iVar2 < 0))) {
                          uStack_e0 = 0x6a;
                          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_80);
                          }
                          uStack_80 = 0;
                          uStack_78 = 0x500000000;
                          puStack_b8 = &uStack_d8;
                          FUN_140002730(&uStack_2a8,0x1420b3a30);
                          ppuVar11 = &puStack_b8;
                          uVar10 = _DAT_1420da3e0;
                          puStack_b0 = &uStack_2a8;
                          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,
                                                ppuVar11);
                          FUN_1400019a0(&uStack_1d8,uVar4);
                          uStack_e0 = 0x6b;
                          uStack_11c = uStack_1cc;
                          uStack_120 = uStack_1d0;
                          if ((0x46U >> (uStack_1cc & 0x1f) & 1) == 0) {
                            uStack_128 = uStack_1d8;
                          }
                          else {
                            FUN_1401c29b0(&uStack_128,&uStack_1d8);
                          }
                          if ((*(int *)(*(longlong *)
                                         (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                         (ulonglong)__tls_index * 8) + 4) < iRam000000014217f918) &&
                             (FUN_14193dcf0(0x14217f918), iRam000000014217f918 == -1)) {
                            uRam000000014217f8fc = 0;
                            uRam000000014217f8f0 = 0x3ff0000000000000;
                            uRam000000014217f910 = 0x100000000;
                            uRam000000014217f904 = 0x4010000000000000;
                            FUN_14193e038(FUN_1401c27c0);
                            FUN_14193dc90(0x14217f918);
                          }
                          uVar4 = _DAT_1420f6b08;
                          iVar2 = FUN_1416d9df0(0x14217f8f0,&uStack_128,_DAT_1420f6b08,0);
                          if (iVar2 == 0) {
                            lVar7 = 0;
code_r0x0001401be9c2:
                            iVar2 = *(int *)(lVar7 * 0x14 + 0x14217f900);
                            if (iVar2 != 1) {
                              if (iVar2 == 0) {
                                uStack_e0 = 0x6d;
                                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                                  FUN_140001b50(&uStack_80);
                                }
                                uStack_80 = 0;
                                uStack_78 = 0x500000000;
                                puStack_b8 = &uStack_d8;
                                FUN_140002730(&uStack_2a8,0x1420b39f0);
                                ppuVar11 = &puStack_b8;
                                uVar10 = _DAT_1420da3e0;
                                puStack_b0 = &uStack_2a8;
                                uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,
                                                      _DAT_1420da3e0,ppuVar11);
                                FUN_1400019a0(&uStack_278,uVar4);
                              }
                              goto code_r0x0001401bea8b;
                            }
                            uStack_e0 = 0x71;
                            if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                              FUN_140001b50(&uStack_80);
                            }
                            uStack_80 = 0;
                            uStack_78 = 0x500000000;
                            puStack_b8 = &uStack_d8;
                            FUN_140002730(&uStack_2a8,0x1420b3a40);
                            ppuVar11 = &puStack_b8;
                            uVar10 = _DAT_1420da3e0;
                            puStack_b0 = &uStack_2a8;
                            uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,
                                                  ppuVar11);
                            FUN_1400019a0(&uStack_278,uVar4);
                            if ((uStack_15c & 0xffffff) == 0) goto code_r0x0001401beb8f;
code_r0x0001401beab0:
                            uStack_e0 = 0x75;
                            _DAT_142182d90 = 0xc30000;
                            dVar9 = (double)FUN_1416940c0(&dStack_168);
                          }
                          else {
                            iVar2 = FUN_1416d9df0(0x14217f904,&uStack_128,uVar4,0);
                            if (iVar2 == 0) {
                              lVar7 = 1;
                              goto code_r0x0001401be9c2;
                            }
code_r0x0001401bea8b:
                            if ((uStack_15c & 0xffffff) != 0) goto code_r0x0001401beab0;
code_r0x0001401beb8f:
                            uStack_e0 = 0x75;
                            _DAT_142182d90 = 0xc30000;
                            dVar9 = dStack_168;
                          }
                          FUN_1416cd4e0(&uStack_238,(longlong)dVar9,&uStack_278);
                          if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
                            FUN_140001b50(&uStack_128);
                          }
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
                        uStack_e0 = 0x78;
                        FUN_1400019a0(&uStack_1a8,&uStack_238);
                      }
                      if ((uStack_16c & 0xffffff) == 0) goto code_r0x0001401be760;
code_r0x0001401be465:
                      uStack_e0 = 0x80;
                      _DAT_142182d90 = 0xc30000;
                      dVar9 = (double)FUN_1416940c0(&dStack_178);
                    }
                    else {
                      iVar2 = FUN_1416d9df0(0x14217f8c4,&uStack_158,uVar4,0);
                      if (iVar2 == 0) {
                        lVar7 = 1;
                        goto code_r0x0001401be365;
                      }
                      iVar2 = FUN_1416d9df0(0x14217f8d8,&uStack_158,uVar4,0);
                      if (iVar2 == 0) {
                        lVar7 = 2;
                        goto code_r0x0001401be365;
                      }
code_r0x0001401be440:
                      if ((uStack_16c & 0xffffff) != 0) goto code_r0x0001401be465;
code_r0x0001401be760:
                      uStack_e0 = 0x80;
                      _DAT_142182d90 = 0xc30000;
                      dVar9 = dStack_178;
                    }
                    FUN_1416cd4e0(&uStack_248,(longlong)dVar9,&uStack_1a8);
                    if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_158);
                    }
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
                  cVar1 = FUN_1416927d0(&uStack_208);
                  uVar3 = 0x84;
                  if (cVar1 != '\0') {
                    uStack_e0 = 0x83;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,
                                  uVar10 & 0xffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
                    FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                    puStack_b8 = &uStack_2b8;
                    puStack_b0 = &uStack_1f8;
                    puStack_a8 = &uStack_248;
                    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,uRam00000001420da680,&puStack_b8)
                    ;
                  }
                  break;
                case 3:
                  uStack_e0 = 0x87;
                  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_80);
                  }
                  uStack_80 = 0;
                  uStack_78 = 0x500000000;
                  puStack_b8 = &uStack_d8;
                  FUN_140002730(&uStack_2a8,0x1420b3a40);
                  ppuVar11 = &puStack_b8;
                  uVar10 = _DAT_1420da3e0;
                  puStack_b0 = &uStack_2a8;
                  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                  FUN_1400019a0(&uStack_1a8,uVar4);
                  cVar1 = FUN_1416927d0(&uStack_208);
                  uVar3 = 0x89;
                  if (cVar1 != '\0') {
                    uStack_e0 = 0x88;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,
                                  uVar10 & 0xffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
                    FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                    puStack_b8 = &uStack_2b8;
                    puStack_b0 = &uStack_1f8;
                    puStack_a8 = &uStack_1a8;
                    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,uRam00000001420da680,&puStack_b8)
                    ;
                  }
                  break;
                case 4:
                  uStack_e0 = 0x8c;
                  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                    FUN_140001b50(&uStack_80);
                  }
                  uStack_80 = 0;
                  uStack_78 = 0x500000000;
                  puStack_b8 = &uStack_d8;
                  FUN_140002730(&uStack_2a8,0x1420b3a50);
                  ppuVar11 = &puStack_b8;
                  uVar10 = _DAT_1420da3e0;
                  puStack_b0 = &uStack_2a8;
                  uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da3e0,ppuVar11);
                  FUN_1400019a0(&uStack_1a8,uVar4);
                  cVar1 = FUN_1416927d0(&uStack_208);
                  uVar3 = 0x8e;
                  if (cVar1 != '\0') {
                    uStack_e0 = 0x8d;
                    if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                      FUN_140001b50(&uStack_80);
                    }
                    uStack_80 = 0;
                    uStack_78 = 0x500000000;
                    FUN_1416cea80(uStack_88,_DAT_1420d59e8,0x80000000,&uStack_1e8,
                                  uVar10 & 0xffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00);
                    FUN_1400019a0(&uStack_2b8,&uStack_1e8);
                    puStack_b8 = &uStack_2b8;
                    puStack_b0 = &uStack_1f8;
                    puStack_a8 = &uStack_1a8;
                    FUN_1416ab210(uStack_88,uStack_90,&uStack_80,3,uRam00000001420da680,&puStack_b8)
                    ;
                  }
                  break;
                default:
                  uStack_e0 = 0x90;
                  goto joined_r0x0001401bdfb0;
                }
LAB_1401beee0:
                uStack_e0 = uVar3;
joined_r0x0001401bdfb0:
                if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_80);
                }
                uStack_80 = 0;
                uStack_78 = 0x500000000;
                puStack_b8 = &uStack_d8;
                puVar6 = (undefined8 *)
                         FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da470,&puStack_b8);
                uStack_14c = *(uint *)((longlong)puVar6 + 0xc);
                uStack_150 = *(uint *)(puVar6 + 1);
                if ((0x46U >> (uStack_14c & 0x1f) & 1) == 0) {
                  uStack_158 = *puVar6;
                }
                else {
                  FUN_1401c29b0(&uStack_158,puVar6);
                }
                FUN_140001c50(&uStack_158,1);
                iVar2 = FUN_1416d9df0(&uStack_158,&uStack_2e8,_DAT_1420f6b08,1);
                if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_158);
                }
                if (iVar2 < 0) {
                  iVar8 = 0;
                  iVar2 = 0;
                }
                else {
                  uStack_e0 = 0x93;
                  iVar8 = 0x71;
                  iVar2 = 0x71;
                }
                if ((0x46U >> (uStack_c0._4_4_ & 0x1f) & 1) != 0) {
                  FUN_140001b50(&uStack_c8);
                  iVar2 = iVar8;
                }
                if (iVar2 != 0) break;
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
              cVar1 = func_0x0001416abe60(&uStack_118,&uStack_88,&uStack_90);
            } while (cVar1 != '\0');
          }
          FUN_1416ab620(&uStack_118,&uStack_88,&uStack_90);
          if (lStack_108 != 0) {
            func_0x000141695b90();
            lStack_108 = 0;
          }
        }
      }
      if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_80);
      }
      uStack_80 = 0;
      uStack_78 = 0x500000000;
      puStack_b8 = &uStack_d8;
      puVar6 = (undefined8 *)
               FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da470,&puStack_b8);
      uStack_110._4_4_ = *(uint *)((longlong)puVar6 + 0xc);
      uStack_110._0_4_ = *(uint *)(puVar6 + 1);
      if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) == 0) {
        uStack_118 = *puVar6;
      }
      else {
        FUN_1401c29b0(&uStack_118,puVar6);
      }
      FUN_140001c50(&uStack_118,1);
      iVar2 = FUN_1416d9df0(&uStack_118,&uStack_2e8,_DAT_1420f6b08,1);
      if ((0x46U >> (uStack_110._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_118);
      }
      if (iVar2 < 0) {
        uStack_e0 = 0x9b;
        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_80);
        }
        uStack_80 = 0;
        uStack_78 = 0x500000000;
        puStack_b8 = &uStack_d8;
        ppuVar11 = &puStack_b8;
        uVar10 = _DAT_1420da370;
        FUN_1416ab210(uStack_88,uStack_90,&uStack_80,1,_DAT_1420da370,ppuVar11);
        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_80);
        }
        uStack_80 = 0;
        uStack_78 = 0x500000000;
        uStack_118 = 0;
        uStack_110._0_4_ = 0;
        uStack_110._4_4_ = 0;
        FUN_1416d0010(0x4f,0x18763,0,&uStack_118,uVar10 & 0xffffff00,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00);
        FUN_1400019a0(&uStack_2b8,&uStack_118);
        puStack_b8 = &uStack_2b8;
        FUN_140002730(&uStack_2a8,0x1420b39d0);
        ppuVar11 = &puStack_b8;
        uVar10 = _DAT_1420da430;
        puStack_b0 = &uStack_2a8;
        uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da430,ppuVar11);
        cVar1 = FUN_1416927d0(uVar4);
        if (cVar1 == '\0') {
          uStack_e0 = 0x9e;
          _DAT_142182d90 = 0x187876b;
          if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_80);
          }
          uStack_80 = 0;
          uStack_78 = 0x500000000;
          ppuVar11 = (undefined8 **)0x0;
          uVar10 = _DAT_1420da020;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,0,_DAT_1420da020,0);
          uVar5 = FUN_1416cfcc0(0x4f);
          FUN_1416a8cb0(uVar5);
          FUN_1400019a0(&uStack_118,uVar4);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4f,0x18763,0,&uStack_118);
        }
        if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
          FUN_140001b50(&uStack_80);
        }
        uStack_80 = 0;
        uStack_78 = 0x500000000;
        uStack_c8 = 0;
        uStack_c0._0_4_ = 0;
        uStack_c0._4_4_ = 0;
        FUN_1416d0010(0x4f,0x18763,1,&uStack_c8,uVar10 & 0xffffff00,
                      (ulonglong)ppuVar11 & 0xffffffffffffff00);
        FUN_1400019a0(&uStack_2b8,&uStack_c8);
        puStack_b8 = &uStack_2b8;
        FUN_140002730(&uStack_2a8,0x1420b39d0);
        puStack_b0 = &uStack_2a8;
        uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_80,2,_DAT_1420da430,&puStack_b8);
        cVar1 = FUN_1416927d0(uVar4);
        if (cVar1 == '\0') {
          uStack_e0 = 0x9f;
          if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
            FUN_140001b50(&uStack_138);
          }
          uStack_138 = 0;
          uStack_130 = 0x500000000;
          uVar4 = FUN_1416ab210(uStack_88,uStack_90,&uStack_138,0,_DAT_1420da020,0);
          uVar5 = FUN_1416cfcc0(0x4f);
          FUN_1416a8cb0(uVar5);
          FUN_1400019a0(&uStack_c8,uVar4);
          func_0x0001416a8c00(1);
          FUN_1416d0790(0x4f,0x18763,1,&uStack_c8);
        }
      }
      else {
        uStack_e0 = 0x98;
      }
    }
    else {
      uStack_e0 = 0x14;
    }
  }
joined_r0x0001401bb22e:
  if ((0x46U >> (uStack_2d0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2d8);
  }
  if ((0x46U >> (uStack_130._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_138);
  }
  if ((0x46U >> (uStack_78._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_80);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_168);
  }
  if ((0x46U >> (uStack_17c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_188);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_178);
  }
  if ((0x46U >> (uStack_18c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_198);
  }
  if ((0x46U >> (uStack_1cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1d8);
  }
  if ((0x46U >> (uStack_24c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_258);
  }
  if ((0x46U >> (uStack_25c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_268);
  }
  if ((0x46U >> (uStack_22c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_238);
  }
  if ((0x46U >> (uStack_23c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_248);
  }
  if ((0x46U >> (uStack_1dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1e8);
  }
  if ((0x46U >> (uStack_1bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_1c8);
  }
  if ((0x46U >> (uStack_1fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_208);
  }
  if ((0x46U >> (uStack_26c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_278);
  }
  if ((0x46U >> (uStack_19c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1a8);
  }
  if ((0x46U >> (uStack_21c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_228);
  }
  if ((0x46U >> (uStack_1ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1f8);
  }
  if ((0x46U >> (uStack_3dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3e8);
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
  if ((0x46U >> (uStack_33c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_348);
  }
  if ((0x46U >> (uStack_34c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_358);
  }
  if ((0x46U >> (uStack_35c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_368);
  }
  if ((0x46U >> (uStack_36c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_378);
  }
  if ((0x46U >> (uStack_37c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_388);
  }
  if ((0x46U >> (uStack_38c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_398);
  }
  if ((0x46U >> (uStack_39c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3a8);
  }
  if ((0x46U >> (uStack_3ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3b8);
  }
  if ((0x46U >> (uStack_3bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3c8);
  }
  if ((0x46U >> (uStack_1ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_1b8);
  }
  if ((0x46U >> (uStack_3ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3f8);
  }
  if ((0x46U >> (uStack_3fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_408);
  }
  if ((0x46U >> (uStack_40c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_418);
  }
  if ((0x46U >> (uStack_41c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_428);
  }
  if ((0x46U >> (uStack_42c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_438);
  }
  if ((0x46U >> (uStack_43c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_448);
  }
  if ((0x46U >> (uStack_44c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_458);
  }
  if ((0x46U >> (uStack_45c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_468);
  }
  if ((0x46U >> (uStack_46c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_478);
  }
  if ((0x46U >> (uStack_47c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_488);
  }
  if ((0x46U >> (uStack_48c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_498);
  }
  if ((0x46U >> (uStack_49c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4a8);
  }
  if ((0x46U >> (uStack_4ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4b8);
  }
  if ((0x46U >> (uStack_4bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4c8);
  }
  if ((0x46U >> (uStack_4cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4d8);
  }
  if ((0x46U >> (uStack_4dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4e8);
  }
  if ((0x46U >> (uStack_4ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_4f8);
  }
  if ((0x46U >> (uStack_4fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_508);
  }
  if ((0x46U >> (uStack_3cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_3d8);
  }
  if ((0x46U >> (uStack_2dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2e8);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_d8);
  }
  if ((0x46U >> (uStack_20c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_218);
  }
  if ((0x46U >> (uStack_2ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_2f8);
  }
  if ((0x46U >> (uStack_2fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_308);
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
  _DAT_142182d78 = (undefined8 *)uStack_f0;
  return param_3;
}

