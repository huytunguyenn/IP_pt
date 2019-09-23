#include <iostream>
using namespace std;
//Nhập vào 1 ký tự. Xuất ra màn hình ký tự đó và mã ASCII của nó.
void main()
{
	char c;
	cout << "Nhap vao 1 ki tu: ";
	cin >> c;
	cout << "Ky tu: " << c << endl;
	cout << "Ma ASCII: " << (int)c << endl;
	system("pause");
}