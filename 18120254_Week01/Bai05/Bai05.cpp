#include <iostream>
using namespace std;
#define PI 3.14159265359
// Tính diện tích bề mặt và thể tích các hình sau
//		a) Khối hộp : Nhập vào chiều cao, chiều sâu và chiều rộng.
//		b) Khối lập phương : Nhập vào cạnh
//		c) Khối trụ tròn : Nhập vào bán kính và chiều cao.
void main()
{
	float cc, cr, cs;
	cout << "KHOI HOP" << endl;
	cout << "Nhap vao chieu cao: ";
	cin >> cc;
	cout << "Nhap vao chieu rong: ";
	cin >> cr;
	cout << "Nhap vao chieu sau: ";
	cin >> cs;
	cout << "=> Dien tich be mat: " << 2 * cr*cs + 2 * cc*cs + 2 * cc*cr<<endl<<"=> The tich: "<<cr*cc*cs <<endl;
	float canh;
	cout << "KHOI LAP PHUONG" << endl;
	cout << "Nhap vao canh: ";
	cin >> canh;
	cout << "=> Dien tich be mat: " << 6 * canh*canh << endl<< "=> The tich: " << canh*canh*canh << endl;
	float r, h;
	cout << "KHOI TRU TRON" << endl;
	cout << "Nhap vao ban kinh: ";
	cin >> r;
	cout << "Nhap vao chieu cao: ";
	cin >> h;
	cout << "=> Dien tich be mat: " << 2*r*r*PI+2*2*r*PI*h <<endl<< "=> The tich: " <<r*r*PI*h << endl;
	system("pause");
}