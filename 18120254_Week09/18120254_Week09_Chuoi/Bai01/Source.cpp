#include "Header.h"
void Nhap(string &s) {
	cout << "Nhap chuoi: ";
	getline(cin, s);
}
int SoLuongKhoangTrang(string s) {
	int dem = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != ' ' && s[i - 1] == ' ')
			dem++;
	}
	if (s[s.length() - 1] == ' ')
		dem++;
	return dem;
}
int SoLuongKySo(string s) {
	int dem = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0'&&s[i] <= '9')
			dem++;
	}
	return dem;
}
int SoLuongLatin(string s) {
	int dem = 0;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z'))
			dem++;
	}
	return dem;
}
int SoLuongKyTuKhac(string s) {
	int dem = 0;
	for (int i = 1; i < s.length(); i++) {
		if (!((s[i] >= 'a'&&s[i] <= 'z') || (s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= '0'&&s[i] <= '9')))
			dem++;
	}
	return dem;
}
int SoTu(string s) {
	int dem = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == ' '&&s[i + 1] != ' ')
			dem++;
	}
	if (s[0] != ' ')
		dem++;
	return dem;
}
string BienDoiInHoa(string &s) {
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == ' ' &&s[i + 1] != ' '&&s[i + 1] >= 'a'&&s[i + 1] <= 'z') // khoang trang -> chu thuong
			s[i + 1] -= ('z' - 'Z');  // doi thanh chu hoa
	}
	if (s[0] != ' ' &&s[0] >= 'a'&&s[0] <= 'z')
		s[0] -= ('z' - 'Z'); // doi thanh chu hoa
	// chuyen tat ca chu dang sau chu hoa thanh chu thuong
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] >= 'A'&&s[i] <= 'Z'&&s[i + 1] != ' ') {
			int j = i + 1;
			while (s[j] != ' ') {
				if (s[j] >= 'A'&&s[j] <= 'Z')
					s[j] += ('z' - 'Z');
				if (j == s.length())
					break;
				else
					j++;
			}
		}
	}
	return s;
}
void TimTuMax(string s) {
	int max = 0;
	int dem = 0;
	int pos, j;
	for (int i = 1; i < s.length(); i++){
		if (s[i] == ' '||i==s.length()-1){
			j = i-1; 
			dem = 0;
			while (s[j] != ' ' && j>=0){
				dem++;
				j--;
			}
			if (dem>max){
				max = dem;
				pos = i;
			}
		}
	}
	cout << "Tu dai nhat la :";
	for (int i = pos - max; i < pos; i++)
		cout << s[i];
	cout << endl;
}
void TimTuMin(string s) {
	int min = 0;
	int dem = 0;
	int pos, j;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == ' ' || i == s.length() - 1) {
			j = i - 1;
			dem = 0;
			while (s[j] != ' ' && j >= 0) {
				dem++;
				j--;
			}
			if (dem < min) {
				min = dem;
				pos = i;
			}
		}
	}
	cout << "Tu ngan nhat la :";
	for (int i = pos - min; i < pos; i++)
		cout << s[i];
	cout << endl;
}
void Menu() {
	int luachon;
	string s;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap chuoi" << endl;
			cout << "2. Dem so luong khoang trang, ky so, chu cai latin, ky tu khac" << endl;
			cout << "3. Dem so luong tu cua chuoi" << endl;
			cout << "4. Tim tu ngan nhat va dai nhat" << endl;
			cout << "5. Bien doi chuoi sao cho cac ky tu dau moi tu la ky tu in hoa, cac ky tu khac in thuong" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon >= 0 && luachon < 6)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon >= 0 && luachon < 6));
		switch (luachon)
		{
		case 0: {
			break;
		}
		case 1: {
			cin.ignore(1);
			Nhap(s);
			break;
		}
		case 2: {
			cout << s << endl;
			cout << "So luong khoang trang: " << SoLuongKhoangTrang(s) << endl;
			cout << "So luong ky so: " << SoLuongKySo(s) << endl;
			cout << "So luong chu latin: " << SoLuongLatin(s) << endl;
			cout << "So luong ky tu khac: " << SoLuongKyTuKhac(s) << endl;
			break;
		}
		case 3: {
			cout << s << endl;
			cout << "So luong tu cua chuoi: " << SoTu(s) << endl;
			break;
		}
		case 4: {
			TimTuMin(s);
			TimTuMax(s);
			break;
		}
		case 5: {
			cout << s << endl;
			cout << "Sau khi bien doi: " << BienDoiInHoa(s) << endl;
			break;
		}
		}
		system("pause");
	} while (luachon != 0);
}
