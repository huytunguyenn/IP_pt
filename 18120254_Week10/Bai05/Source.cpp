#include "Header.h"

void ReadTextFile(string file) {
	fstream fin(file, ios_base::in);
	if (fin.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	string s;
	while (!fin.eof()) {
		char temp[MAX];
		fin.getline(temp, sizeof(temp));
		string line = temp;
		cout << line << endl;
	}
	fin.close();
}