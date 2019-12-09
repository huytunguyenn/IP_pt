//MSSV: 18120254, HoTen: Nguyen Huy Tu, Lop: 19CTT4
#include "Header.h"

int main() {
	ThanhPho quocgia[MAX];
	int n;
	cout << "== NHAP QUOC GIA ==" << endl;
	NhapQuocGia(quocgia, n);
	cout << endl << "== XUAT QUOC GIA ==" << endl;
	XuatQuocGia(quocgia, n);
	cout << endl << "== SAP XEP THANH PHO THEO MAT DO DAN SO ==" << endl;
	SapXepMatDo(quocgia, n);
	XuatQuocGia(quocgia, n);
	cout << endl << "== TACH THANH PHO CO DIEN TICH LON NHAT THANH 2 THANH PHO MOI ==" << endl;
	TachThanhPhoMax(quocgia, n);
	XuatQuocGia(quocgia, n);
	system("pause");
	return 0;
}
