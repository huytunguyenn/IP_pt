#include "Header.h"

int ReadLatinTextFile(string file) {
	fstream fin(file, ios_base::in);
	if (fin.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return 0;
	}
	char c;
	int dem = 0;
	while (!fin.eof()) {
		if (fin >> c)
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				dem++;
	}
	fin.close();
	return dem;
}
void WriteLatinTextFile(string file, int dem) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	string s;
	fout << dem << endl;
	fout.close();
}