#ifndef __PHANSO_H__
#define __PHANSO_H__
#define MAX_PSO 100
#include <iostream>
using namespace std;
struct PhanSo {
	int iTuSo;
	int iMauSo;
};
struct DayPhanSo {
	PhanSo arrPhanSo[MAX_PSO]; //mang luu day phan so
	int N;                     // so luong phan so trong mang
};
void NhapPhanSo(PhanSo &P, int i);
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
#endif