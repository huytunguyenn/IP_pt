#include "Header.h"
int main() {
	int dem = ReadLatinTextFile("input.txt");
	WriteLatinTextFile("output.txt", dem);
	cout << "Ghi file thanh cong" << endl;
	system("pause");
	return 0;
}