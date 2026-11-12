
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_save_GENERAL(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_150 [12];
  uint uStack_144;
  undefined1 auStack_140 [12];
  uint uStack_134;
  undefined8 *puStack_130;
  double dStack_128;
  uint uStack_11c;
  double dStack_118;
  uint uStack_10c;
  undefined8 uStack_108;
  uint uStack_fc;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
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
  double dStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_e8 = &UNK_141984925;
  uStack_e0 = 0;
  uStack_f0 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_f0;
  uStack_11c = 0xffffff;
  dStack_128 = 0.0;
  uStack_10c = 0xffffff;
  dStack_118 = 0.0;
  uStack_fc = 0xffffff;
  uStack_108 = 0;
  uStack_6c = 0xffffff;
  dStack_78 = 0.0;
  _DAT_142182d90 = param_1;
  puStack_130 = param_3;
  uVar1 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18859);
  uVar2 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x1885a);
  uVar3 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18862);
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uVar4 = (**(code **)(*_DAT_14218ecf8 + 8))(_DAT_14218ecf8,0x18be8);
  uStack_60 = (ulonglong)(uint)uStack_60;
  uStack_68 = 0;
  uStack_a0 = (ulonglong)(uint)uStack_a0;
  uStack_a8 = 0;
  *(undefined4 *)((longlong)puStack_130 + 0xc) = 5;
  *puStack_130 = 0;
  FUN_1416ab750(_DAT_1420dd8a0);
  uStack_e0 = 2;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  FUN_140002730(&dStack_128,0x1420b3a80);
  pdStack_d8 = &dStack_128;
  FUN_140002730(&dStack_118,0x1420b3a90);
  pdStack_d0 = &dStack_118;
  FUN_140002730(&uStack_108,0x1420b3a90);
  puStack_c8 = &uStack_108;
  uVar5 = FUN_1416ab210(param_1,param_2,&uStack_68,3,_DAT_1420da220,&pdStack_d8);
  FUN_1400019a0(&dStack_78,uVar5);
  uStack_e0 = 3;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  pdStack_d8 = &dStack_78;
  FUN_140002730(&dStack_118,0x14217f920);
  pdStack_d0 = &dStack_118;
  FUN_140002730(&uStack_108,0x14217f920);
  puStack_c8 = &uStack_108;
  FUN_1416ab210(param_1,param_2,&uStack_68,3,_DAT_1420da650,&pdStack_d8);
  uStack_e0 = 5;
  if ((uStack_6c & 0xffffff) == 0) {
    dVar6 = dStack_78;
  }
  else {
    dVar6 = (double)FUN_1416940c0(&dStack_78);
  }
  FUN_1416fbbe0((longlong)dVar6,0xb,uVar1);
  uStack_e0 = 6;
  if ((uStack_6c & 0xffffff) == 0) {
    dVar6 = dStack_78;
  }
  else {
    dVar6 = (double)FUN_1416940c0(&dStack_78);
  }
  FUN_1416fbbe0((longlong)dVar6,0xb,uVar2);
  uStack_e0 = 7;
  if ((uStack_6c & 0xffffff) == 0) {
    dVar6 = dStack_78;
  }
  else {
    dVar6 = (double)FUN_1416940c0(&dStack_78);
  }
  FUN_1416fbbe0((longlong)dVar6,5,uVar3);
  uStack_e0 = 9;
  uStack_4c = 0;
  uStack_58 = 0x3ff0000000000000;
  if ((uStack_6c & 0xffffff) == 0) {
    dVar6 = dStack_78;
  }
  else {
    dVar6 = (double)FUN_1416940c0(&dStack_78);
  }
  FUN_1416fbbe0((longlong)dVar6,1,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_e0 = 10;
  uStack_4c = 0;
  uStack_58 = 0;
  if ((uStack_6c & 0xffffff) == 0) {
    dVar6 = dStack_78;
  }
  else {
    dVar6 = (double)FUN_1416940c0(&dStack_78);
  }
  FUN_1416fbbe0((longlong)dVar6,1,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  uStack_e0 = 0xc;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  uStack_a8 = 0;
  uStack_a0 = 0x500000000;
  func_0x0001416ce870(param_1,_DAT_1420d59d8,0x80000000,&uStack_b8);
  FUN_1400019a0(&dStack_128,uVar4);
  pdStack_d0 = &dStack_78;
  pdStack_d8 = &dStack_128;
  FUN_1416ac010(auStack_150,0x1420b3a75);
  uVar1 = FUN_1416ab210(param_1,param_2,&uStack_a8,1,_DAT_1420da2b0,&pdStack_d8);
  FUN_1416ac010(auStack_140,0x1420b3a60);
  uStack_7c = uStack_ac;
  uStack_80 = uStack_b0;
  if ((0x46U >> (uStack_ac & 0x1f) & 1) == 0) {
    uStack_88 = uStack_b8;
  }
  else {
    FUN_1401c3a10(&uStack_88,&uStack_b8);
  }
  FUN_140003ca0(&uStack_88,auStack_140);
  uStack_8c = uStack_7c;
  uStack_90 = uStack_80;
  if ((0x46U >> (uStack_7c & 0x1f) & 1) == 0) {
    uStack_98 = uStack_88;
  }
  else {
    FUN_1401c3a10(&uStack_98,&uStack_88);
  }
  FUN_140003ca0(&uStack_98,uVar1);
  uStack_4c = uStack_8c;
  uStack_50 = uStack_90;
  if ((0x46U >> (uStack_8c & 0x1f) & 1) == 0) {
    uStack_58 = uStack_98;
  }
  else {
    FUN_1401c3a10(&uStack_58,&uStack_98);
  }
  FUN_140003ca0(&uStack_58,auStack_150);
  FUN_1400019a0(&uStack_108,&uStack_58);
  if ((0x46U >> (uStack_4c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_58);
  }
  if ((0x46U >> (uStack_8c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_98);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  if ((0x46U >> (uStack_134 & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_140);
  }
  if ((0x46U >> (uStack_144 & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_150);
  }
  puStack_c8 = &uStack_108;
  FUN_1416ab210(param_1,param_2,&uStack_68,2,_DAT_1420da360,&pdStack_d0);
  uStack_e0 = 0xd;
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  uStack_68 = 0;
  uStack_60 = 0x500000000;
  pdStack_d8 = &dStack_78;
  FUN_1416ab210(param_1,param_2,&uStack_68,1,_DAT_1420da370,&pdStack_d8);
  if ((0x46U >> (uStack_a0._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_a8);
  }
  if ((0x46U >> (uStack_60._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_68);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_78);
  }
  if ((0x46U >> (uStack_fc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_108);
  }
  if ((0x46U >> (uStack_10c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_118);
  }
  if ((0x46U >> (uStack_11c & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_128);
  }
  _DAT_142182d78 = (undefined8 *)uStack_f0;
  return puStack_130;
}

