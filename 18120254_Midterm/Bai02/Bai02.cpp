// Nguyen Huy Tu -18120254
#include <iostream>
using namespace std;
//prototype
void Nhap(int& n);
void kiemtraTangDan(int n);
//main
int main() {
	int n;
	Nhap(n);
	kiemtraTangDan(n);
	system("pause");
	return 0;
}
//function
void Nhap(int& n) {
	do {
		system("cls");
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (!(n >= 10 && n <= 99999999)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(n >= 10 && n <= 99999999));
}

void kiemtraTangDan(int n) {
	int so0, so1, so2, so3, so4, so5, so6, so7;
	int sodu;
	int k = 7;
	while (n > 0) {
		sodu = n % 10;
		n /= 10;
		switch (k)
		{
		case 0:
			so0 = sodu;
			if (n > 0)
				k--;
			break;
		case 1:
			so1 = sodu;
			if (n > 0)
				k--;
			break;
		case 2:
			so2 = sodu;
			if (n > 0)
				k--;
			break;
		case 3:
			so3 = sodu;
			if (n > 0)
				k--;
			break;
		case 4:
			so4 = sodu;
			if (n > 0)
				k--;
			break;
		case 5:
			so5 = sodu;
			if (n > 0)
				k--;
			break;
		case 6:
			so6 = sodu;
			if (n > 0)
				k--;
			break;
		case 7:
			so7 = sodu;
			if (n > 0)
				k--;
			break;
		}
	}
	switch (k)
	{
	case 0:
		if (so7 >= so6 && so6 >= so5 && so5 >= so4 && so4 >= so3 && so3 >= so2 && so2 >= so1 && so1 >= so0)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 1:
		if (so7 >= so6 && so6 >= so5 && so5 >= so4 && so4 >= so3 && so3 >= so2 && so2 >= so1)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 2:
		if (so7 >= so6 && so6 >= so5 && so5 >= so4 && so4 >= so3 && so3 >= so2)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 3:
		if (so7 >= so6 && so6 >= so5 && so5 >= so4 && so4 >= so3)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 4:
		if (so7 >= so6 && so6 >= so5 && so5 >= so4)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 5:
		if (so7 >= so6 && so6 >= so5)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 6:
		if (so7 >= so6)
			cout << "Tang dan" << endl;
		else
			cout << "Khong tang dan" << endl;
		break;
	case 7:
		// không thể xảy ra trường hợp này vì đã xử lý k có ít nhất 2 chữ số ở hàm Nhap(int n);
		break;
	}
}