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
void XayDungB(int a[][MAX],int m,int n) {
	int b[MAX][MAX];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int dem = 0;
			for (int k = -1; k <= 1; k++) { // dịch chuyển xung quanh phần tử đang xét
				for (int l = -1; l <= 1; l++) {
					if (k == 0 && l == 0)
						continue; // bỏ qua chính nó
					else if ((i + k >= 0) && (i + k < m) && (j + l >= 0) && (j + l < n) && (a[i + k][j + l] %2 == 0))
						dem++;
				}
			}
			b[i][j] = dem;
		}
	}
	cout << endl<<"Ma tran B: " << endl;
	Xuat(b, m, n);
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
			cout << "3. Xay dung ma tran B tu ma tran A sao cho B[i][j]= so luong phan tu chan xung quanh A[i][j]" << endl;
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
			cout << endl << "Ma tran A: " << endl;
			Xuat(a, m, n);
			XayDungB(a, m, n);
			break;
		}
		}
		system("pause");
	} while (choice != 0);

}