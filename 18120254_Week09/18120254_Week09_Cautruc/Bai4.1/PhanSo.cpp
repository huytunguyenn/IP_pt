#include "PhanSo.h"
void NhapPhanSo(PhanSo &P, int i)
{
	do {
		cout << "Nhap phan so thu " << i << ": ";
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
	while (a != b)
	{
		(a > b) ? a -= b : b -= a;
	}
	return a;
}
void RutGonPhanSo(PhanSo &P){
	int ucln;
	ucln = UCLN(P.iMauSo, P.iTuSo);
	P.iMauSo /= ucln;
	P.iTuSo /= ucln;
}
int SoSanhPhanSo(PhanSo P, PhanSo Q){
	RutGonPhanSo(P);
	RutGonPhanSo(Q);
	if (float(P.iTuSo) / float(P.iMauSo) > float(Q.iTuSo) / float(Q.iMauSo)){
		cout<<"Phan so thu nhat lon hon phan so thu hai"<<endl;
		return 1;
	}
	else if (float(P.iTuSo) / float(P.iMauSo) == float(Q.iTuSo) / float(Q.iMauSo)){
		cout<<"Phan so thu hai bang phan so thu nhat"<<endl;
		return 0;
	}
	else{
		cout<<"Phan so thu nhat nho hon phan so thu hai"<<endl;
		return -1;
	}
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
		NhapPhanSo(aP.arrPhanSo[i], i + 1);
	}
}
void XuatDayPhanSo(const DayPhanSo aP){
	for (int i = 0; i < aP.N; i++){
		XuatPhanSo(aP.arrPhanSo[i]);
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
	return 0;// ko co else return 0 vi se pha vong for
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