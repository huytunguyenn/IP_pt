//Số n có tính chất đối xứng khi các chữ số của nó được viết ngược lại cũng chính là
//n.Ví dụ : số n = 34543; 11; 4114 có tính chất đối xứng.Viết chương trình kiểm tra số
//nguyên dương n có tính chất đảo ngược không ? (với giá trị n : 10 <= n <= 10.000.000).
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
bool ktSoDoiXung(int n);
void xuatSoDoiXung(int n);
//main
int main() {
	int n;
	nhapSoDuong(n);
	xuatSoDoiXung(n);
	system("pause");
	return 0;
}
//function
void nhapSoDuong(int &n) {
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (!(n >= 10 && n <= 10000000))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >= 10 && n <= 10000000));
}
bool ktSoDoiXung(int n) {
	int temp = n;
	int x = 0, sodu;
	while (n > 0) {
		sodu = n % 10;
		n /= 10;
		x = x * 10 + sodu;
	}
	if (temp == x)
		return true;
	return false;
}
void xuatSoDoiXung(int n) {
	if (ktSoDoiXung(n) == true)
		cout << n << " la so doi xung" << endl;
	else
		cout << n << " khong la so doi xung" << endl;
}