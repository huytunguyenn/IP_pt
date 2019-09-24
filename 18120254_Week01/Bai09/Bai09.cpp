#include <iostream>
using namespace std;
// Giả sử lãi suất mỗi tháng của ngân hàng là q (ví dụ nếu lãi suất 1% thì q = 0.01) với hình thức gởi tiết kiệm lãi nhập vốn. Hãy nhập vào số tiền gửi M, số tháng gửi n và lãi suất q, tính và in ra tổng số tiền lãi.
void main()
{
	int M,n;
	float q;
	cout << "Nhap so tien gui: ";
	cin >> M;
	cout << "Nhap so thang gui: ";
	cin >> n;
	cout << "Nhap lai suat: ";
	cin >> q;
	cout << "So tien lai: " << M*pow((1 + q),n) - M<<endl;
	system("pause");
}