// Viết chương trình Hoán vị giá trị 2 số nguyên a và b
#include <iostream>
using namespace std;
//prototype
void nhapSoNguyen(int &n);
void hoanviSoNguyen(int &a, int&b);
//main
int main() {
	int a, b;
	nhapSoNguyen(a);
	nhapSoNguyen(b);
	hoanviSoNguyen(a, b);
	cout << "Sau khi hoan vi: " << a << "  " << b << endl;
	system("pause");
	return 0;
}
//function
void nhapSoNguyen(int &n) {
	cout << "Nhap 1 so nguyen: ";
	cin >> n;
}
void hoanviSoNguyen(int &a, int&b) {
	int temp = a;
	a = b;
	b = temp;
}