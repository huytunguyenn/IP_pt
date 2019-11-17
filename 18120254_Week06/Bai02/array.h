#ifndef _ARRAY_H_
#define _ARRAY_H_
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000
void Nhap(float [], int&);
void Xuat(float [], int);
void Menu(float [], int&);
void XoaBatKy(float [], int&);
void XoaLienTuc(float[], int&);
void DemSo(float [], int);
void DemSoTrongDoan(float [], int);
float TimMaxThuHai(float [], int);
void DemSoLap(float [], int);
void TimMinTrongDoan(float [], int);
void TongMax(float [], int);
void DaoNguocMang(float [], int);
void DuaVeDau(float [], int);
void SapXepChanTangDauLeGiamCuoi(float [], int);
bool LaSCP(float);
void SapXepSCP(float [], int);
void HoanViMangCon(float [], int);
bool KiemTraTangDan(float [], int);
void InDayTangMax(float [], int);
void InDayTang(float [], int);
bool LaSNT(float);
float MinSNT(float[], int);
#endif
