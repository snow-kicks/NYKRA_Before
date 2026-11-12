
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_goto_map(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 **in_stack_fffffffffffffe58;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined4 uStack_164;
  longlong lStack_160;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined1 auStack_138 [12];
  uint uStack_12c;
  undefined1 auStack_128 [12];
  uint uStack_11c;
  undefined8 uStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_148 = &UNK_141983adb;
  uStack_140 = 0;
  uStack_150 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_150;
  uStack_10c = 0xffffff;
  uStack_118 = 0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_68 = (ulonglong)(uint)uStack_68;
  uStack_70 = 0;
  uStack_b0 = (ulonglong)(uint)uStack_b0;
  uStack_b8 = 0;
  uStack_a0 = (ulonglong)(uint)uStack_a0;
  uStack_a8 = 0;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_178 = param_3;
  uStack_78 = param_2;
  uStack_60 = param_1;
  FUN_1416ab750(_DAT_1420dd0b0);
  if (param_4 < 2) {
    puVar4 = &DAT_1420b1000;
  }
  else {
    puVar4 = (undefined *)param_5[1];
  }
  uStack_164 = 0;
  uStack_170 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(puVar4,&uStack_170,_DAT_1420f6b08,0);
  if (iVar2 == 0) {
    uStack_140 = 3;
    if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_70);
      param_2 = uStack_78;
      param_1 = uStack_60;
    }
    uStack_70 = 0;
    uStack_68 = 0x500000000;
    in_stack_fffffffffffffe58 = (undefined8 **)0x0;
    gml_Script_save_game(param_1,param_2,&uStack_70,0,0);
  }
  uStack_4c = 0;
  uStack_58 = 0x4053c00000000000;
  iVar2 = FUN_1416ab810(&uStack_170,&uStack_60,&uStack_78,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if (0 < iVar2) {
    iStack_cc = param_4;
    do {
      uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
      uStack_140 = 5;
      if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_70 = 0;
      uStack_68 = 0x500000000;
      if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_b8);
      }
      uStack_b8 = 0;
      uStack_b0 = 0x500000000;
      if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_a8);
      }
      uStack_a8 = 0;
      uStack_a0 = 0x500000000;
      func_0x0001416ce870(uStack_60,_DAT_1420d59d8,0x80000000,&uStack_c8);
      puVar4 = &DAT_1420b1000;
      if (0 < param_4) {
        puVar4 = (undefined *)*param_5;
      }
      FUN_1400019a0(&uStack_118,puVar4);
      puVar4 = &DAT_1420b1000;
      if (0 < param_4) {
        puVar4 = (undefined *)*param_5;
      }
      puStack_198 = &uStack_118;
      FUN_1400019a0(&uStack_108,puVar4);
      puStack_190 = &uStack_108;
      FUN_1416ac010(auStack_138,0x1420b31c4);
      uVar5 = CONCAT44(uVar6,_DAT_1420da2b0);
      uVar3 = FUN_1416ab210(uStack_60,uStack_78,&uStack_b8,1,uVar5,&puStack_198);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_1416ac010(auStack_128,0x1420b31b8);
      uStack_8c = uStack_bc;
      uStack_90 = uStack_c0;
      if ((0x46U >> (uStack_bc & 0x1f) & 1) == 0) {
        uStack_98 = uStack_c8;
      }
      else {
        FUN_140102840(&uStack_98,&uStack_c8);
      }
      FUN_140003ca0(&uStack_98,auStack_128);
      uStack_7c = uStack_8c;
      uStack_80 = uStack_90;
      if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
        uStack_88 = uStack_98;
      }
      else {
        FUN_140102840(&uStack_88,&uStack_98);
      }
      FUN_140003ca0(&uStack_88,uVar3);
      uStack_4c = uStack_7c;
      uStack_50 = uStack_80;
      if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
        uStack_58 = uStack_88;
      }
      else {
        FUN_140102840(&uStack_58,&uStack_88);
      }
      FUN_140003ca0(&uStack_58,auStack_138);
      FUN_1400019a0(&uStack_f8,&uStack_58);
      if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_58);
      }
      if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_88);
      }
      if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_98);
      }
      if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
        FUN_140001b50(auStack_128);
      }
      if ((0x46U >> (uStack_12c & 0x1f) & 1) != 0) {
        FUN_140001b50(auStack_138);
      }
      puStack_188 = &uStack_f8;
      uVar3 = FUN_1416ab210(uStack_60,uStack_78,&uStack_a8,1,CONCAT44(uVar6,_DAT_1420da2b0),
                            &puStack_190);
      param_4 = iStack_cc;
      FUN_1400019a0(&uStack_e8,uVar3);
      in_stack_fffffffffffffe58 = &puStack_188;
      puStack_180 = &uStack_e8;
      gml_Script_map_load(uStack_60,uStack_78,&uStack_70,2,in_stack_fffffffffffffe58);
      cVar1 = func_0x0001416abe60(&uStack_170,&uStack_60,&uStack_78);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(&uStack_170,&uStack_60,&uStack_78);
  if (lStack_160 != 0) {
    func_0x000141695b90();
    lStack_160 = 0;
  }
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_b0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
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
  _DAT_142182d78 = (undefined8 *)uStack_150;
  return puStack_178;
}

