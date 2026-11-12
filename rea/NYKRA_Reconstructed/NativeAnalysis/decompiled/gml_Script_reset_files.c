
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_reset_files(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [12];
  uint uStack_15c;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_a8 = &UNK_141982b5c;
  uStack_a0 = 0;
  uStack_b0 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_b0;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  uStack_d8 = 0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_8c = 0xffffff;
  uStack_98 = 0;
  uStack_11c = 0xffffff;
  uStack_128 = 0;
  uStack_50 = (ulonglong)(uint)uStack_50;
  uStack_58 = 0;
  uStack_80 = (ulonglong)(uint)uStack_80;
  uStack_88 = 0;
  uStack_70 = (ulonglong)(uint)uStack_70;
  uStack_78 = 0;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(_DAT_1420dc810);
  uStack_a0 = 2;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922);
  FUN_1400019a0(&uStack_118,uVar2);
  puStack_158 = &uStack_118;
  FUN_1416ab210(param_1,param_2,&uStack_58,1,_DAT_1420da010,&puStack_158);
  uStack_a0 = 3;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  func_0x0001416ce870(param_1,_DAT_1420d59d8,0x80000000,&uStack_98);
  FUN_1416ac010(auStack_168,0x1420b2110);
  uStack_5c = uStack_8c;
  uStack_60 = uStack_90;
  if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
    uStack_68 = uStack_98;
  }
  else {
    FUN_14003ede0(&uStack_68,&uStack_98);
  }
  FUN_140003ca0(&uStack_68,auStack_168);
  FUN_1400019a0(&uStack_118,&uStack_68);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_15c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_168);
  }
  puStack_158 = &uStack_118;
  FUN_140002730(&uStack_108,0x14217e838);
  puStack_150 = &uStack_108;
  uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da1c0,&puStack_158);
  FUN_1400019a0(&uStack_128,uVar2);
  FUN_1416ac010(&uStack_68,0x14217e830);
  iVar1 = FUN_1416d9df0(&uStack_128,&uStack_68,_DAT_1420f6b08,0);
  if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if (iVar1 != 0) {
    uStack_a0 = 5;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_88);
    }
    uStack_88 = 0;
    uStack_80 = 0x500000000;
    if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_78);
    }
    uStack_78 = 0;
    uStack_70 = 0x500000000;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922);
    puStack_158 = &uStack_128;
    puStack_150 = &uStack_128;
    uVar3 = FUN_1416ab210(param_1,param_2,&uStack_78,1,_DAT_1420da1f0,&puStack_158);
    FUN_140017bd0(&uStack_68,uVar3,5);
    FUN_1400019a0(&uStack_f8,&uStack_68);
    if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_68);
    }
    puStack_148 = &uStack_f8;
    FUN_140002730(&uStack_e8,0x1420b2128);
    puStack_140 = &uStack_e8;
    FUN_1400019a0(&uStack_d8,uVar2);
    puStack_138 = &uStack_d8;
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_88,3,_DAT_1420da1e0,&puStack_150);
    FUN_1400019a0(&uStack_c8,uVar2);
    puStack_130 = &uStack_c8;
    FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da1d0,&puStack_138);
    uStack_a0 = 6;
    if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_58);
    }
    uStack_58 = 0;
    uStack_50 = 0x500000000;
    uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,0,_DAT_1420da200,0);
    FUN_1400019a0(&uStack_128,uVar2);
    do {
      FUN_1416ac010(&uStack_68,0x14217e830);
      iVar1 = FUN_1416d9df0(&uStack_128,&uStack_68,_DAT_1420f6b08,0);
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
      if (iVar1 == 0) break;
      uStack_a0 = 8;
      if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      uStack_58 = 0;
      uStack_50 = 0x500000000;
      if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      uStack_88 = 0;
      uStack_80 = 0x500000000;
      if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_78);
      }
      uStack_78 = 0;
      uStack_70 = 0x500000000;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,0x18922);
      puStack_158 = &uStack_128;
      puStack_150 = &uStack_128;
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_78,1,_DAT_1420da1f0,&puStack_158);
      FUN_140017bd0(&uStack_68,uVar3,5);
      FUN_1400019a0(&uStack_f8,&uStack_68);
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
      puStack_148 = &uStack_f8;
      FUN_140002730(&uStack_e8,0x1420b2128);
      puStack_140 = &uStack_e8;
      FUN_1400019a0(&uStack_d8,uVar2);
      puStack_138 = &uStack_d8;
      uVar2 = FUN_1416ab210(param_1,param_2,&uStack_88,3,_DAT_1420da1e0,&puStack_150);
      FUN_1400019a0(&uStack_c8,uVar2);
      puStack_130 = &uStack_c8;
      FUN_1416ab210(param_1,param_2,&uStack_58,2,_DAT_1420da1d0,&puStack_138);
      uStack_a0 = 9;
      if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      uStack_58 = 0;
      uStack_50 = 0x500000000;
      uVar2 = FUN_1416ab210(param_1,param_2,&uStack_58,0,_DAT_1420da200,0);
      FUN_1400019a0(&uStack_128,uVar2);
      FUN_1416ac010(&uStack_68,0x14217e830);
      iVar1 = FUN_1416d9df0(&uStack_128,&uStack_68,_DAT_1420f6b08,0);
      if ((0x46U >> (uStack_5c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_68);
      }
    } while (iVar1 != 0);
  }
  uStack_a0 = 0xd;
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_58 = 0;
  uStack_50 = 0x500000000;
  FUN_1416ab210(param_1,param_2,&uStack_58,0,_DAT_1420da210,0);
  if ((0x46U >> (uStack_70._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_80._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_50._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_128);
  }
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
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
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_118);
  }
  _DAT_142182d78 = (undefined8 *)uStack_b0;
  return param_3;
}

