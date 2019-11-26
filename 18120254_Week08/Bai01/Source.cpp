#include "Header.h"
void Nhap(int a[][MAX], int& m, int& n) {
	do {
		cout << "Nhap so dong/ cot: ";
		cin >> m;
		n = m;
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
int Tong(int a[][MAX], int m, int n) {
	int tong = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			tong += a[i][j];
		}
	}
	return tong;
}
bool LaSNT(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int DemSNT(int a[][MAX], int m, int n) {
	int dem = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (LaSNT(a[i][j]) == true)
				dem++;
		}
	}
	return dem;
}
int DemX(int a[][MAX], int m, int n, int x) {
	int dem = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == x)
				dem++;
		}
	}
	return dem;
}
int TongKhongAm(int a[][MAX], int m, int n) {
	int tong = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] >= 0)
				tong += a[i][j];
		}
	}
	return tong;
}
int TongDuongCheoChinh(int a[][MAX], int m, int n) {
	int tong = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				tong += a[i][j];
		}
	}
	return tong;
}
bool KiemTraDuongCheoChinhTang(int a[][MAX], int m, int n) {
	int i, j;
	for (i = 0, j = 0; i < m && j < n; i++, j++) {
		if (a[i][j] > a[i + 1][j + 1])
			return false;
	}
	return true;
}
int TongDuongCheoPhu(int a[][MAX], int n) { // duong cheo phu: dong+cot=n-1
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i][n - 1 - i];
	}
	return tong;
}
void SapXepTangDong(int a[][MAX], int m, int n) {
	for (int k = 0; k < m; k++) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = n - 1; j > i; j--) {
				if (a[k][j] < a[k][j - 1])
				{
					int temp = a[k][j];
					a[k][j] = a[k][j - 1];
					a[k][j - 1] = temp;
				}
			}
		}
	}
}
int MaxMaTran(int a[][MAX], int m, int n) {
	int max = a[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}
void MaxDong(int a[][MAX], int m, int n) {
	int max;
	for (int i = 0; i < m; i++) {
		max = a[i][0];
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		cout << "Max tren dong thu " << i + 1 << ": " << max << endl;
	}
}
void MaxCot(int a[][MAX], int m, int n) {
	int max;
	for (int j = 0; j < n; j++) {
		max = a[0][j];
		for (int i = 0; i < m; i++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		cout << "Max tren cot thu " << j + 1 << ": " << max << endl;
	}
}
int Max1Dong(int a[][MAX],int n, int i,int &chisodong,int &chisocot) {
	int max;
	max = a[i][0];
	chisodong = i;
	chisocot = 0;
	for (int j = 0; j < n; j++) {
		if (a[i][j] > max) {
			max = a[i][j];
			chisodong = i;
			chisocot = j;
		}
	}
	return max;
}
void MoveMaxVeDuongCheoChinh(int a[][MAX],int m,int n) {
	int max,chisodong,chisocot;
	for (int i = 0; i < m; i++) {
		max = Max1Dong(a, n, i,chisodong,chisocot);
		a[chisodong][chisocot] = a[i][i];
		a[i][i] = max;
}
}
void Menu(int a[][MAX], int& m, int& n) {
	int lenh;
	do {
		do {
			system("cls");
			cout << "== MA TRAN VUONG ==" << endl;
			cout << "0. Thoat" << endl;
			cout << "1. Nhap" << endl;
			cout << "2. Xuat" << endl;
			cout << "3. Tinh tong phan tu tren mang" << endl;
			cout << "4. Dem so lan xuat hien 1 phan tu x bat ky" << endl;
			cout << "5. Dem so lan xuat hien cua cac so nguyen to" << endl;
			cout << "6. Tinh tong cac phan tu khong am" << endl;
			cout << "7. Tinh tong cac phan tu tren duong cheo chinh" << endl;
			cout << "8. Kiem tra phan tu tren duong cheo chinh co tang khong" << endl;
			cout << "9. Tinh tong cac phan tu tren duong cheo phu" << endl;
			cout << "10. Sap xep cac phan tu tren mang tang dan tren tung dong" << endl;
			cout << "11. Tim phan tu lon nhat tren tung dong, tung cot va toan ma tran" << endl;
			cout << "12. Tim va dua phan tu lon nhat tren moi dong ve vi tri nam tren duong cheo chinh" << endl;
			cout << "Lua chon: ";
			cin >> lenh;
			if (!(lenh >= 0 && lenh < 13)) {
				cout << "Nhap lai" << endl;
				system("pause");
			}
		} while (!(lenh >= 0 && lenh < 13));
		switch (lenh)
		{
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
			cout << "Tong: " << Tong(a, m, n) << endl;
			break;
		}
		case 4: {
			Xuat(a, m, n);
			int x;
			cout << "Nhap x: ";
			cin >> x;
			cout << "So phan tu x xuat hien: " << DemX(a, m, n, x) << endl;
			break;
		}
		case 5: {
			Xuat(a, m, n);
			cout << "So phan tu nguyen to xuat hien: " << DemSNT(a, m, n) << endl;
			break;
		}
		case 6: {
			Xuat(a, m, n);
			cout << "Tong phan tu khong am: " << TongKhongAm(a, m, n) << endl;
			break;
		}
		case 7: {
			Xuat(a, m, n);
			cout << "Tong duong cheo chinh: " << TongDuongCheoChinh(a, m, n) << endl;
			break;
		}
		case 8: {
			Xuat(a, m, n);
			if (KiemTraDuongCheoChinhTang(a, m, n) == true)
				cout << "Duong cheo chinh tang" << endl;
			else
				cout << "Duong cheo chinh khong tang" << endl;
			break;
		}
		case 9: {
			Xuat(a, m, n);
			cout << "Tong tren duong cheo phu: " << TongDuongCheoPhu(a, n) << endl;
			break;
		}
		case 10: {
			Xuat(a, m, n);
			SapXepTangDong(a, m, n);
			cout << "Sau khi sap xep tang tren tung dong: " << endl;
			Xuat(a, m, n);
			break;
		}
		case 11: {
			Xuat(a, m, n);
			MaxDong(a, m, n);
			MaxCot(a, m, n);
			cout << "Max ma tran: " << MaxMaTran(a, m, n) << endl;
			break;
		}
		case 12: {
			Xuat(a, m, n);
			MoveMaxVeDuongCheoChinh(a, m, n);
			cout << "Sau khi di chuyen: " << endl;
			Xuat(a, m, n);
			break;
		}
		}
		system("pause");
	} while (lenh != 0);
}