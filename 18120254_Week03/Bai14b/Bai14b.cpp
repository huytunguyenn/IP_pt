#include <iostream>
using namespace std;
// Viết chương trình in số hạng thứ k của dãy Fibonacci.
int main() {
	int k;
	cout << "Nhap k: ";
	cin >> k;
	if (k < 1)
		return 1;
	cout << "So hang thu " << k << " cua day Fibonacci: ";
	int f1 = 0, f2 = 1;
	int i = 0;
	while (i < k) {
		int temp = f1;
		f1 = f2;
		f2 += temp;
		i++;
	}
	cout << f2 << endl;
	system("pause");
	return 0;
}