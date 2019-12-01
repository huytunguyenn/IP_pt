#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap chuoi: ";
	getline(cin, s);
}
int DemKyTu(string s, char c) {
	int dem = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c)
			dem++;
	}
	return dem;
}
void Menu() {
	int luachon;
	string s;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap chuoi" << endl;
			cout << "2. Dem ky tu xuat hien trong chuoi" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon >= 0 && luachon < 3)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon >= 0 && luachon < 3));
		switch (luachon)
		{
		case 0: {
			break;
		}
		case 1: {
			cin.ignore(1);
			Nhap(s);
			break;
		}
		case 2: {
			char c;
			cout << s << endl;
			cout << "Nhap ky tu muon tim: ";
			cin >> c;
			cout << "Ky tu xuat hien: " << DemKyTu(s,c) << " lan trong chuoi" << endl;
			break;
		}
		default:
			break;
		}
		system("pause");
	} while (luachon != 0);
}
