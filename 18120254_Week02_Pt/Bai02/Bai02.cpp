#include <iostream>
using namespace std;
// Nhập một chữ cái. Nếu là chữ thường thì đổi sang chữ hoa, ngược lại đổi sang chữ thường.
int main()
{
	char c;
	cout << "Nhap mot chu cai: ";
	cin >> c;
	if (c >= 'a' && c <= 'z')
	{
		c = c + ('A'-'a');
		cout << c << endl;
	}
	else if(c>='A'&&c<='Z')
	{
		c = c - ('A' - 'a');
		cout << c << endl;
	}
	else
	{
		cout << "Vui long chi nhap chu cai" << endl;
	}
	return 0;
}