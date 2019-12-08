#include "Header.h"
int main() {
	int dem = ReadNumTextFile("input.txt");
	WriteNumTextFile("output.txt", dem);
	cout << "Ghi file thanh cong" << endl;
	system("pause");
	return 0;
}