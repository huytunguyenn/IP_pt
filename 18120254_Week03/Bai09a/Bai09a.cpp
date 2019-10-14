#include <iostream>
using namespace std;
//In ra tất cả các số nguyên tố nhỏ hơn số n được nhập vào từ bàn phím
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac so nguyen to nho hon n: " << endl;
	for (int so=1;so<n;so++) {
		int dem = 0;
		for (int i=2;i<=so/2;i++) {
			if (so%i == 0) 
				dem++;
			}
		if (dem == 0&&so!=1)
			cout << so << "   ";
	}
	cout << endl;
	system("pause");
	return 0;
}