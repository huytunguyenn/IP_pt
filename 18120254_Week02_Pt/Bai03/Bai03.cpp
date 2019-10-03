#include <iostream>
using namespace std;
// Giải phương trình bậc hai ax^2 + bx + c = 0.
int main()
{
	float a, b, c, delta, x,x2;
	cout << "Giai phuong trinh bac hai ax^2 + bx + c = 0." << endl;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "Phuong trinh vo so nghiem" << endl;
			else
				cout << "Phuong trinh vo nghiem" << endl;
		}
		else
		{
			x = -c / b;
			cout << "Phuong trinh co mot nghiem x= " << x << endl;
		}
	}
	else 
	{
		delta = b*b-4*a*c;
		if (delta > 0)
		{
			x = (-b + sqrt(delta)) / (2 * a);
			x2= (-b - sqrt(delta)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem phan biet x1= " << x << ", x2= " << x2<<endl;
		}
		else if (delta == 0)
		{
			x = -b / (2*a);
			cout << "Phuong trinh co nghiem kep x1= x2= " << x << endl;
		}
		else
			cout << "Phuong trinh vo nghiem" << endl;
	}
	system("pause");
	return 0;
}