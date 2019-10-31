//Viết chương trình nhập vào 1 số nguyên n.Chuyển đổi n sang hệ nhị phân và xuất
//ra màn hình. (với giá trị n : -255 <= n <= 255)
#include <iostream>
#include <string>
using namespace std;
//prototype
void nhapSoNguyen(int &n);
string chuyenNhiPhan(int giatri);
//main
int main() {
	int n;
	nhapSoNguyen(n);
	cout << n << " co dang nhi phan la: ";
	string kq = chuyenNhiPhan(n);
	cout <<kq << endl;
	system("pause");
	return 0;
}
//function
string chuyenNhiPhan(int giatri) { 
	string kq;
	bool checkam = 0;
	if (giatri < 0) {
		giatri = abs(giatri);
		checkam = 1;
	}
	kq = "0000 0000 0000";
	int i = 13;
	int so;
	while (giatri > 0) {
		if (i == 4||i==9) {}
		else {
			so = giatri % 2;
			giatri /= 2;
			string strso = to_string(so); // chuyen so sang string dung ham cua c++11. neu la c: itoa, c++: ostringstream convert; strso=convert.str();
			kq.replace(i, 1, strso);
		}
		i--;
	}
	// neu la so am 
	if (checkam == 1) {
		for (int i = kq.length()-1; i>=0; i--) {
			if(kq.at(i)=='1'){
				i--;
				for (;i>=0;i--) {
					if (kq.at(i) == '0') 
						kq.at(i) = '1';
					else if (i == 4 || i == 9) {}
					else
						kq.at(i) = '0';
				}
				break;
			}
		
		}
	}
	kq.resize(14);
	return kq;
}
void nhapSoNguyen(int &n) {
	do {
		cout << "Nhap so nguyen: ";
		cin >> n;
		if (!(n >= -255 && n <= 255))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >=-255&&n<=255));
}