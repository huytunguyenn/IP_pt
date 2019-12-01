#include "PhanSo.h"
void NhapPhanSo(PhanSo &P){
	do {
		cout << "Nhap tu so: "; cin >> P.iTuSo;
		cout << "Nhap mau so: ";cin>> P.iMauSo;
		if (P.iMauSo == 0)
			cout<<"Mau so khong hop le. Vui long nhap lai!"<<endl;
		else if (P.iMauSo < 0 && P.iTuSo < 0){
			P.iMauSo = -P.iMauSo;
			P.iTuSo = -P.iTuSo;
		}
		else if (P.iMauSo < 0 && P.iTuSo > 0){
			P.iMauSo = -P.iMauSo;
			P.iTuSo = -P.iTuSo;
		}
	} while (P.iMauSo == 0);
}
void XuatPhanSo(const PhanSo P){
	cout<<P.iTuSo<<"/"<<P.iMauSo;
}
int UCLN(int a, int b){
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;
	while (a != b){
		(a > b) ? a -= b : b -= a;
	}
	return a;
}
void RutGonPhanSo(PhanSo &P){
	int ucln;
	ucln = UCLN(P.iMauSo, P.iTuSo);
	if (P.iMauSo < 0 && P.iTuSo) {
		P.iMauSo = -P.iMauSo;
		P.iTuSo = -P.iTuSo;
	}
	P.iMauSo /= ucln;
	P.iTuSo /= ucln;
}
int SoSanhPhanSo(PhanSo P, PhanSo Q){
	RutGonPhanSo(P);
	RutGonPhanSo(Q);
	if (float(P.iTuSo) / float(P.iMauSo) > float(Q.iTuSo) / float(Q.iMauSo))
		return 1;
	else if (float(P.iTuSo) / float(P.iMauSo) == float(Q.iTuSo) / float(Q.iMauSo))
		return 0;
	else
		return -1;
}
PhanSo Tong(PhanSo a, PhanSo b){
	PhanSo tong;
	tong.iTuSo = a.iTuSo*b.iMauSo + b.iTuSo*a.iMauSo;
	tong.iMauSo = a.iMauSo*b.iMauSo;
	RutGonPhanSo(tong);
	return tong;
}
PhanSo Hieu(PhanSo a, PhanSo b){
	PhanSo hieu;
	hieu.iTuSo = a.iTuSo*b.iMauSo - b.iTuSo*a.iMauSo;
	hieu.iMauSo = a.iMauSo*b.iMauSo;
	RutGonPhanSo(hieu);
	return hieu;
}
PhanSo Tich(PhanSo a, PhanSo b){
	PhanSo tich;
	tich.iTuSo = a.iTuSo*b.iTuSo;
	tich.iMauSo = a.iMauSo*b.iMauSo;
	RutGonPhanSo(tich);
	return tich;
}
PhanSo Thuong(PhanSo a, PhanSo b){
	PhanSo thuong;
	thuong.iTuSo = a.iTuSo*b.iMauSo;
	thuong.iMauSo = a.iMauSo*b.iTuSo;
	RutGonPhanSo(thuong);
	return thuong;
}
void NhapDayPhanSo(DayPhanSo &aP){
	cout << "Nhap so luong phan so trong day:";
	cin>>aP.N;
	for (int i = 0; i < aP.N; i++){
		cout << "Nhap phan so thu " << i + 1<<endl;
		NhapPhanSo(aP.arrPhanSo[i]);
	}
}
void XuatDayPhanSo(const DayPhanSo aP){
	for (int i = 0; i < aP.N; i++){
		XuatPhanSo(aP.arrPhanSo[i]);
		cout << "   ";
	}
}
int TimPhanSo(DayPhanSo aP, PhanSo c){
	RutGonPhanSo(c);
	for (int i = 0; i < aP.N; i++){
		RutGonPhanSo(aP.arrPhanSo[i]);
		if (aP.arrPhanSo[i].iTuSo == c.iTuSo && aP.arrPhanSo[i].iMauSo == c.iMauSo){
			return 1;
		}
	}
	return 0;
}
PhanSo TongDayPhanSo(DayPhanSo aP){
	PhanSo tong;
	tong.iTuSo = aP.arrPhanSo[0].iTuSo;
	tong.iMauSo = aP.arrPhanSo[0].iMauSo;
	for (int i = 1; i < aP.N; i++){
		tong = Tong(tong, aP.arrPhanSo[i]);
	}
	return tong;
}
void SapXepDayPhanSo(DayPhanSo &aP){
	for (int i = 0; i < aP.N - 1; i++){
		for (int j = i + 1; j < aP.N; j++){
			if ((float)aP.arrPhanSo[i].iTuSo / aP.arrPhanSo[i].iMauSo > (float)aP.arrPhanSo[j].iTuSo / aP.arrPhanSo[j].iMauSo){
				PhanSo temp;
				temp = aP.arrPhanSo[i];
				aP.arrPhanSo[i] = aP.arrPhanSo[j];
				aP.arrPhanSo[j] = temp;
			}
		}
	}
}
void RutGonDayPhanSo(DayPhanSo &aP) {
	for (int i = 0; i < aP.N; i++) {
		int ucln = UCLN(aP.arrPhanSo[i].iTuSo, aP.arrPhanSo[i].iMauSo);
		if (aP.arrPhanSo[i].iTuSo % ucln == 0)
			RutGonPhanSo(aP.arrPhanSo[i]);
	}
}
void Menu() {
	int luachon;
	PhanSo a1, a2;
	DayPhanSo aP;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap phan so" << endl;
			cout << "2. Xuat phan so" << endl;
			cout << "3. Rut gon phan so" << endl;
			cout << "4. So sanh 2 phan so" << endl;
			cout << "5. Tinh tong 2 phan so" << endl;
			cout << "6. Tinh hieu 2 phan so" << endl;
			cout << "7. Tinh tich 2 phan so" << endl;
			cout << "8. Tinh thuong 2 phan so" << endl;
			cout << "9. Nhap day phan so" << endl;
			cout << "10. Xuat day phan so" << endl;
			cout << "11. Tinh tong phan so co trong day" << endl;
			cout << "12. Thay the phan so chua toi gian trong day bang phan so toi gian" << endl;
			cout << "13. Sap xep day phan so tang dan" << endl;
			cout << "14. Tim phan so trong day phan so" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if (!(luachon >= 0 && luachon < 15)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon >= 0 && luachon < 15));
	switch (luachon)
	{
	case 0: {
		break;
	}
	case 1: {
		NhapPhanSo(a1);
		break;
	}
	case 2: {
		XuatPhanSo(a1);
		cout << endl;
		break;
	}
	case 3: {
		RutGonPhanSo(a1);
		XuatPhanSo(a1);
		cout << endl;
		break;
	}
	case 4: {
		NhapPhanSo(a1);
		NhapPhanSo(a2);
		if (SoSanhPhanSo(a1, a2) == 1) {
			cout << "Phan so thu nhat lon hon phan so thu hai" << endl;
		}
		else if (SoSanhPhanSo(a1, a2) == -1) {
			cout << "Phan so thu nhat nho hon phan so thu hai" << endl;
		}
		else if (SoSanhPhanSo(a1, a2) == 0) {
			cout << "Phan so thu hai bang phan so thu nhat" << endl;
		}
		break;
	}
	case 5: {
		NhapPhanSo(a1);
		NhapPhanSo(a2);
		PhanSo tong = Tong(a1, a2);
		cout << "Tong hai phan so: " << tong.iTuSo << "/" << tong.iMauSo << endl;
		break;
	}
	case 6: {
		NhapPhanSo(a1);
		NhapPhanSo(a2);
		Hieu(a1, a2);
		PhanSo hieu = Hieu(a1, a2);
		cout << "Hieu hai phan so: " << hieu.iTuSo << "/" << hieu.iMauSo << endl;
		break;
	}
	case 7: {
		NhapPhanSo(a1);
		NhapPhanSo(a2);
		PhanSo tich = Tich(a1, a2);
		cout << "Tich hai phan so: " << tich.iTuSo << "/" << tich.iMauSo <<endl;
		break;
	}
	case 8: {
		NhapPhanSo(a1);
		NhapPhanSo(a2);
		PhanSo thuong = Thuong(a1, a2);
		cout << "Thuong hai phan so: " << thuong.iTuSo << "/" << thuong.iMauSo<<endl;
		break;
	}
	case 9: {
		NhapDayPhanSo(aP);
		break;
	}
	case 10: {
		XuatDayPhanSo(aP);
		break;
	}
	case 11: {
		XuatDayPhanSo(aP);
		PhanSo tongday = TongDayPhanSo(aP);
		cout<<endl << "Tong day phan so: " << tongday.iTuSo << "/" << tongday.iMauSo << endl;
		break;
	}
	case 12: {
		XuatDayPhanSo(aP);
		RutGonDayPhanSo(aP);
		cout<<endl << "Day phan so sau khi rut gon" << endl;
		XuatDayPhanSo(aP);
		break;
	}
	case 13: {
		XuatDayPhanSo(aP);
		SapXepDayPhanSo(aP);
		cout<<endl << "Day phan so sau khi sap xep" << endl;
		XuatDayPhanSo(aP);
		break;
	}
	case 14: {
		PhanSo c;
		cout << "Nhap phan so can tim"<<endl;
		NhapPhanSo(c);
		if (TimPhanSo(aP, c) == 1)
			cout << "Tim thay" << endl;
		else
			cout << "Khong tim thay" << endl;
		break;
	}
	}
	system("pause");
	} while (luachon != 0);
}