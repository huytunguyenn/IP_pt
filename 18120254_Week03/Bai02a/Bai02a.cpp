#include <iostream>
using namespace std;
// 1+1/2+1/3+...+1/n
int main()
{
	unsigned int n;
	cout << "Nhap n: "; cin >> n;
	float kq = 0;
	for (int i = 0; i < n; i++)
	{
		kq += 1.0 / (i + 1);
		if (i + 1 == n)
			cout << "1/" << i + 1;
		else
			cout << "1/" << i + 1 << "+ ";
	}
	cout << "= " << kq << endl;
	system("pause");
	return 0;
}