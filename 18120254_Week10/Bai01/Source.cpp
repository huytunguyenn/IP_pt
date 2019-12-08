#include "Header.h"
void WriteTextFile(string file) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong tao duoc tap tin" << endl;
		return;
	}
	for (int i = 0; i < 3; i++) {
		int n;
		cout << "Nhap so thu " << i + 1 << " : ";
		cin >> n;
		fout << n;
		fout << endl;
	}
	fout.close();
}