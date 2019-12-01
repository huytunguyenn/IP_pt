#include "HocSinh.h"
void NhapHocSinh(HocSinh& hs) {
	cout << "Nhap ten: ";
	getline(cin, hs.Ten);
	cout << "Nhap diem: ";
	cin >> hs.Diem;
}
void XuatHocSinh(HocSinh hs) {
	cout << hs.Ten<<endl;
	cout << hs.Diem;
}
void NhapDanhSachHocSinh(DanhSachHocSinh& dshs) {
	cout << "Nhap so hoc sinh: ";
	cin >> dshs.n;
	for (int i = 0; i < dshs.n; i++) {
		cin.ignore(1);
		NhapHocSinh(dshs.arrHS[i]);
	}
}
void XuatDanhSachHocSinh(DanhSachHocSinh dshs) {
	cout << dshs.n << endl;
	for (int i = 0; i < dshs.n; i++) {
		XuatHocSinh(dshs.arrHS[i]);
		cout << endl;
	}
}
string TachTen(string name) {
	int n = name.length();
	string ten;
	for (int i = n-1; i >= 0; i--) {
		if (name[i] == ' ')
			break;
		else
			ten.push_back(name[i]);
	}
	return ten;
}
string DaoNguocTen(string name) {
	string ten = TachTen(name);
	int n = ten.length();
	for (int i = 0; i < n/2; i++) {
		char temp = ten[i];
		ten[i] = ten[n - i - 1];
		ten[n - i - 1] = temp;
	}
	return ten;
}
void SapXepTen(DanhSachHocSinh& dshs) {
	for (int i = 0; i < dshs.n-1; i++) {
		for (int j = i + 1; j < dshs.n; j++) {
			if (DaoNguocTen(dshs.arrHS[i].Ten)> DaoNguocTen(dshs.arrHS[j].Ten)) {
				HocSinh temp;
				temp = dshs.arrHS[i];
				dshs.arrHS[i] = dshs.arrHS[j];
				dshs.arrHS[j] = temp;
			}
		}
	}
}
void LietKeTen(DanhSachHocSinh dshs) {
	SapXepTen(dshs);
	int dem_lap = 1;
	int loai_ten = 0;
	for (int i = 1; i < dshs.n; i++) {
		if (DaoNguocTen(dshs.arrHS[i].Ten) == DaoNguocTen(dshs.arrHS[i - 1].Ten))
			dem_lap++;
		else {
			loai_ten++;
			cout << DaoNguocTen(dshs.arrHS[i - 1].Ten) << endl;
			dem_lap = 1; //reset biến đếm
		}
	}
	loai_ten++;
	cout << DaoNguocTen(dshs.arrHS[dshs.n - 1].Ten) << endl;
	cout << "Co " << loai_ten << " loai ten khac nhau" << endl;

}
float Max2(float a, float b) {
	return (a > b) ? a : b;
}
float Min2(float a, float b) {
	return (a < b) ? a : b;
}
float Max3(float a, float b, float c) {
	return a > Max2(b, c) ? a : Max2(b, c);
}
void TraoHocBong(const DanhSachHocSinh dshs) {
	float maxdiem1 = Max3(dshs.arrHS[0].Diem, dshs.arrHS[1].Diem, dshs.arrHS[2].Diem);
	float maxdiem2, maxdiem3;
	if (maxdiem1 == dshs.arrHS[0].Diem) {
		maxdiem2 = Max2(dshs.arrHS[1].Diem, dshs.arrHS[2].Diem);
		maxdiem3 = Min2(dshs.arrHS[1].Diem, dshs.arrHS[2].Diem);
	}
	else if (maxdiem1 == dshs.arrHS[1].Diem) {
		maxdiem2 = Max2(dshs.arrHS[0].Diem, dshs.arrHS[2].Diem);
		maxdiem3 = Min2(dshs.arrHS[0].Diem, dshs.arrHS[2].Diem);
	}
	else {
		maxdiem2 = Max2(dshs.arrHS[0].Diem, dshs.arrHS[1].Diem);
		maxdiem3 = Min2(dshs.arrHS[0].Diem, dshs.arrHS[1].Diem);
	}
	for (int i=3;i<dshs.n;i++) {
		if (dshs.arrHS[i].Diem > maxdiem1) {
			maxdiem3 = maxdiem2;
			maxdiem2 = maxdiem1;
			maxdiem1 = dshs.arrHS[i].Diem;
		}
		else if (dshs.arrHS[i].Diem > maxdiem2) {
			maxdiem3 = maxdiem2;
			maxdiem2 = dshs.arrHS[i].Diem;
		}
		else if (dshs.arrHS[i].Diem > maxdiem3) {
			maxdiem3 = dshs.arrHS[i].Diem;
		}
	}
	//1st
	for (int i = 0; i < dshs.n; i++) {
		if (dshs.arrHS[i].Diem == maxdiem1)
			cout << dshs.arrHS[i].Ten<<endl;
	}
	//2nd
	for (int i = 0; i < dshs.n; i++) {
		if (dshs.arrHS[i].Diem == maxdiem2)
			cout << dshs.arrHS[i].Ten << endl;
	}
	//3rd
	for (int i = 0; i < dshs.n; i++) {
		if (dshs.arrHS[i].Diem == maxdiem3)
			cout << dshs.arrHS[i].Ten << endl;
	}
}
void Menu() {
	int luachon;
	DanhSachHocSinh dshs;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap danh sach hoc sinh" << endl;
			cout << "2. Xuat danh sach hoc sinh" << endl;
			cout << "3. Sap xep danh sach hoc sinh theo alphabet" << endl;
			cout << "4. Liet ke ten khac nhau" << endl;
			cout << "5. Trao hoc bong" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon >= 0 && luachon < 6)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon>=0&&luachon<6));
		switch (luachon)
		{
		case 0: {
			break;
		}
		case 1: {
			NhapDanhSachHocSinh(dshs);
			break;
		}
		case 2: {
			XuatDanhSachHocSinh(dshs);
			break;
		}
		case 3: {
			SapXepTen(dshs);
			cout << "Sau khi sap xep" << endl;
			for (int i = 0; i < dshs.n; i++) {
				cout << dshs.arrHS[i].Ten << endl;
			}
			break;
		}
		case 4: {
			LietKeTen(dshs);
			break;
		}
		case 5: {
			TraoHocBong(dshs);
			break;
		}
		}
		system("pause");
	} while (luachon != 0);
}