#include "Diem2D.h"
void main(){
	Diem2D a, b, c;
	cout << ">>>>Tinh khoang cach 2 diem<<<<" << endl;
	NhapDiem2D(a, 1);
	NhapDiem2D(b, 2);
	cout<<"Khoang cach giua hai diem: "<< KhoangCachEuclid(a, b);
	cout<<endl<<">>>>Tinh chu vi, dien tich tam giac tao boi 3 diem<<<<"<<endl;
	NhapDiem2D(a, 1);
	NhapDiem2D(b, 2);
	NhapDiem2D(c, 3);
	cout<<"Chu vi tam giac: "<< ChuViTamGiac(a, b, c);
	cout<<"Dien tich tam giac: "<< DienTichTamGiac(a, b, c);
}