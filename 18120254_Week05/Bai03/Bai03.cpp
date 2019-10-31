//Viết chương trình con xuất ra tam giác Pascal như sau :
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
#include <iostream>
using namespace std;
//prototype
int C(int k, int n);
void inPascal();
//main
int main() {
	inPascal();
	system("pause");
	return 0;
}
//function
int C(int k, int n) {   // Ckn + C(k+1)n = C(k+1)(n+1); C0n=Cnn=1; C1n=C(n-1)n=n
	if (k == 0 || k == n) return 1;
	if (k == 1) return n;
	return C(k - 1, n - 1) + C(k, n - 1);
}
void inPascal() {
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j <= i; j++) {
			cout << C(j, i) << " ";
		}
		cout << endl;
	}
}