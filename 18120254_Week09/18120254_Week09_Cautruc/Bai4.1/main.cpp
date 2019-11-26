#include "PhanSo.h"
void main()
{
	PhanSo a1, a2;
	cout<<">>>>>> Rut gon phan so <<<<<<"<<endl;
	NhapPhanSo(a1, 1);
	RutGonPhanSo(a1);
	XuatPhanSo(a1);
	cout << endl<< ">>>>>> So sanh 2 phan so <<<<<<"<<endl;
	NhapPhanSo(a1, 1);
	NhapPhanSo(a2, 2);
	SoSanhPhanSo(a1, a2);
	cout << endl << ">>>>>> Tinh Tong, Hieu, Tich, Thuong <<<<<<"<<endl;
	NhapPhanSo(a1, 1);
	NhapPhanSo(a2, 2);
	PhanSo tong = Tong(a1, a2);
	cout <<"Tong hai phan so: "<< tong.iTuSo<<"/"<< tong.iMauSo<<endl;
	Hieu(a1, a2);
	PhanSo hieu= Hieu(a1, a2);
	cout<< "Hieu hai phan so: "<< hieu.iTuSo<<"/"<< hieu.iMauSo<<endl;
	PhanSo tich=Tich(a1, a2);
	cout<<"Tich hai phan so: "<< tich.iTuSo<<"/"<< tich.iMauSo;
	PhanSo thuong=Thuong(a1, a2);
	cout<<"Thuong hai phan so: "<< thuong.iTuSo<<"/"<< thuong.iMauSo;
	cout<<endl<<">>>>>> Mang Phan So <<<<<<"<<endl;
	DayPhanSo aP;
	NhapDayPhanSo(aP);
	XuatDayPhanSo(aP);
	cout<<endl<<">>>>>> Tim Phan So <<<<<<"<<endl;
	PhanSo c;
	cout<<"Nhap phan so can tim:";
	cout << "Nhap tu so: "; cin >> c.iTuSo;
	cout << "Nhap mau so: "; cin>>c.iMauSo;
	if (TimPhanSo(aP, c) == 1)
		cout<<"Tim thay"<<endl;
	else 
		cout<<"Khong tim thay"<<endl;
	cout<<endl<<">>>>>> Tinh Tong Day Phan So <<<<<<"<<endl;
	PhanSo tongday=TongDayPhanSo(aP);
	cout << "Tong day phan so: " << tongday.iTuSo << "/" << tongday.iMauSo << endl;
	cout<<endl<<">>>>>> Sap Xep Day Phan So <<<<<<"<<endl;
	SapXepDayPhanSo(aP);
	XuatDayPhanSo(aP);
}