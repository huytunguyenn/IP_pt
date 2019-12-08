#include "Header.h"
int main() {
	int a[MAX];
	int n;
	ReadTextFile("input.txt", a, n);
	WriteTextFile("output.txt", a, n);
	cout << "Ghi file thanh cong" << endl;
	system("pause");
	return 0;
}