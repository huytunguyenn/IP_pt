#include "Header.h"
void Sort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void ReadTextFile(string file, int a[], int&n) {
	fstream fin(file, ios_base::in);
	if (fin.fail()) {
		return;
	}
	n = 0;
	while (!fin.eof()) {
		fin >> a[n];
		n++;
	}
	n--;
	fin.close();
}
void WriteTextFile(string file, int a[], int n) {
	fstream fout(file, ios_base::out);
	if (fout.fail()) {
		cout << "Khong mo duoc tap tin" << endl;
		return;
	}
	Sort(a, n);
	for (int i = 0; i < n; i++) {
		fout << a[i] << endl;
	}
	fout.close();
}