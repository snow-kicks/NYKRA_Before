
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__save_ds_list
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  double *pdStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  uint uStack_ec;
  undefined8 uStack_e8;
  uint uStack_dc;
  double dStack_d8;
  uint uStack_cc;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined8 uStack_b8;
  uint uStack_ac;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puStack_108 = &UNK_14198482c;
  uStack_100 = 0;
  uStack_110 = _DAT_142182d78;
  _DAT_142182d78 = &uStack_110;
  uStack_ec = 0xffffff;
  uStack_f8 = 0;
  uStack_dc = 0xffffff;
  uStack_e8 = 0;
  uStack_cc = 0xffffff;
  dStack_d8 = 0.0;
  uStack_bc = 0xffffff;
  uStack_c8 = 0;
  uStack_ac = 0xffffff;
  uStack_b8 = 0;
  uStack_74 = 0xffffff;
  dStack_80 = 0.0;
  uStack_68 = (ulonglong)(uint)uStack_68;
  uStack_70 = 0;
  uStack_88 = (ulonglong)(uint)uStack_88;
  uStack_90 = 0;
  _DAT_142182d90 = param_1;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  FUN_1416ab750(_DAT_1420dd810);
  uStack_100 = 2;
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&dStack_d8,puVar5);
  pdStack_128 = &dStack_d8;
  FUN_140002730(&uStack_c8,0x1420b3810);
  puStack_120 = &uStack_c8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_70,2,_DAT_1420da430,&pdStack_128);
  cVar1 = FUN_1416927d0(uVar3);
  if (cVar1 == '\0') {
    uStack_100 = 9;
    uStack_94 = 0;
    uStack_a0 = 0;
    if (param_4 < 1) {
      pdVar4 = (double *)&DAT_1420b1000;
      if ((uRam00000001420b100c & 0xffffff) == 0) goto LAB_1401a0538;
LAB_1401a04c7:
      dVar6 = (double)FUN_1416940c0();
    }
    else {
      pdVar4 = (double *)*param_5;
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a04c7;
LAB_1401a0538:
      dVar6 = *pdVar4;
    }
    FUN_1416fbbe0((longlong)dVar6,3,&uStack_a0);
    if ((0x46U >> (uStack_94 & 0x1f) & 1) != 0) {
      FUN_140001b50(&uStack_a0);
    }
    goto LAB_1401a08e1;
  }
  uStack_100 = 3;
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  uStack_90 = 0;
  uStack_88 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_b8,puVar5);
  puStack_118 = &uStack_b8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_90,1,_DAT_1420d9ec0,&puStack_118);
  if (param_4 < 1) {
    pdVar4 = (double *)&DAT_1420b1000;
    if ((uRam00000001420b100c & 0xffffff) == 0) goto LAB_1401a057e;
LAB_1401a0521:
    dVar6 = (double)FUN_1416940c0();
  }
  else {
    pdVar4 = (double *)*param_5;
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a0521;
LAB_1401a057e:
    dVar6 = *pdVar4;
  }
  FUN_1416fbbe0((longlong)dVar6,3,uVar3);
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  uStack_70 = 0;
  uStack_68 = 0x500000000;
  if (param_4 < 2) {
    puVar5 = &DAT_1420b1000;
  }
  else {
    puVar5 = (undefined *)param_5[1];
  }
  FUN_1400019a0(&uStack_f8,puVar5);
  puStack_138 = &uStack_f8;
  uVar3 = FUN_1416ab210(param_1,param_2,&uStack_70,1,_DAT_1420d9ec0,&puStack_138);
  uStack_94 = 0;
  uStack_a0 = 0x3ff0000000000000;
  iVar2 = FUN_1416d9df0(uVar3,&uStack_a0,_DAT_1420f6b08,1);
  if (-1 < iVar2) {
    uStack_100 = 5;
    if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
      FUN_140001b50(&dStack_80);
    }
    uStack_74 = 0;
    dStack_80 = 0.0;
    while( true ) {
      if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_70);
      }
      uStack_70 = 0;
      uStack_68 = 0x500000000;
      puVar5 = &DAT_1420b1000;
      if (1 < param_4) {
        puVar5 = (undefined *)param_5[1];
      }
      FUN_1400019a0(&uStack_f8,puVar5);
      puStack_138 = &uStack_f8;
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_70,1,_DAT_1420d9ec0,&puStack_138);
      iVar2 = FUN_1416d9df0(&dStack_80,uVar3,_DAT_1420f6b08,1);
      if ((iVar2 == -2) || (-1 < iVar2)) break;
      uStack_100 = 6;
      if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
        FUN_140001b50(&uStack_90);
      }
      uStack_90 = 0;
      uStack_88 = 0x500000000;
      puVar5 = &DAT_1420b1000;
      if (1 < param_4) {
        puVar5 = (undefined *)param_5[1];
      }
      FUN_1400019a0(&uStack_e8,puVar5);
      puStack_130 = &uStack_e8;
      pdStack_128 = &dStack_80;
      uVar3 = FUN_1416ab210(param_1,param_2,&uStack_90,2,_DAT_1420d9ee0,&puStack_130);
      if (param_4 < 1) {
        pdVar4 = (double *)&DAT_1420b1000;
        if ((uRam00000001420b100c & 0xffffff) == 0) goto LAB_1401a087c;
LAB_1401a0867:
        dVar6 = (double)FUN_1416940c0();
      }
      else {
        pdVar4 = (double *)*param_5;
        if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) != 0) goto LAB_1401a0867;
LAB_1401a087c:
        dVar6 = *pdVar4;
      }
      FUN_1416fbbe0((longlong)dVar6,8,uVar3);
      switch(uStack_74 & 0xffffff) {
      case 1:
        dStack_80 = (double)FUN_1416940c0(&dStack_80);
        dStack_80 = dStack_80 + 1.0;
        uStack_74 = 0;
        break;
      default:
        FUN_140001d70(&UNK_141981e6a,&dStack_80,&dStack_80);
        break;
      case 7:
        dStack_80 = (double)CONCAT44(dStack_80._4_4_,dStack_80._0_4_ + 1);
        break;
      case 10:
        dStack_80 = (double)((longlong)dStack_80 + 1);
        break;
      case 0xd:
        uStack_74 = 0;
      case 0:
        dStack_80 = dStack_80 + 1.0;
      }
    }
  }
LAB_1401a08e1:
  if ((0x46U >> (uStack_88._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_90);
  }
  if ((0x46U >> (uStack_68._4_4_ & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_70);
  }
  if ((0x46U >> (uStack_74 & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_80);
  }
  if ((0x46U >> (uStack_ac & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_b8);
  }
  if ((0x46U >> (uStack_bc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_c8);
  }
  if ((0x46U >> (uStack_cc & 0x1f) & 1) != 0) {
    FUN_140001b50(&dStack_d8);
  }
  if ((0x46U >> (uStack_dc & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_e8);
  }
  if ((0x46U >> (uStack_ec & 0x1f) & 1) != 0) {
    FUN_140001b50(&uStack_f8);
  }
  _DAT_142182d78 = (undefined8 *)uStack_110;
  return param_3;
}

