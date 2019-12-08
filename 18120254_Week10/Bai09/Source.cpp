#include "Header.h"
void Add2TextFile(string file1, string file2) {
	fstream file;
	file.open(file1, ios_base::out | ios_base::app);
	if (file.fail())
		return;
	else{
		fstream fileadd;
		fileadd.open(file2, ios_base::in);
		if (fileadd.fail())
			return;
		else{
			while (!fileadd.eof()){
				string s;
				getline(fileadd, s);
				file << s << endl;
			}
		}
		fileadd.close();
	}
	file.close();
}