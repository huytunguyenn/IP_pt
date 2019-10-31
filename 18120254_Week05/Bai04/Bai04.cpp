//Ta có các loại tiền 50.000, 20.000, 10.000, 5.000, 2.000, 1.000.Viết hàm cho biết
//số tờ của từng loại tiền để tổng của chúng bằng một số tiền nào đó mà người dùng
//nhập vào.Cho biết tất cả các phương án có thể có, sau đó thông báo phương án nào
//cho kết quả có số tờ ít nhất.
#include <iostream>
using namespace std;
//prototype
void tachTien(int tien);
void Nhap(int&n);
//main
int main() {
	int n;
	Nhap(n);
	tachTien(n);
	system("pause");
	return 0;
}
//function
void tachTien(int tien) {
	int counter = 0;
	int st50000 = tien / 50000;
	int st20000= (tien % 50000) / 20000;
	int st10000 = ((tien % 50000) % 20000) / 10000;
	int st5000 = (((tien % 50000) % 20000) % 10000)/5000;
	int st2000 = ((((tien % 50000) % 20000) % 10000) % 5000)/2000;
	int st1000 = (((((tien % 50000) % 20000) % 10000) % 5000) % 2000)/1000;
	cout << tien << " = " << "50.000x" << st50000 << " + " << "20.000x" << st20000 << " + " << "10.000x" << st10000 << " + " << "5.000x" << st5000 << " + " << "2000x" << st2000 <<" + "<< "1000x" << st1000 << endl;
}

void Nhap(int&n) {
	do {
		system("cls");
		cout << "Nhap so tien (don vi nho nhat la 1000d): ";
		cin >> n;
		if (!(n >= 1000 && n % 1000 == 0)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(n>=1000&&n%1000==0));
}