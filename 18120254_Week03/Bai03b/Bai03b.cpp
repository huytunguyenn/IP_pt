#include <iostream>
using namespace std;
//1+1/1*2+1/2*3+...+1/(n-1)*n
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	float kq = 1;
	cout << "1+ ";
	int i = 2;
	while (i <= n)
	{
		kq += 1.0 / ((i - 1)*i);
		if (i == n)
			cout << "1/" << "(" << i - 1 << "*" << i << ")";
		else
			cout << "1/" << "(" << i - 1 << "*" << i << ")" << "+ ";
		i++;
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}