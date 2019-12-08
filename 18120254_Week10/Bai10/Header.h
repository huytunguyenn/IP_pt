#ifndef _HEADER_H_
#define _HEADER_H_
#include <fstream>
#include <iostream>
#include <string>
#define MAX 100
using namespace std;
struct Hoc_Sinh {
	string ten;
	string lop;
	float diem;
};
typedef struct Hoc_Sinh HocSinh;
void NhapHocSinh(HocSinh& hs); 
void XuatHocSinh(HocSinh hs);
void NhapDayHocSinh(HocSinh dhs[], int &n);
void XuatDayHocSinh(HocSinh dhs[], int n);
void GhiDanhSachHocSinhXuongFile(string fileout, HocSinh dhs[], int n);
void DocDanhSachHocSinhTuFile(string filein, HocSinh dhs[], int &n);

#endif
