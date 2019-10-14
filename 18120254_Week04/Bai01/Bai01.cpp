//Số n được gọi là số hoàn chỉnh khi tổng các ước số của n bằng với tích các ước số
//của nó(không kể số n).Ví dụ : số 6 là số hoàn chỉnh vì nó có 3 ước số là 1, 2, 3 và chúng
//ta có 6 = 1 + 2 + 3 = 1 x 2 x 3. Viết chương trình kiểm tra số nguyên dương n có là số hoàn
//chỉnh không ? (với giá trị n : 1 <= n <= 10.000.000)
#include <iostream>
using namespace std;
//prototype
void nhapSoDuong(int &n);
bool ktSoHoanChinh(int n);
void xuatSoHoanChinh(int n);
//main
int main() {
	int n;
	nhapSoDuong(n);
	xuatSoHoanChinh(n);
	system("pause");
	return 0;
}
//function
void nhapSoDuong(int &n){
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (!(n >= 1 && n <= 10000000))
			cout << "Vui long nhap lai" << endl;
	} while (!(n>=1 &&n<=10000000));
}
bool ktSoHoanChinh(int n) {
	int s = 0, p = 1;
	for (int i = 1; i < n; i++) {
		if (n%i == 0) {
			s += i;
			p *= i;
		}
	}
	if (s == p && s == n)
		return true;
	return false;
}
void xuatSoHoanChinh(int n) {
	if (ktSoHoanChinh(n) == true)
		cout << n << " la so hoan chinh" << endl;
	else
		cout << n << " khong la so hoan chinh" << endl;
}