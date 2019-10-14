#include <iostream>
using namespace std;
// 1 + x + x^2 + … + x^n
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	float x;
	cout << "Nhap x: "; cin >> x;
	double kq = 0;
	int i = 0;
	while(i <= n)
	{
		if (i == n)
			cout << x << "^" << i;
		else
			cout << x << "^" << i << "+ ";
		kq += pow(x, i);
		i++;
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}