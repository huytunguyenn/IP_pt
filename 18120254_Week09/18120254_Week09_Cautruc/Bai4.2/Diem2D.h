#ifndef __DIEM2D_H__
#define __DIEM2D_H__
#include <iostream>
using namespace std;
struct Diem2d {
	float dX;  // toa do tren truc x
	float dY;  // toa do tren truc y
};
typedef struct Diem2d Diem2D;
void NhapDiem2D(Diem2D &P);
void XuatDiem2D(const Diem2D P);
float KhoangCachEuclid(Diem2D P, Diem2D Q);
float ChuViTamGiac(Diem2D P, Diem2D Q, Diem2D R);
float DienTichTamGiac(Diem2D A, Diem2D B, Diem2D C);
int CheckPoint(Diem2D A);
int CheckPointRec(Diem2D A, Diem2D B, Diem2D C, Diem2D D);
void Menu();
#endif