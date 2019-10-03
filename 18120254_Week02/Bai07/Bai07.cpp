#include <iostream>
using namespace std;
// Nhập độ dài 3 cạnh 1 tam giác.Kiểm tra đó có phải là tam giác không và là tam giác gì ?

int main()
{
	float a, b, c;
	cout << "Nhap do dai 3 canh: ";
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b)
	{
		if (a == b == c)
			cout << "Tam giac deu" << endl;
		else if (a == b || b == c || a == c)
			cout << "Tam giac can" << endl;
		else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
			cout << "Tam giac vuong" << endl;
		else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b)
			cout << "Tam giac tu" << endl;
		else
			cout << "Tam giac nhon" << endl;
	}
	else
		cout << "Khong phai tam giac" << endl;
	system("pause");
	return 0;
}