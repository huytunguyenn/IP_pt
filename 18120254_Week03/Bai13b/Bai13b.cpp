#include <iostream>
//Viết chương trình in N số hạng đầu tiên của dãy Fibonacci
using namespace std;
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n < 1)
		return 1;
	cout<<n << " so hang dau tien cua day Fibonacci:"<<endl;
	int f1 = 0, f2=1;
	int i=0;
	while(i<n){
		int temp = f1;
		f1 = f2;
		f2 += temp;
		cout << f2<<"  ";
		i++;
	}
	system("pause");
	return 0;
}