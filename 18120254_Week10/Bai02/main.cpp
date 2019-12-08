#include "Header.h"
int main() {
	int a, b, c;
	ReadTextFile("input.txt", a, b, c);
	WriteTextFile("output.txt", a, b, c);
	cout << "Ghi file thanh cong" << endl;
	system("pause");
	return 0;
}