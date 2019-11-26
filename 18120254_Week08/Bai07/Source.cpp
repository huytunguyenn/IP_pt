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
void SapXepTongNhoTrenTongLonDuoi(int a[][MAX], int m, int n) {
	int b[MAX]; // sử dụng mảng b lưu giá trị tổng các dòng của a
	int k = 0;
	for (int i = 0; i < m; i++) {
		int tong = 0;
		for (int j = 0; j < n; j++) {
			tong += a[i][j];
		}
		b[k++] = tong;
	}
	for (int i = 0; i < k-1;i++) { // sap xep mang b
		for (int j = i + 1; j < k;j++) {
			if (b[i] > b[j]) { // hoan vi trong b
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
				for (int k = 0; k < n; k++) { // hoan vi 2 dong trong a
					temp = a[i][k];
					a[i][k] = a[j][k];
					a[j][k] = temp;
				}
			}
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
			cout << "3. Sap xep ma tran sao cho dong co tong nho nam o tren, dong co tong lon nam o duoi" << endl;
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
			SapXepTongNhoTrenTongLonDuoi(a,m,n);
			cout << endl << "Sau khi sap xep: " << endl;
			Xuat(a, m, n);
			break;
		}
		}
		system("pause");
	} while (choice != 0);

}