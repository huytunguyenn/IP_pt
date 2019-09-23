#include <iostream>
using namespace std;
//Nhập 2 số nguyên. Xuất ra màn hình tổng, hiệu, tích, thương của hai số đó.
void main()
{
	int a, b;
	cout << "Nhap vao 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tong: " << a + b << endl;
	cout << "Hieu: " << a - b << endl;
	cout << "Tich: " << a * b << endl;
	cout << "Thuong: " << (float)a / b << endl;
	system("pause");
}