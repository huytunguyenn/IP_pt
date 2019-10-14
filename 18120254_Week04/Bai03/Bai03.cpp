//Số n được gọi là số hoàn hảo khi tổng các ước số của n bằng 2 lần n.Ví dụ : n = 28
//thì 28 * 2 = 1 + 2 + 4 + 7 + 14 + 28. Viết chương trình kiểm tra số nguyên dương n có phải
//là số hoàn hảo không ? (với giá trị n : 1 <= n <= 100.000.000)
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
bool ktSoHoanHao(int n);
void xuatSoHoanHao(int n);
//main
int main() {
	int n;
	nhapSoDuong(n);
	xuatSoHoanHao(n);
	system("pause");
	return 0;
}
//function
void nhapSoDuong(int &n) {
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (!(n >= 1 && n <= 100000000))
			cout << "Vui long nhap lai" << endl;
	} while (!(n >= 1 && n <= 100000000));
}
bool ktSoHoanHao(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0)
			s += i;
	}
	if (s == n * 2)
		return true;
	return false;
}
void xuatSoHoanHao(int n) {
	if (ktSoHoanHao(n) == true)
		cout << n << " la so hoan hao" << endl;
	else
		cout << n << " khong la so hoan hao" << endl;
}