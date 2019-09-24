#include <iostream>
using namespace std;
#define PI 3.14159265359
// Viết chương trình nhập vào bán kính của hình tròn. Tính và in ra chu vi, diện tích của hình tròn đó.
void main()
{
	float r;
	cout << "Nhap vao ban kinh: ";
	cin >> r;
	cout << "Chu vi hinh tron: " << 2 * r*PI<<endl;
	cout << "Dien tich hinh tron: " << r*r*PI << endl;
	system("pause");
}