#include <iostream>
using namespace std;
// 1!+2!+...+n!
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	double kq = 0;
	int nhan = 1;
	int i = 1;
	while (i <= n)
	{
		if (i == n)
			cout << i << "!";
		else
			cout << i << "!+ ";
		nhan *= i;
		kq += nhan;
		i++;
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}