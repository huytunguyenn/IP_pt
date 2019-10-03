#include <iostream>
using namespace std;
//	Nhập bán kính và của hai hình tròn r1 và r2 khoảng cách d giữa tâm hai
//	đường tròn(r1, r2 và d là số nguyên dương).Cho biết vị trí tương đối giữa
//	hai hình tròn này : tách rời, tiếp xúc ngoài, giao nhau, tiếp xúc trong, bao
//	nhau hay chồng khớp lên nhau.

int main()
{
	float r1, r2, d;
	cout << "Nhap ban kinh r1: ";
	cin >> r1;
	cout << "Nhap ban kinh r2: ";
	cin >> r2;
	cout << "Nhap khoang cach r1 va r2: ";
	cin >> d;
	if (d == 0 || r1 == 0 || r2 == 0)
	{
		cout << "Vui long nhap so lieu 1 cach nghiem tuc!" << endl;
	}
	else if (d > r1 + r2)
	{
		cout << "Hai hinh tron tach roi" << endl;
	}
	else if (d == r1 + r2)
	{
		cout << "Hai hinh tron tiep xuc ngoai" << endl;
	}
	else if (d<r1 + r2 && d>abs(r1 - r2))
	{
		cout << "Hai hinh tron giao nhau" << endl;
	}
	else if (d == abs(r1 - r2))
	{
		cout << "Hai hinh tron tiep xuc trong" << endl;
	}
	else if (d < abs(r1 - r2))
	{
		cout << "Hai hinh tron bao nhau" << endl;
	}
	system("pause");
	return 0;
}