#ifndef _HEADER_H_
#define _HEADER_H_
#define MAX 100
#include <iostream>
using namespace std;
void Nhap(int[][MAX], int&,int&);
void Xuat(int[][MAX], int, int);
int Tong(int [][MAX], int , int);
bool LaSNT(int);
int DemSNT(int [][MAX], int , int);
int DemX(int [][MAX], int, int, int);
int TongKhongAm(int [][MAX], int , int );
void Menu(int [][MAX], int &, int &);
int TongDuongCheoChinh(int [][MAX], int , int );
bool KiemTraDuongCheoChinhTang(int [][MAX], int , int );
void SapXepTangDong(int [][MAX], int , int );
int TongDuongCheoPhu(int [][MAX], int);
int MaxMaTran(int [][MAX], int, int);
void MaxDong(int [][MAX], int, int);
void MaxCot(int [][MAX], int, int);
int Max1Dong(int [][MAX], int, int,int&,int&);
void MoveMaxVeDuongCheoChinh(int [][MAX], int, int);
#endif
