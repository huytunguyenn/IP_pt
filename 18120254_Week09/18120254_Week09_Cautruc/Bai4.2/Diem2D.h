#ifndef __DIEM2D_H__
#define __DIEM2D_H__
#include <iostream>
using namespace std;
struct Diem2D {
	double dX;  // toa do tren truc x
	double dY;  // toa do tren truc y
};
void NhapDiem2D(Diem2D &P, int i);
void XuatDiem2D(const Diem2D P);
double KhoangCachEuclid(Diem2D P, Diem2D Q);
double ChuViTamGiac(Diem2D P, Diem2D Q, Diem2D R);
double DienTichTamGiac(Diem2D A, Diem2D B, Diem2D C);
#endif