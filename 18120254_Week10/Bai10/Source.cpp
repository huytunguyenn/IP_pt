#include "Header.h"
void NhapHocSinh(HocSinh& hs) {
	cout << "Nhap ten: ";
	getline(cin, hs.ten);
	cout << "Nhap lop: ";
	getline(cin, hs.lop);
	cout << "Nhap diem: ";
	cin >> hs.diem;
}
void NhapDayHocSinh(HocSinh dhs[],int &n) {
	cout << "Nhap so luong hoc sinh: ";
	cin >> n;
	cin.ignore(1);
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin hoc sinh thu " << i + 1 << endl;
		NhapHocSinh(dhs[i]);
		cin.ignore(1);
	}
}
void XuatHocSinh(HocSinh hs) {
	cout << "Ten: " << hs.ten << endl;
	cout << "Lop: " << hs.lop << endl;
	cout << "Diem: " << hs.diem << endl;
}
void XuatDayHocSinh(HocSinh dhs[], int n) {
	cout << "So luong hoc sinh: ";
	cout << n<<endl;
	for (int i = 0; i < n; i++) {
		XuatHocSinh(dhs[i]);
	}
}
void GhiDanhSachHocSinhXuongFile(string fileout, HocSinh dhs[], int n) {
	fstream fout(fileout, ios_base::out);
	if (fout.fail())
		return;
	else {
		fout << n<<endl;
		for (int i = 0; i < n; i++) {
			fout << dhs[i].ten << endl;
			fout << dhs[i].lop << endl;
			fout << dhs[i].diem << endl;
		}
	}
	fout.close();
}
void DocDanhSachHocSinhTuFile(string filein, HocSinh dhs[], int &n) {
	fstream fin(filein, ios_base::in);
	if (fin.fail())
		return;
	else {
		string c;
		getline(fin, c);
		n = stoi(c);
		for (int i = 0; i < n; i++) {
			getline(fin,dhs[i].ten);
			getline(fin,dhs[i].lop);
			string diemtemp;
			getline(fin, diemtemp);
			dhs[i].diem=stoi(diemtemp);
		}
	}
	fin.close();
}