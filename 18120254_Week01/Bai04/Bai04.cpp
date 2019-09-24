#include <iostream>
using namespace std;
// Một hình chữ nhật có đặc điểm chiều dài bằng 1.5 lần chiều rộng.Viết chương trình nhập chu vi của hình, tính và in ra diện tích của hình chữ nhật.
void main()
{
	float cd,cr,cv;
	cout << "Nhap chu vi: ";
	cin >> cv;
	cr = cv / 5;
	cd = 1.5*cr;
	cout << "Dien tich: " << cd*cr<<endl;
	system("pause");
}