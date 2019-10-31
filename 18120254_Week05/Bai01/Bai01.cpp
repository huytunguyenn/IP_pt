//Sử dụng các hàm đã cài đặt, xây dựng chương trình mô phỏng máy tính bỏ túi đơn giản
#include <iostream>
using namespace std;
//prototype
float Cong(float a, float b);
float Tru(float a, float b);
float Nhan(float a, float b);
float Chia(float a, float b);
float LuyThua(float a, int x);
float CanBac(float a, int x);
void nhapSo(float& a);
void nhapLuyThua(float& a);
void nhapCan(float& a);
void Menu(int& luachon);
void mophongMayTinh(float a, float b, int luachon);
//main
int main() {
	int luachon;
	Menu(luachon);
	return 0;
}
//function
float Cong(float a, float b) {
	return a + b;
}
float Tru(float a, float b) {
	return a - b;
}
float Nhan(float a, float b) {
	return a * b;
}
float Chia(float a, float b) {
	return a / b;
}
float LuyThua(float a, int x) {
	return pow(a, x);
}
float CanBac(float a, int x) {
	if (x % 2 != 0 && a < 0)
		return -pow(-a, 1. / x);
	else
		return pow(a, 1. / x);
}
void nhapSo(float& a) {
	cout << "Nhap so: ";
	cin >> a;
}
void nhapLuyThua(float& a) {
	cout << "Nhap luy thua: ";
	cin >> a;
}
void nhapCan(float& a) {
	cout << "Nhap can: ";
	cin >> a;
}
void Menu(int& luachon) {
	do {
		do {
			system("cls");
			cout << "==== MAY TINH =====" << endl;
			cout << "1. Cong." << endl;
			cout << "2. Tru." << endl;
			cout << "3. Nhan." << endl;
			cout << "4. Chia." << endl;
			cout << "5. Luy Thua. " << endl;
			cout << "6. Can Bac. " << endl;
			cout << "7. Thoat. " << endl;
			cout << "Nhap lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon > 0 && luachon < 8)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon > 0 && luachon < 8));
		if (luachon == 7)
			break;
		float a, b;
		nhapSo(a);
		if (luachon == 5)
			nhapLuyThua(b);
		else if (luachon == 6)
			nhapCan(b);
		else
			nhapSo(b);
		mophongMayTinh(a, b, luachon);
		system("pause");
	} while (luachon != 7);

}
void mophongMayTinh(float a, float b, int luachon) {
	switch (luachon)
	{
	case 1:
		cout << a << " + " << b << " = " << Cong(a, b) << endl;
		break;
	case 2:
		cout << a << " - " << b << " = " << Tru(a, b) << endl;
		break;
	case 3:
		cout << a << " x " << b << " = " << Nhan(a, b) << endl;
		break;
	case 4:
		cout << a << " : " << int(b) << " = " << Chia(a, b) << endl;
		break;
	case 5:
		cout << a << "^" << int(b) << " = " << LuyThua(a, b) << endl;
		break;
	case 6:
		if (int(b) % 2 == 0 && a < 0||b==0)
			cout << "MATH ERROR" << endl;
		else
			cout << b << char(251) << a << " = " << CanBac(a, b) << endl;
		break;
	default:
		break;
	}
}