#include <iostream>
using namespace std;
//Nhập chiều dài cạnh hình vuông. Tính và in ra chu vi, diện tích hình vuông đó.
void main()
{
	float cd;
	cout << "Nhap chieu dai canh hinh vuong: ";
	cin >> cd;
	cout << "Chu vi: " << cd *4<<endl;
	cout << "Dien tich: " << cd * cd<<endl;
	system("pause");
}