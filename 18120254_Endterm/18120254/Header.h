#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>
#include <string>
#define MAX 100
using namespace std;
struct Thanh_Pho {
	string ten;
	float dientich;
	unsigned int danso;
	float matdo;
};
typedef struct Thanh_Pho ThanhPho;
// nhập một thành phố
void NhapThanhPho(ThanhPho& thanhpho);
// nhập danh sách các thành phố
void NhapQuocGia(ThanhPho quocgia[], int& n);
// xuất một thành phố
void XuatThanhPho(ThanhPho thanhpho);
// xuất danh sách các thành phố
void XuatQuocGia(ThanhPho quocgia[], int n);
// sắp xếp các thành phố theo mật độ dân số
void SapXepMatDo(ThanhPho quocgia[], int n);
// hoán vị 2 thành phố
void HoanViThanhPho(ThanhPho& a, ThanhPho& b);
// tìm thành phố có diện tích lớn nhất và index của nó
void TimThanhPhoMaxDienTich(ThanhPho quocgia[], int n, ThanhPho& max, int& index);
// tách thành phố có diện tích lớn nhất thành 2 thành phố con
void ThayTheThanhPho(ThanhPho quocgia[], int& n, int index, ThanhPho moi1, ThanhPho moi2);
// đưa 2 thành phố con đã tách vào danh sách
void TachThanhPhoMax(ThanhPho quocgia[], int& n);
#endif
