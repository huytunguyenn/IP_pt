// Nguyen Huy Tu -18120254
#include <iostream>
using namespace std;
//prototype
void Nhap(int& n);
void tinhTongLe(int n);
//main
int main() {
	int n;
	Nhap(n);
	tinhTongLe(n);
	system("pause");
	return 0;
}
//function
void tinhTongLe(int n) {
	int sodu;
	int tong = 0;
	int dem = 1;
	while (n > 0) {
		sodu = n % 10;
		n /= 10;
		if (dem % 2 != 0)
			tong += sodu;
		dem++;
	}
	cout << tong<<endl;
}
void Nhap(int& n) {
	do {
		system("cls");
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (!(n >= 1000)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(n >= 1000));
}