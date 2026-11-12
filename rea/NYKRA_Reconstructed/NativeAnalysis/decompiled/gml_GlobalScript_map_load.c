
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript_map_load(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined1 auStack_38 [12];
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puStack_48 = &UNK_141982c72;
  uStack_50 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_50;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  uStack_40 = 1;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x186ca);
  FUN_1416abf10(auStack_38,gml_Script__SET_SCENE,param_1);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar1,auStack_38);
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_38);
  }
  uStack_40 = 0xd8;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,0x18aa1);
  FUN_1416abf10(auStack_38,gml_Script_map_load,param_1);
  FUN_1416a8cb0(param_1);
  FUN_1400019a0(uVar1,auStack_38);
  func_0x0001416a8c00(1);
  if ((0x46U >> (uStack_2c & 0x1f) & 1) != 0) {
    FUN_140001b50(auStack_38);
  }
  _DAT_142182d78 = (undefined8 *)uStack_50;
  return param_3;
}

