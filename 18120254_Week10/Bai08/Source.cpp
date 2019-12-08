#include "Header.h"
void ReadWriteTextFile(string filein, string fileout) {
	fstream fin;
	fin.open(filein, ios_base::in);
	if (fin.fail())
		return;
	else{
		fstream fout;
		fout.open(fileout, ios_base::out);
		if (fout.fail())
			return;
		else{
			while (!fin.eof()){
				string s;
				getline(fin, s);
				for (int i = 0; i < s.length(); i++){
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] = s[i] - ('a'-'A');
				}
				fout << s << endl;
			}
		}
		fout.close();
	}
	fin.close();
}