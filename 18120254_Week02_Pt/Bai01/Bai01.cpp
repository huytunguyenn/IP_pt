#include <iostream>
using namespace std;
// Nhập một số bất kỳ. Hãy đọc giá trị của số nguyên đó nếu nó có giá trị từ 1 đến 9, ngược lại thông báo không đọc được.
int main()
{
	int x;
	cout << "Nhap mot so bat ky: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Mot";
		break;
	case 2:
		cout << "Hai";
		break;
	case 3:
		cout << "Ba";
		break;
	case 4:
		cout << "Bon";
		break;
	case 5:
		cout << "Nam";
		break;
	case 6:
		cout << "Sau";
		break;
	case 7:
		cout << "Bay";
		break;
	case 8:
		cout << "Tam";
		break;
	case 9:
		cout << "Chin";
		break;
	default:
		cout << "Khong doc duoc";
	}
	cout << endl;
	system("pause");
	return 0;
}