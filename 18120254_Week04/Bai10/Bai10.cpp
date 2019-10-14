//Dãy số nguyên{Fi} được định nghĩa như sau :{F0=1, F1=2, Fn=3*F(n-1)-2*F(n-2), n>1
//Cho số nguyên dương n.Viết chương trình tìm giá trị của Fn
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
int tinhF(int n);
//main
int main() {
	int n;
	cout << "F0= 1" << endl << "F1= 2" << endl<<"Fn = 3*F(n-1) - 2*F(n-2)" << endl;
	nhapSoDuong(n);
	cout << "F"<<n<<"= "<<tinhF(n)<<endl;
	system("pause");
	return 0;
}
//function
int tinhF(int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2;
	else
		return 3 * tinhF(n - 1) - 2 * tinhF(n - 2);
}
void nhapSoDuong(int &n) {
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
		if (!(n >1))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >1));
}