#include <iostream>
using namespace std;
// Viết chương trình in ra các kí tự từ ‘Z’ trở về ‘A’
int main() {
	char c = 'Z';
	while (c >= 'A')
	{
		cout << c;
		c--;
	}
	system("pause");
	return 0;
}