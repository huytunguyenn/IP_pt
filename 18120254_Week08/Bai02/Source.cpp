#include"Header.h"
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
void Cong2MaTran(int a[][MAX], int m, int n, int b[][MAX], int k, int l) {
	int kq[MAX][MAX];
	if (m == k && k==l) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				kq[i][j] = a[i][j] + b[i][j];
			}
		}
		cout <<endl<< "== MA TRAN TONG ==" << endl;
		Xuat(kq, m, n);
	}
	else {
		cout << "Khong the cong 2 ma tran khong cung cap" << endl;
		return;
	}
}
void Tich2MaTran(int a[][MAX], int m, int n, int b[][MAX], int k, int l) {
	// [A]mp x [B]pn = [KQ]mn
	// truong hop nay thi p=n=k
	int kq[MAX][MAX];
	if (n == k) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < l; j++) {
				kq[i][j] = 0;
				//kq[i][j]=tong Aik*Bkj		(k=1->p)
				for (int k = 0; k < n; k++) {
					kq[i][j] += a[i][k] * b[k][j];
				}
			}
		}
		cout << endl << "== MA TRAN TICH ==" << endl;
		Xuat(kq,m,l);
	}
	else {
		cout << "Khong the nhan 2 ma tran" << endl;
		return;
	}
}
void Menu(int a[][MAX], int &m, int &n, int b[][MAX], int &k, int &l) {
	int choice;
	do {
		do {
			system("cls");
			cout << "== MA TRAN VUONG == " << endl;
			cout << "0. Thoat" << endl;
			cout << "1. Nhap 2 ma tran" << endl;
			cout << "2. Xuat 2 ma tran" << endl;
			cout << "3. Tinh tong 2 ma tran" << endl;
			cout << "4. Tinh tich 2 ma tran" << endl;
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
			cout << "== MA TRAN THU NHAT ==" << endl;
			Nhap(a, m, n);
			cout << "== MA TRAN THU HAI ==" << endl;
			Nhap(b, k, l);
			break;
		}
		case 2: {
			cout << "== MA TRAN THU NHAT ==" << endl;
			Xuat(a, m, n);
			cout << "== MA TRAN THU HAI ==" << endl;
			Xuat(b, k, l);
			break;
		}
		case 3: {
			cout << "== MA TRAN THU NHAT ==" << endl;
			Xuat(a, m, n);
			cout << "== MA TRAN THU HAI ==" << endl;
			Xuat(b, k, l);
			Cong2MaTran(a, m, n, b, k, l);
			break;
		}
		case 4: {
			cout << "== MA TRAN THU NHAT ==" << endl;
			Xuat(a, m, n);
			cout << "== MA TRAN THU HAI ==" << endl;
			Xuat(b, k, l);
			Tich2MaTran(a, m, n, b, k, l);
			break;
		}
		}
		system("pause");
	} while (choice != 0);

}