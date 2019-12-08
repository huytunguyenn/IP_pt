#include "Header.h"

int GiaiPTBac2(int a, int b, int c, float& x1, float& x2) {
	if (a == 0) {
		x1 = -c / b;
		return 1; // 1 nghiem
	}
	else if (a == 0 && b == 0) {
		x1 = x2 = 0.0;
		return 0; // vo nghiem
	}
	else {
		float delta = b * b - 4 * a * c;
		if (delta < 0) {
			x1 = x2 = 0.0;
			return 0;  // vo nghiem
		}
		else if (delta == 0) {
			x1 = x2 = -b / (2 * a);
			return 1;  // nghiem kep
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			return 2;  // 2 nghiem phan biet
		}
	}
}
void ReadTextFile(string file, int& a, int& b, int& c) {
	fstream fin(file, ios_base::in);
	if (fin.fail()) {
		return;
	}
	while (!fin.eof()) {
		fin >> a;
		fin >> b;
		fin >> c;
	}
	fin.close();
}
void WriteTextFile(string file, int a, int b, int c) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	float x1, x2;
	if (GiaiPTBac2(a, b, c, x1, x2) == 1) {
		fout << x1 << endl;
	}
	else if (GiaiPTBac2(a, b, c, x1, x2) == 2) {
		fout << x1 << endl;
		fout << x2 << endl;
	}
	fout.close();
}