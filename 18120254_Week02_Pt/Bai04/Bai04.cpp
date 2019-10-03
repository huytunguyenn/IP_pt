#include <iostream>
using namespace std;
// Nhập 4 số nguyên a, b, c và d. Hãy sắp xếp giá trị của 4 số nguyên này theo thứ tự tăng dần.
int main()
{
	int a, b, c, d,temp;
	cout << "Nhap 4 so nguyen: ";
	cin >> a >> b >> c >> d;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (a > d)
	{
		temp = a;
		a = d;
		d = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (b > d)
	{
		temp = b;
		b = d;
		d = temp;
	}
	if (c > d)
	{
		temp = c;
		c = d;
		d = temp;
	}
	cout << a <<", "<< b<<", "<< c <<", "<< d<<endl;
	system("pause");
	return 0;
}



