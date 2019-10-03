#include <iostream>
using namespace std;
//	Nhập tọa độ hai điểm A và B trên mặt phẳng hai chiều sao cho đường nối
//	hai điểm này không song song với trục tung hay trục hoành.Nhập tọa độ
//	điểm C.Cho biết điểm C có thuộc hình chữ nhật(có các cạnh song song
//	với hai trục tọa độ) mà hai điểm góc đối nhau là A và B.Cho rằng tọa độ
//	nhập vào là các số nguyên dương.


int main()
{
	int xa, ya, xb, yb, xc, yc;
	cout << "Nhap toa do x, y diem A: ";
	cin >> xa >> ya;
	cout << "Nhap toa do x, y diem B: ";
	cin >> xb >> yb;
	cout << "Nhap toa do x,y diem C: ";
	cin >> xc >> yc;
	if (xa == xb || ya == yb)
	{
		cout << "Diem A va B tao thanh mot doan thang song song voi truc" << endl;
	}
	else
	{
		if ((xc >= xa && xc <= xb || xc <= xa && xc >= xb) && (yc >= ya && yc <= yb || yc <= ya && yc >= yb))
			cout << "Diem C nam trong" << endl;
		else
			cout << "Diem C nam ngoai" << endl;
	}
	system("pause");
	return 0;
}