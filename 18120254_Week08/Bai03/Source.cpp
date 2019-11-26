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
void SapXep1(int a[][MAX], int m, int n) {
	for (int k = 0; k < m*n-1; k++) {
		for (int l = k + 1; l < m*n;l++) {
			if (a[k / n][k%n] > a[l / n][l%n]) {
				int temp = a[k / n][k%n];
				a[k / n][k%n] = a[l / n][l%n];
				a[l / n][l%n] = temp;
			}
		}
	}
}
void SapXep2(int a[][MAX], int m, int n) {
	int min, vitrimin;
	for (int k = 0; k < m*n - 1; k++) {
		min = a[k/n][k%n];
		vitrimin = k;
		for (int l = k + 1; l < m*n;l++) {
			if (min > a[l/n][l%n]) {
				min = a[l/n][l%n];
				vitrimin = l;
			}
		}
		a[vitrimin/n][vitrimin%n] = a[k/n][k%n];
		a[k/n][k%n] = min;
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
			cout << "3. Sap xep ma tran tang dan tu tren xuong duoi, tu trai qua phai (Cach 1)" << endl;
			cout << "4. Sap xep ma tran tang dan tu tren xuong duoi, tu trai qua phai (Cach 2)" << endl;
			cout << "Lua chon cua ban: ";
			cin >> choice;
			if (!(choice >= 0 && choice < 5)) {
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
			SapXep1(a, m, n);
			cout <<endl<< "Sau khi sap xep" << endl;
			Xuat(a, m, n);
			break;
		}
		case 4: {
			Xuat(a, m, n);
			SapXep2(a, m, n);
			cout << endl << "Sau khi sap xep" << endl;
			Xuat(a, m, n);
			break;
		}
		}
		system("pause");
	} while (choice != 0);

}