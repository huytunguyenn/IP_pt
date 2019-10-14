#include <iostream>
using namespace std;
//In ra tất cả các số nguyên tố nhỏ hơn số n được nhập vào từ bàn phím
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac so nguyen to nho hon n: " << endl;
	int so = 1;
	while (so < n) {
		int dem = 0;
		int i = 2;
		while (i <= so / 2) {
			if (so%i == 0)
				dem++;
			i++;
		}
		if (dem == 0 && so != 1)
			cout << so << "   ";
		so++;
	}
	cout << endl;
	system("pause");
	return 0;
}