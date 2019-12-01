#ifndef __PHANSO_H__
#define __PHANSO_H__
#define MAX_PSO 100
#include <iostream>
using namespace std;
struct Phan_So {
	int iTuSo;
	int iMauSo;
};
typedef struct Phan_So PhanSo;
struct Day_Phan_So {
	PhanSo arrPhanSo[MAX_PSO]; //mang luu day phan so
	int N;                     // so luong phan so trong mang
};
typedef struct Day_Phan_So DayPhanSo;
void NhapPhanSo(PhanSo &P);
void XuatPhanSo(const PhanSo P);
int UCLN(int a, int b);
void RutGonPhanSo(PhanSo &P);
int SoSanhPhanSo(PhanSo P, PhanSo Q);
PhanSo Tong(PhanSo a, PhanSo b);
PhanSo Hieu(PhanSo a, PhanSo b);
PhanSo Tich(PhanSo a, PhanSo b);
PhanSo Thuong(PhanSo a, PhanSo b);
void NhapDayPhanSo(DayPhanSo &aP);
void XuatDayPhanSo(const DayPhanSo aP);
int TimPhanSo(DayPhanSo aP, PhanSo c);
PhanSo TongDayPhanSo(DayPhanSo aP);
void SapXepDayPhanSo(DayPhanSo &aP);
void RutGonDayPhanSo(DayPhanSo &aP);
void Menu();
#endif
