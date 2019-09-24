#include <iostream>
using namespace std;
// Nhập vào số nguyên dương n và số thực x. Tính và in ra(x^2 + 1)^n
void main()
{
	int n;
	float x,kq=1;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	cout << "Nhap so thuc x: ";
	cin >> x;
	for (int i=0;i<n;i++)
	{
		kq *= (x*x + 1);
	}
	cout << "(x^2 + 1)^n= "<<kq << endl;
	system("pause");
}