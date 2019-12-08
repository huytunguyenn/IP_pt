#include "Header.h"

void WriteTextFile(string file) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	string s;
	do {
		cout << "Nhap van ban (nhap <q> de ket thuc): ";
		getline(cin, s);
		if (s != "q")
			fout << s << endl;
	} while (s != "q");
	fout.close();
}