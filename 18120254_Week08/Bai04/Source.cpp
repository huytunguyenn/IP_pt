#include "Header.h"
void Nhap(int a[][MAX], int& m, int& n) {
	do {
		cout << "Nhap so dong: ";
		cin >> m;
		cout << "Nhap so cot: ";
		cin >> n;
	} while (!(m > 0 && n > 0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Nhap vi tri [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[][MAX], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
bool CheckMinDong(int a[][MAX], int n, int i, int x) { // tim min cua hang i
	int min = a[i][0];
	for (int j = 0;j <n; j++) {
		if (a[i][j] <n)
			min = a[i][j];
	}
	if (x == min)
		return true;
	else
		return false;
}
bool CheckMaxCot(int a[][MAX],int m, int j,int x) { // tim max cua cot j
	int max = a[0][j];
	for (int i = 0; i < m; i++) {
		if (a[i][j] > max)
			max= a[i][j];
	}
	if (x == max)
		return true;
	else
		return false;
}
void DiemYenNgua(int a[][MAX], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (CheckMinDong(a, n, i, a[i][j]) == true && CheckMaxCot(a, m, j, a[i][j]) == true)
				cout << "Diem [" << i << "][" << j << "] =" << a[i][j] << " la diem yen ngua" << endl;
		}
	}
}
void Menu(int a[][MAX], int &m, int &n) {
	int choice;
	do {
		do {
			system("cls");
			cout << "== MA TRAN == " << endl;
			cout << "0. Thoat" << endl;
			cout << "1. Nhap ma tran" << endl;
			cout << "2. Xuat ma tran" << endl;
			cout << "3. Tim cac diem yen ngua" << endl;
			cout << "Lua chon cua ban: ";
			cin >> choice;
			if (!(choice >= 0 && choice < 4)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(choice >= 0 && choice < 5));
		switch (choice) {
		case 0: {
			break;
		}
		case 1: {
			Nhap(a, m, n);
			break;
		}
		case 2: {
			Xuat(a, m, n);
			break;
		}
		case 3: {
			Xuat(a, m, n);
			cout << endl << "Cac diem yen ngua:" << endl;
			DiemYenNgua(a, m, n);
			break;
		}
		}
		system("pause");
	} while (choice != 0);

}