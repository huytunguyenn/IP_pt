//Viết chương trình hỗ trợ các chức năng sau đây :
//• Tối giản một phân số
//• Tính tổng 2 phân số, yêu cầu tối giản phân số kết quả
//• Tính tích 2 phân số, yêu cầu tối giản phân số kết quả
#include <iostream>
using namespace std;
//prototype
void nhapPhanSo(int&tu, int&mau);
int UCLN(int a, int b);
void RutGonPhanSo(int &tu, int &mau);
void congPhanSo(int tu1, int mau1, int tu2, int mau2);
void truPhanSo(int tu1, int mau1, int tu2, int mau2);
void Menu(int &luachon);
//main
int main() {
	int luachon;
	Menu(luachon);
	return 0;
}
//function
void nhapPhanSo(int&tu, int&mau) {
	do {
		cout << "Nhap tu so: ";
		cin >> tu;
		cout << "Nhap mau so: ";
		cin >> mau;
		if (mau == 0)
			cout << "Vui long nhap lai" << endl;
	} while (mau == 0);
	if (tu < 0 && mau < 0 || tu>0 && mau < 0) {
		tu = -tu;
		mau = -mau;
	}
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == b)
		return a;
	else if (a > b)
		return UCLN(a - b, b);
	else
		return UCLN(a, b - a);
}
void RutGonPhanSo(int &tu, int &mau)
{
	int x = UCLN(tu, mau);
	if ((tu > 0 && mau < 0) || (tu < 0 && mau < 0))
	{
		tu = -tu;
		mau = -mau;
	}
	tu /= x;
	mau /= x;
}
void congPhanSo(int tu1, int mau1, int tu2, int mau2) {
	int tukq, maukq;
	tukq = tu1 * mau2 + tu2 * mau1;
	maukq = mau1 * mau2;
	RutGonPhanSo(tukq, maukq);
	cout << tu1 << "/" << mau1 << " + " << tu2 << "/" << mau2 << " = " << tukq << "/" << maukq << endl;
}
void truPhanSo(int tu1, int mau1, int tu2, int mau2) {
	int tukq, maukq;
	tukq = tu1 * mau2 - tu2 * mau1;
	maukq = mau1 * mau2;
	RutGonPhanSo(tukq, maukq);
	cout << tu1 << "/" << mau1 << " - " << tu2 << "/" << mau2 << " = " << tukq << "/" << maukq << endl;
}
void Menu(int &luachon) {
	do {
		do {
			system("cls");
			cout << "=== PHEP TINH PHAN SO ===" << endl;
			cout << "1. Cong" << endl;
			cout << "2. Tru" << endl;
			cout << "3. Rut gon" << endl;
			cout << "4. Thoat" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon > 0 && luachon < 5)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon > 0 && luachon < 5));
		if (luachon == 4)
			break;
		int tu1, mau1, tu2, mau2;
		nhapPhanSo(tu1, mau1);
		if (luachon == 1) {
			nhapPhanSo(tu2, mau2);
			congPhanSo(tu1, mau1, tu2, mau2);
		}
		else if (luachon == 2) {
			nhapPhanSo(tu2, mau2);
			truPhanSo(tu1, mau1, tu2, mau2);
		}
		else if (luachon == 3) {
			cout << tu1 << "/" << mau1 << " = ";
			RutGonPhanSo(tu1, mau1);
			cout << tu1 << "/" << mau1 << endl;
		}
		system("pause");
	} while (luachon != 4);

}
