#include <iostream>
using namespace std;
// Hoán đổi giá trị của ba số nguyên dương a, b và c mà không dùng thêm biến tạm.
void main()
{
	int a, b,c;
	cout << "Nhap gia tri nguyen a: ";
	cin >> a;
	cout << "Nhap gia tri nguyen b: ";
	cin >> b;
	cout << "Nhap gia tri nguyen c: ";
	cin >> c;
	cout << "a = " << a << endl << "b= " << b << endl << "c= " << c << endl;
	a = a + b + c;
	b = a - (b + c);	// b<-a
	c = a - (b + c);	// c<-b
	a = a - (b + c);	// a<-c
	cout << "Sau khi hoan doi: " << endl << "a= " << a << endl << "b= " << b << endl<<"c= "<<c<<endl; 
	system("pause");
}