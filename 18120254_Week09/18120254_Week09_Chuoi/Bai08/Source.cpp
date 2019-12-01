#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap chuoi: ";
	getline(cin, s);
}
void Menu() {
	int luachon;
	string s;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap chuoi" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon >= 0 && luachon < 6)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon >= 0 && luachon < 6));
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
		default:
			break;
		}
		system("pause");
	} while (luachon != 0);
}
