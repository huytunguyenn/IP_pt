//Viết chương trình tìm chữ số lớn nhất của số nguyên dương n.Ví dụ : n = 13483 thì
//chữ số lớn nhất của số n là 8.
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
int timChuSoLonNhat(int n);
//main
int main() {
	int n;
	nhapSoDuong(n);
	cout << "Chu so lon nhat cua " << n << " la " << timChuSoLonNhat(n)<<endl;
	system("pause");
	return 0;
}
//function
void nhapSoDuong(int &n) {
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (!(n >0))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >0));
}
int timChuSoLonNhat(int n) {
	int MAX = n % 10, sodu;
	while (n > 0) {
		sodu = n % 10;
		if (sodu > MAX)
			MAX = sodu;
		n /= 10;
	}
	return MAX;
}
