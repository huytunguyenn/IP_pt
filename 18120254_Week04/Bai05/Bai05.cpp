//Nhập vào các số thực, quá trình nhập sẽ ngừng khi người dùng nhập vào số 0, hãy
//đếm xem có bao nhiêu số thực âm trong các số vừa nhập
#include <iostream>
using namespace std;
//prototype
int demSoAm();
//main
int main() {
	cout << "Ban vua nhap " << demSoAm() << " so thuc am"<<endl;
	system("pause");
	return 0;
}
//function
int demSoAm() {
	int dem = 0;
	float k;
	do {
		cout << "Nhap so thuc (dung lai khi nhap 0): ";
		cin >> k;
		if (k < 0)
			dem++;
	} while (k!=0);
	return dem;
}
