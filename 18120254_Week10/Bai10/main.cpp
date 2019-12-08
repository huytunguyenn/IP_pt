#include "Header.h"
int main() {
	HocSinh dhs[MAX];
	int n;
	NhapDayHocSinh(dhs, n);
	GhiDanhSachHocSinhXuongFile("output.txt", dhs, n);
	cout << "Ghi file thanh cong" << endl;

	HocSinh dhs_doctufile[MAX];
	int m;
	DocDanhSachHocSinhTuFile("output.txt", dhs_doctufile, m);
	XuatDayHocSinh(dhs_doctufile, m);
	system("pause");
	return 0;
}