#include <iostream>
using namespace std;
// Tính tiền đi taxi từ số km nhập vào. Biết:
//  	1. 1 km đầu giá 15000đ
//  	2. Từ km thứ 2 đến km thứ 5 giá 13500đ
//  	3. Từ km thứ 6 trở đi giá 11000đ
// Nếu trên 120km được giảm 10 % tổng tiền.
int main()
{
	float tien, km;
	cout << "Nhap so km: ";
	cin >> km;
	if (km <= 1)
	{
		tien = 15000 * km;
		cout<<"Ban phai tra 15000*"<<km<<" = "<<tien<<" VND"<<endl;
	}
	else if (km > 1 && km <= 6)
	{
		tien = 15000 + 13500 * (km - 1);
		cout << "Ban phai tra 15000 + 13500*" << km - 1 << " = " << tien <<" VND"<<endl;
	}
	else
	{
		if (km>120)
		{
			tien = 15000 + 13500 * 5 + 11000 * (km - 6);
			tien *= 0.9;
			cout << "Ban phai tra 90%*(15000 + 13500*5 +11000*" << km - 6 << ") = " << tien <<" VND"<< endl;
		}
		else
		{
			tien = 15000 + 13500 * 5 + 11000 * (km - 6);
			cout << "Ban phai tra 15000 + 13500*5 +11000*" << km - 6 << " = " << tien <<" VND"<< endl;
		}
	}
	system("pause");
	return 0;
}