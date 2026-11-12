
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_clear_objects(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [16];
  longlong lStack_b8;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  uint uStack_7c;
  undefined8 uStack_78;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_98 = &UNK_141982d0a;
  uStack_90 = 0;
  uStack_a0 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_a0;
  uStack_7c = 0xffffff;
  uStack_88 = 0;
  uStack_6c = 0xffffff;
  uStack_78 = 0;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  puStack_a8 = param_3;
  uStack_68 = param_2;
  uStack_50 = param_1;
  FUN_1416ab750(_DAT_1420dc8e0);
  uStack_54 = 0;
  uStack_60 = 0xc008000000000000;
  iVar2 = FUN_1416ab810(auStack_c8,&uStack_50,&uStack_68,&uStack_60);
  if ((0x46U >> (uStack_54 & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_60);
  }
  if (0 < iVar2) {
    do {
      uStack_90 = 3;
      FUN_1416cea80(uStack_50,_DAT_1420d5a58,0x80000000,&uStack_88,0,0);
      uStack_54 = 0;
      uStack_60 = 0x3ff0000000000000;
      iVar2 = FUN_1416d9df0(&uStack_88,&uStack_60,_DAT_1420f6b08,0);
      if (iVar2 != 0) {
        FUN_1416cea80(uStack_50,_DAT_1420d5a28,0x80000000,&uStack_78,0,0);
        uStack_54 = 0;
        uStack_60 = 0x4053c00000000000;
        iVar2 = FUN_1416d9df0(&uStack_78,&uStack_60,_DAT_1420f6b08,0);
        if (iVar2 != 0) {
          FUN_1416cea80(uStack_50,_DAT_1420d5a28,0x80000000,&uStack_78,0,0);
          uStack_54 = 0;
          uStack_60 = 0x4050000000000000;
          iVar2 = FUN_1416d9df0(&uStack_78,&uStack_60,_DAT_1420f6b08,0);
          if (iVar2 != 0) {
            FUN_1416cea80(uStack_50,_DAT_1420d5a28,0x80000000,&uStack_78,0,0);
            uStack_54 = 0;
            uStack_60 = 0x4050400000000000;
            iVar2 = FUN_1416d9df0(&uStack_78,&uStack_60,_DAT_1420f6b08,0);
            if (iVar2 != 0) {
              uStack_90 = 5;
              FUN_1416f8210(uStack_50,uStack_68,0,0);
            }
          }
        }
      }
      cVar1 = func_0x0001416abe60(auStack_c8,&uStack_50,&uStack_68);
    } while (cVar1 != '\0');
  }
  FUN_1416ab620(auStack_c8,&uStack_50,&uStack_68);
  if (lStack_b8 != 0) {
    func_0x000141695b90();
    lStack_b8 = 0;
  }
  if ((0x46U >> (uStack_6c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_78);
  }
  if ((0x46U >> (uStack_7c & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_88);
  }
  _DAT_142182d78 = (undefined8 *)uStack_a0;
  return puStack_a8;
}

