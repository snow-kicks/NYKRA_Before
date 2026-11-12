
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_load_GENERAL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint in_stack_fffffffffffffe38;
  uint uVar8;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 **ppuVar9;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  uint uStack_16c;
  undefined8 uStack_168;
  uint uStack_15c;
  undefined8 uStack_158;
  uint uStack_14c;
  undefined8 uStack_148;
  uint uStack_13c;
  undefined8 uStack_130;
  uint uStack_124;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined1 auStack_f8 [12];
  uint uStack_ec;
  undefined1 auStack_e8 [12];
  uint uStack_dc;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_118 = &UNK_14198495b;
  uStack_110 = 0;
  uStack_120 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_120;
  uStack_15c = 0xffffff;
  uStack_168 = 0;
  uStack_14c = 0xffffff;
  uStack_158 = 0;
  uStack_13c = 0xffffff;
  uStack_148 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_124 = 0xffffff;
  uStack_130 = 0;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  _DAT_142182d90 = param_1;
  puStack_180 = param_3;
  uVar2 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_16c = 0xffffff;
  uStack_178 = 0;
  uVar3 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18859);
  uVar4 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x1885a);
  uVar5 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18862);
  uStack_50 = (ulonglong)(uint)uStack_50;
  uStack_58 = 0;
  uStack_a0 = (ulonglong)(uint)uStack_a0;
  uStack_a8 = 0;
  *(undefined4 *)((longlong)puStack_180 + 0xc) = 5;
  *puStack_180 = 0;
  FUN_1416ab750(_DAT_1420dd8c0);
  uStack_110 = 3;
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  FUN_1416ab000(&uStack_108,0x14217f930);
  if ((0x46U >> (uStack_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  FUN_1416ab000(&uStack_130,0x1420b3aa0);
  uStack_110 = 5;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  uStack_198 = 0;
  uStack_190 = 0;
  FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_198,in_stack_fffffffffffffe38 & 0xffffff00,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  FUN_1400019a0(&uStack_168,&uStack_198);
  uVar8 = _DAT_1420da4b0;
  ppuVar9 = &puStack_d8;
  puStack_d8 = &uStack_168;
  uVar6 = FUN_1416ab210(param_1,param_2,&uStack_58,1,_DAT_1420da4b0,&puStack_d8);
  uStack_5c = 0;
  uStack_68 = 0xbff0000000000000;
  iVar1 = FUN_1416d9df0(uVar6,&uStack_68,_DAT_1420f6b08,1);
  if ((iVar1 == -2) || (0 < iVar1)) {
    uStack_110 = 8;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0x500000000;
    func_0x0001416ce870(param_1,_DAT_1420d59d8,0x80000000,&uStack_b8);
    FUN_1416d0010(0x4f,0x18965,0x80000000,&uStack_198,uVar8 & 0xffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_1400019a0(&uStack_168,&uStack_198);
    puStack_d8 = &uStack_168;
    puVar7 = (undefined8 *)FUN_1416ab210(param_1,param_2,&uStack_a8,1,_DAT_1420da4b0,&puStack_d8);
    uStack_5c = *(uint *)((longlong)puVar7 + 0xc);
    uStack_60 = *(undefined4 *)(puVar7 + 1);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) == 0) {
      uStack_68 = *puVar7;
    }
    else {
      FUN_1401c55b0(&uStack_68,puVar7);
    }
    FUN_140001c50(&uStack_68,1);
    FUN_1400019a0(&uStack_158,&uStack_68);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    puStack_d0 = &uStack_158;
    FUN_1416ac010(auStack_f8,0x1420b3ac5);
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,1,_DAT_1420da2b0,&puStack_d0);
    FUN_1416ac010(auStack_e8,0x1420b3ad0);
    uStack_6c = uStack_ac;
    uStack_70 = uStack_b0;
    if ((0x46U >> (uStack_ac & 0x1f) & 1) == 0) {
      uStack_78 = uStack_b8;
    }
    else {
      FUN_1401c55b0(&uStack_78,&uStack_b8);
    }
    FUN_140003ca0(&uStack_78,auStack_e8);
    uStack_7c = uStack_6c;
    uStack_80 = uStack_70;
    if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
      uStack_88 = uStack_78;
    }
    else {
      FUN_1401c55b0(&uStack_88,&uStack_78);
    }
    FUN_140003ca0(&uStack_88,uVar2);
    uStack_8c = uStack_7c;
    uStack_90 = uStack_80;
    if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
      uStack_98 = uStack_88;
    }
    else {
      FUN_1401c55b0(&uStack_98,&uStack_88);
    }
    FUN_140003ca0(&uStack_98,auStack_f8);
    uStack_5c = uStack_8c;
    uStack_60 = uStack_90;
    if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
      uStack_68 = uStack_98;
    }
    else {
      FUN_1401c55b0(&uStack_68,&uStack_98);
    }
    FUN_140003ca0(&uStack_68,&uStack_130);
    FUN_1400019a0(&uStack_108,&uStack_68);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_e8);
    }
    if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_f8);
    }
  }
  else {
    uStack_110 = 6;
    if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0x500000000;
    func_0x0001416ce870(param_1,_DAT_1420d59d8,0x80000000,&uStack_b8);
    FUN_1400019a0(&uStack_158,uVar2);
    puStack_d0 = &uStack_158;
    FUN_1416ac010(auStack_f8,0x1420b3ac5);
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_a8,1,_DAT_1420da2b0,&puStack_d0);
    FUN_1416ac010(auStack_e8,0x1420b3ab0);
    uStack_6c = uStack_ac;
    uStack_70 = uStack_b0;
    if ((0x46U >> (uStack_ac & 0x1f) & 1) == 0) {
      uStack_78 = uStack_b8;
    }
    else {
      FUN_1401c55b0(&uStack_78,&uStack_b8);
    }
    FUN_140003ca0(&uStack_78,auStack_e8);
    uStack_7c = uStack_6c;
    uStack_80 = uStack_70;
    if ((0x46U >> (uStack_6c & 0x1f) & 1) == 0) {
      uStack_88 = uStack_78;
    }
    else {
      FUN_1401c55b0(&uStack_88,&uStack_78);
    }
    FUN_140003ca0(&uStack_88,uVar2);
    uStack_8c = uStack_7c;
    uStack_90 = uStack_80;
    if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
      uStack_98 = uStack_88;
    }
    else {
      FUN_1401c55b0(&uStack_98,&uStack_88);
    }
    FUN_140003ca0(&uStack_98,auStack_f8);
    uStack_5c = uStack_8c;
    uStack_60 = uStack_90;
    if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
      uStack_68 = uStack_98;
    }
    else {
      FUN_1401c55b0(&uStack_68,&uStack_98);
    }
    FUN_140003ca0(&uStack_68,&uStack_130);
    FUN_1400019a0(&uStack_108,&uStack_68);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_98);
    }
    if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_e8);
    }
    if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
      FUN_140001b50(auStack_f8);
    }
  }
  uStack_110 = 0xb;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  puStack_d8 = &uStack_108;
  uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,1,_DAT_1420da3d0,&puStack_d8);
  FUN_1400019a0(&uStack_178,uVar2);
  uStack_5c = 0;
  uStack_68 = 0xbff0000000000000;
  iVar1 = FUN_1416d9df0(&uStack_178,&uStack_68,_DAT_1420f6b08,0);
  if (iVar1 == 0) {
    uStack_110 = 0xc;
  }
  else {
    uStack_110 = 0xd;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    puStack_d8 = &uStack_178;
    FUN_140002730(&uStack_158,0x14217f938);
    puStack_d0 = &uStack_158;
    FUN_140002730(&uStack_148,0x14217f938);
    puStack_c8 = &uStack_148;
    FUN_1416ab210(param_1,param_2,&uStack_58,3,_DAT_1420da650,&puStack_d8);
    uStack_110 = 0xf;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    puStack_d8 = &uStack_178;
    FUN_140002730(&uStack_158,0x1420b3af0);
    puStack_d0 = &uStack_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da3e0,&puStack_d8);
    FUN_1416a8cb0(_DAT_14218ecf8);
    FUN_1400019a0(uVar3,uVar2);
    func_0x0001416a8c00(1);
    uStack_110 = 0x10;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    puStack_d8 = &uStack_178;
    FUN_140002730(&uStack_158,0x1420b3af0);
    puStack_d0 = &uStack_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da3e0,&puStack_d8);
    FUN_1416a8cb0(_DAT_14218ecf8);
    FUN_1400019a0(uVar4,uVar2);
    func_0x0001416a8c00(1);
    uStack_110 = 0x11;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    puStack_d8 = &uStack_178;
    FUN_140002730(&uStack_158,0x1420b3b00);
    puStack_d0 = &uStack_158;
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da3e0,&puStack_d8);
    FUN_1416a8cb0(_DAT_14218ecf8);
    FUN_1400019a0(uVar5,uVar2);
    func_0x0001416a8c00(1);
    uStack_110 = 0x13;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    puStack_d8 = &uStack_178;
    FUN_1416ab210(param_1,param_2,&uStack_58,1,_DAT_1420da370,&puStack_d8);
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_16c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_178);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_124 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_130);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_13c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_148);
  }
  if ((0x46U >> (uStack_14c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_158);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_168);
  }
  _DAT_142182d78 = (undefined8 *)uStack_120;
  return puStack_180;
}

