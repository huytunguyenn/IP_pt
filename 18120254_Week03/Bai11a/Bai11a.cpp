#include <iostream>
using namespace std;
// Viết chương trình in ra các kí tự từ ‘Z’ trở về ‘A’
int main() {
	for (char c = 'Z';c>='A';c--) {
		cout << c;
	}
	system("pause");
	return 0;
}