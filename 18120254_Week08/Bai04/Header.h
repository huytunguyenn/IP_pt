#ifndef _HEADER_H_
#define _HEADER_H_
#define MAX 100
#include <iostream>
using namespace std;
void Nhap(int[][MAX], int&, int&);
void Xuat(int[][MAX], int, int);
bool CheckMinDong(int[][MAX], int, int, int);
bool CheckMaxCot(int[][MAX], int, int, int);
void DiemYenNgua(int[][MAX], int, int);
void Menu(int[][MAX], int &, int&);
#endif