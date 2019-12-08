#include "Header.h"

int ReadNumTextFile(string file) {
	fstream fin(file, ios_base::in);
	if (fin.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return 0;
	}
	char c;
	int dem = 0;
	while (!fin.eof()) {
		if (fin >> c)
			if (c >= '0' && c <= '9')
				dem++;
	}
	fin.close();
	return dem;
}
void WriteNumTextFile(string file, int dem) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	string s;
	fout << dem << endl;
	fout.close();
}