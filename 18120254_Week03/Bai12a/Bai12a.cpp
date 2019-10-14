#include <iostream>
using namespace std;
// Viết chương trình in ra bảng cửu chương.
int main() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++)
			cout << j<< "*"<< i<<"="<<i*j<<'\t';
		cout << endl;
	}
	system("pause");
	return 0;
}