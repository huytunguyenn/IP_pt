//Viết chương trình nhập vào 1 số nguyên n.Chuyển đổi n sang hệ nhị phân và xuất
//ra màn hình. (với giá trị n : -255 <= n <= 255)
#include <iostream>
#include <string>
using namespace std;
//prototype
void nhapSoNguyen(int &n);
int chuyenNhiPhan(int n);
//main
int main() {
	int n;
	nhapSoNguyen(n);
	cout << n << " co dang nhi phan la: ";
	chuyenNhiPhan(n);
	cout << endl;
	system("pause");
	return 0;
}
//function
int chuyenNhiPhan(int n) {
	if (n == 0)
		return 1;
	else
	{
		cout << n % 2;
		return chuyenNhiPhan(n / 2);
	}
}
void nhapSoNguyen(int &n) {
	do {
		cout << "Nhap so nguyen: ";
		cin >> n;
		if (!(n >= -255 && n <= 255))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >=-255&&n<=255));
}