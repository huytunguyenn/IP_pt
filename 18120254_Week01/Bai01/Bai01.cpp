#include <iostream>
using namespace std;
// Hoán đổi giá trị của hai số nguyên dương a và b mà không dùng thêm biến tạm
void main()
{
	int a, b;
	cout << "Nhap gia tri nguyen a: ";
	cin >> a;
	cout << "Nhap gia tri nguyen b: ";
	cin >> b;
	cout << "a = " << a << endl<< "b= "<<b <<endl;
	a += b;
	b = a - b;
	a -= b;
	cout << "Sau khi hoan doi: " << endl << "a= " << a << endl << "b= " << b << endl;
	system("pause");
}