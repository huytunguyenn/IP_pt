#include <iostream>
using namespace std;
//1^3+2^3+...+n^3
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	double kq = 0;
	int i = 1;
	while (i <= n)
	{
		if (i == n)
			cout << i << "^3";
		else
			cout << i << "^3+ ";
		kq += pow(i, 3);
		i++;
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}