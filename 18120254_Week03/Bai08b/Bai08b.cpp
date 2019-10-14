#include <iostream>
using namespace std;
// Kiểm tra 1 số có phải là số nguyên tố hay không
int main() {
	int a;
	cout << "Nhap a: ";
	cin >> a;
	if (a < 2) {
		cout << a << " khong la so nguyen to" << endl;
		system("pause");
		return 0;
	}
	int dem = 0;
	int i = 2;
	while (i <= a/2) {
		if (a%i == 0)
			dem++;
		i++;
	}
	if (dem == 0)
		cout << a << " la so nguyen to" << endl;
	else
		cout << a << " khong la so nguyen to" << endl;
	system("pause");
	return 0;
}