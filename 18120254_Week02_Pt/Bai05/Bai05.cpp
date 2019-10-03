#include <iostream>
using namespace std;
// Nhập 4 số nguyên a, b, c và d. Tìm số có giá trị nhỏ nhất (min).
int main()
{
	int a, b, c, d,min;
	cout << "Nhap 4 so nguyen: ";
	cin >> a >> b >> c >> d;
	min = a;
	if (b < a)
		min = b;
	if (c < a)
		min = c;
	if (d < a)
		min = d;
	cout << "Gia tri nho nhat: " << min<<endl;
	system("pause");
	return 0;
}