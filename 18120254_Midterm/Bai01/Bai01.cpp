// Nguyen Huy Tu -18120254
#include <iostream>
using namespace std;
//prototype
void Nhap(int& n);
void timSoChinhPhuong(int n);
//main
int main() {
	int n;
	Nhap(n);
	timSoChinhPhuong(n);
	system("pause");
	return 0;
}
//function
void Nhap(int& n) {
	do {
		system("cls");
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (!(n >= 9 && n <= 90000)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(n >= 9 && n <= 90000));
}
void timSoChinhPhuong(int n) {
	int tong = 0;
	int dem = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (j * j == i && j % 3 == 0) {
				dem++;
				tong += i;
				cout << i << "	";
			}
		}
	}
	cout << endl << "Co " << dem << " so chinh phuong" << endl;
	cout << "Tong cac so chinh phuong tim duoc la " << tong << endl;
}