#include <iostream>
using namespace std;
#define PI 3.14159265359
//  Tính diện tích hình sau (phần được tô xám). Biết rằng các tam giác thành phần là tam giác đều và được vẽ đối xứng.Dữ liệu đầu vào là chiều dài cạnh tam giác đều và bán kính hình tròn.
void main()
{
	float cd, r;
	cout << "Nhap vao chieu dai canh tam giac deu: ";
	cin >> cd;
	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> r;
	cout << "Dien tich: " << 3 * cd*cd*sqrt(3) / 4 + r*r*PI / 2 << endl;
	system("pause");
}