#include "Header.h"

void NhapThanhPho(ThanhPho& thanhpho) {
	do {
		cout << "Nhap ten: ";
		getline(cin, thanhpho.ten);
		if (thanhpho.ten.length() > 100) {
			cout << "Toi da 100 ky tu" << endl;
			system("pause");
		}
	} while (thanhpho.ten.length() > 100);
	cout << "Nhap dien tich: ";
	cin >> thanhpho.dientich;
	cout << "Nhap so dan: ";
	cin >> thanhpho.danso;
}
void NhapQuocGia(ThanhPho quocgia[], int& n) {
	do {
		cout << "Nhap so thanh pho: ";
		cin >> n;
		if (n <= 0) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (n <= 0);
	cin.ignore(1);
	for (int i = 0; i < n; i++) {
		cout << "Nhap thong tin thanh pho thu " << i + 1 << endl;
		NhapThanhPho(quocgia[i]);
		cin.ignore(1);
	}
}
void XuatThanhPho(ThanhPho thanhpho) {
	cout << "Ten: " << thanhpho.ten << endl;
	cout << "Dien tich: " << thanhpho.dientich << endl;
	cout << "So dan: " << thanhpho.danso << endl;
}
void XuatQuocGia(ThanhPho quocgia[], int n) {
	for (int i = 0; i < n; i++) {
		XuatThanhPho(quocgia[i]);
	}
}
void HoanViThanhPho(ThanhPho& a, ThanhPho& b) {
	ThanhPho temp;
	temp = a;
	a = b;
	b = temp;
}
void SapXepMatDo(ThanhPho quocgia[], int n) {
	for (int i = 0; i < n; i++) {
		quocgia[i].matdo = quocgia[i].danso / quocgia[i].dientich;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (quocgia[i].matdo > quocgia[j].matdo) {
				HoanViThanhPho(quocgia[i], quocgia[j]);
			}
		}
	}
}
void TimThanhPhoMaxDienTich(ThanhPho quocgia[], int n, ThanhPho& max, int& index) {
	max = quocgia[0];
	index = 0;
	for (int i = 1; i < n; i++) {
		if (quocgia[i].dientich > max.dientich) {
			max = quocgia[i];
			index = i;
		}
	}
}
void ThayTheThanhPho(ThanhPho quocgia[], int& n, int index, ThanhPho moi1, ThanhPho moi2) {
	for (int i = 0; i < n; i++) {
		if (i == index && n != MAX) {
			n++;
			for (int j = n - 1; j > index + 1; j--) {
				quocgia[j] = quocgia[j - 1];
			}
			quocgia[index] = moi1;
			quocgia[index + 1] = moi2;
		}
		else if (i == index && n == MAX) {
			cout << "Quoc gia nay da co toi da " << MAX << " thanh pho. Khong the tach them" << endl;
			return;
		}
	}
}
void TachThanhPhoMax(ThanhPho quocgia[], int &n) {
	ThanhPho max;
	int index;
	TimThanhPhoMaxDienTich(quocgia, n, max, index);
	ThanhPho moi1;
	ThanhPho moi2;
	moi1.dientich = max.dientich / 2;
	moi2.dientich = max.dientich / 2;
	if (max.danso % 2 != 0) {
		moi1.danso = max.danso / 2;
		moi2.danso = (max.danso / 2) + 1;
	}
	else {
		moi1.danso = max.danso / 2;
		moi2.danso = max.danso / 2;
	}
	moi1.ten = max.ten + " 1";
	moi2.ten = max.ten + " 2";
	ThayTheThanhPho(quocgia, n, index, moi1, moi2);

}