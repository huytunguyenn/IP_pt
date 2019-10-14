#include <iostream>
using namespace std;
// 1!+2!+...+n!
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	double kq = 0;
	int nhan = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i == n)
			cout << i<<"!";
		else
			cout << i << "!+ ";
		nhan *= i;
		kq += nhan;
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}