#ifndef _HOCSINH_H_
#define _HOCSINH_H_
#include <iostream>
#include <string>
using namespace std;
#define MAX_HS 200
struct Hoc_Sinh {
	string Ten;
	float Diem;
};
typedef struct Hoc_Sinh HocSinh;
struct Danh_Sach_Hoc_Sinh {
	Hoc_Sinh arrHS[MAX_HS];
	int n;
};
typedef struct Danh_Sach_Hoc_Sinh DanhSachHocSinh;
void NhapHocSinh(HocSinh&);
void XuatHocSinh(HocSinh);
void NhapDanhSachHocSinh(DanhSachHocSinh&);
void XuatDanhSachHocSinh(DanhSachHocSinh);
void SapXepTen(DanhSachHocSinh&);
void LietKeTen(DanhSachHocSinh);
float Max2(float a, float b);
float Min2(float a, float b);
float Max3(float a, float b, float c);
string TachTen(string name);
string DaoNguocTen(string name);
void TraoHocBong(DanhSachHocSinh);
void Menu();
#endif
