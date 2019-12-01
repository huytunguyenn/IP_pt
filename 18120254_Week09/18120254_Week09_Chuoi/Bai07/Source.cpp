#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap chuoi: ";
	getline(cin, s);
}
void Chen(string &s1,string s2, int vitri) {
	string begin_vitri, vitri_end;
	for (int i = 0; i < s1.length(); i++){
		if (i < vitri - 1)
			begin_vitri = begin_vitri + s1[i];
		else
			vitri_end = vitri_end + s1[i];
	}
	s1.clear();
	s1 = begin_vitri + s2 + vitri_end;
}
void Menu() {
	int luachon;
	string s1,s2;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap chuoi" << endl;
			cout << "2. Chen" << endl;
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
			Nhap(s1);
			Nhap(s2);
			break;
		}
		case 2: {
			int vitri;
			cout << "Nhap vi tri chen: ";
			cin >> vitri;
			Chen(s1, s2, vitri);
			cout << s1 << endl;
			break;
		}
		default:
			break;
		}
		system("pause");
	} while (luachon != 0);
}
