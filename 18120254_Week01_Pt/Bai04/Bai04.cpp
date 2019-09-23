#include <iostream>
#include <iomanip>
using namespace std;
//Nhập vào số thực x. Xuất ra giá trị biểu thức A = 3x3 – 2x2. Kết quả lấy 2 chữ số sau dấu phẩy thập phân.
void main()
{
	float x;
	cout << "Nhap vao 1 so thuc: ";
	cin >> x;
	cout << setiosflags(ios::showpoint) << setprecision(2)<<fixed;
	cout << "Gia tri bieu thuc A = 3x*3 -2x*2 = " << 3*x*x*x - 2*x*x <<endl;
	system("pause");
}