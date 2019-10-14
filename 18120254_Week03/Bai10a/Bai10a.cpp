#include <iostream>
using namespace std;
//Viết chương trình in ra tất cả kí tự và mã tương ứng trong bảng mã ASCII
int main() {
	for (unsigned char c = 0; c <255; c++) {
		cout << (int)c << ":  " << c <<endl;
	}
	system("pause");
	return 0;
}