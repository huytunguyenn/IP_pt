#include <iostream>
using namespace std;
//Nhập chiều dài 2 cạnh của một hình chữ nhật. Tính và xuất ra chu vi, diện tích của hình chữ nhật đó.
void main()
{
	float cd, cr;
	cout << "Nhap chieu dai: ";
	cin >> cd;
	cout << "Nhap chieu rong: ";
	cin >> cr;
	cout << "Chu vi: " << 2*cd + 2*cr <<endl;
	cout << "Dien tich: " << cd * cr <<endl;
	system("pause");

}