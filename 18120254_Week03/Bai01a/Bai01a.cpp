#include <iostream>
using namespace std;
//1^3+2^3+...+n^3
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	double kq = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			cout << i + 1 << "^3";
		else
			cout << i + 1 << "^3+ ";
		kq += pow(i + 1, 3);
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}