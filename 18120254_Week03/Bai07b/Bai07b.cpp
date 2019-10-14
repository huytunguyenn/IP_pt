#include <iostream>
using namespace std;
// Tìm ước số chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên dương.
int main() {
	int a, b;
	cout << "Nhap 2 so nguyen duong: ";
	cin >> a >> b;
	int x = a, y = b;
	while (x != y) {
		if (x > y)
			x -= y;
		else
			y -= x;
	}
	int ucln = x;
	int bcnn = (a*b) / ucln;
	cout << a << " va " << b << " co USCLN la " << ucln << ", BCNN la " << bcnn << endl;
	system("pause");
	return 0;
}