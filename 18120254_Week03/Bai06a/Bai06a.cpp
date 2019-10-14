#include <iostream>
using namespace std;
//Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + 3 + …… + n > 1000.
int main()
{
	int kq = 0;
	for (int i=1;i<1000;i++)
	{
		kq += i;
		if (kq > 1000)
		{
			cout << "So nguyen duong n nho nhat sao cho 1 + 2 + 3 +...+ n > 1000 la: " << i<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}