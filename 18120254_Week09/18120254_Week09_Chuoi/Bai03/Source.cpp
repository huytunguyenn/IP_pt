#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap chuoi: ";
	getline(cin, s);
}
void Xoa(string&s, int n,int i) {
    int	j = i + n;
	for (; i < s.length()-n; i++) {
		s[i] = s[j];
		j++;
	}
	cout << j;
	for (int k = j; k < s.length();k++) {
		s[k] = ' ';
	}
}
void Menu() {
	int luachon;
	string s;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap chuoi" << endl;
			cout << "2. Xoa n ky tu tai vi tri i trong chuoi" << endl;
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
			int n, i;
			cout << s << endl;
			do {
				cout << "Nhap vi tri can xoa: ";
				cin >> i;
				cout << "Nhap so ky tu can xoa: ";
				cin >> n;
			} while (!(n + i < s.length()));
			Xoa(s, n, i);
			cout << "Chuoi sau khi xoa: " << s<<endl;
			break;
		}
		default:
			break;
		}
		system("pause");
	} while (luachon != 0);
}
