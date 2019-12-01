#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap so: ";
	getline(cin, s);
}
void NganCachSo(string &s) {
	int dem = 0;
	for (int i = s.length() - 1; i >= 0; i--) {
		dem++;
		if (dem % 3 == 0)
			s.insert(i,",");
	}
}
void Menu() {
	int luachon;
	string s;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap so" << endl;
			cout << "2. Xuat so co ngan cach"<<endl;
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
			cout << s << endl;
			NganCachSo(s);
			cout <<"Sau khi chuyen doi: "<< s << endl;
			break;
		}
		default:
			break;
		}
		system("pause");
	} while (luachon != 0);
}
