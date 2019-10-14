// Viết chương trình tìm bội chung nhỏ nhất của 2 số nguyên dương a và b
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
int timUCLN(int a, int b);
int timBCNN(int a, int b);
//main
int main() {
	int a, b;
	nhapSoDuong(a);
	nhapSoDuong(b);
	cout << "Boi chung lon nhat cua " << a << " va " << b << " la " << timBCNN(a, b) << endl;
	system("pause");
	return 0;
}
//function
int timUCLN(int a, int b) {
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
int timBCNN(int a, int b) {
	return (a*b) / timUCLN(a, b);
}
void nhapSoDuong(int &n) {
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (!(n > 0))
			cout << "Vui long nhap lai" << endl;
	} while (!(n > 0));
}
