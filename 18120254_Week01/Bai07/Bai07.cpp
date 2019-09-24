#include <iostream>
using namespace std;
#define PI 3.14159265359
// Nhập diện tích của một hình tròn. Tính và in ra bán kính của hình tròn đó.
void main()
{
	float s;
	cout << "Nhap dien tich hinh tron: ";
	cin >> s;
	cout << "Ban kinh hinh tron: " << sqrt(s / PI) << endl;
	system("pause");
}