#include <iostream>
using namespace std;
// Viết chương trình in ra bảng cửu chương.
int main() {
	int i = 1;
	while (i < 10){
		int j = 1;
		while (j < 10) {
			cout << j << "*" << i << "=" << i * j << '\t';
			j++;
		}
		cout << endl;
		i++;
	}
	system("pause");
	return 0;
}