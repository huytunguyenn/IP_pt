#include <iostream>
using namespace std;
// Viết chương trình in ra tất cả kí tự và mã tương ứng trong bảng mã ASCII
int main() {
	unsigned char c = 0;
	while (c < 255) {
		cout << (int)c << ":  " << c << endl;
		c++;
	}
	system("pause");
	return 0;
}