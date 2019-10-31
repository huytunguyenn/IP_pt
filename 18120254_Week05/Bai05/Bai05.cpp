//Sử dụng các hàm đã cài đặt, viết chương trình yêu cầu nhập vào một ngày, bao gồm các
//thông tin : ngày, tháng và năm và xuất ra các thông tin như :
//• Ngày nhập có phải là ngày hợp lệ
//• Ngày trước và ngày sau tương ứng là ngày nào
//• Là ngày thứ mấy trong tuần, trong năm
#include <iostream>
using namespace std;
//prototype
bool LaNamNhuan(int nam);
int SoNgayTrongThang(int thang, int nam);
bool LaNgayHopLe(int ngay, int thang, int nam);
int ThuTuNgayTrongNam(int ngay, int thang, int nam);
int ThuTuNgayTrongTuan(int ngay, int thang, int nam);
void NgaySau(int ngay, int thang, int nam, int &ngaySau, int &thangSau, int&namSau);
void NgayTruoc(int ngay, int thang, int nam, int &ngayTruoc, int &thangTruoc, int &namTruoc);
//main
int main()
{
	int ngay, thang, nam;
	do {
		system("cls");
		cout << "Nhap ngay: ";
		cin >> ngay;
		cout << "Nhap thang: ";
		cin >> thang;
		cout << "Nhap nam: ";
		cin >> nam;
		if (!LaNgayHopLe(ngay, thang, nam))
		{
			cout << "Ngay khong hop le. Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!LaNgayHopLe(ngay, thang, nam));
	cout << "Ngay hop le" << endl;
	int ngayTruoc, thangTruoc, namTruoc, ngaySau, thangSau, namSau;
	NgayTruoc(ngay, thang, nam, ngayTruoc, thangTruoc, namTruoc);
	NgaySau(ngay, thang, nam, ngaySau, thangSau, namSau);
	cout << "Ngay hom sau cua ngay da nhap la: " << ngaySau << "/" << thangSau << "/" << namSau << endl;
	cout << "Ngay hom truoc cua ngay da nhap la: " << ngayTruoc << "/" << thangTruoc << "/" << namTruoc << endl;
	cout << "Day la ngay thu " << ThuTuNgayTrongNam(ngay, thang, nam) << " trong nam" << endl;
	if (ThuTuNgayTrongTuan(ngay, thang, nam) == 8)
		cout << "Day la ngay chu nhat trong tuan" << endl;
	else
		cout << "Day la ngay thu " << ThuTuNgayTrongTuan(ngay, thang, nam) << " trong tuan" << endl;
	system("pause");
	return 0;
}
//function
//	Kiểm tra một năm có phải là năm nhuận không
bool LaNamNhuan(int nam) {
	if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		return true;
	return false;
}
//Kiểm tra tính hợp lệ của một ngày.
int SoNgayTrongThang(int thang, int nam)
{
	int ngay;
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		ngay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		ngay = 30;
		break;
	case 2:
		if (LaNamNhuan(nam))
			ngay = 29;
		else
			ngay = 28;
		break;
	}
	return ngay;
}
bool LaNgayHopLe(int ngay, int thang, int nam) {
	if (nam < 1)
		return false;
	if (thang < 1 || thang>12)
		return false;
	if (ngay<1 || ngay>SoNgayTrongThang(thang, nam))
		return false;
	return true;
}
//	Tính xem một ngày là ngày thứ bao nhiêu trong năm.
int ThuTuNgayTrongNam(int ngay, int thang, int nam) {
	int songay = ngay;
	for (int i = thang - 1; i > 0; i--)
	{
		songay += SoNgayTrongThang(i, nam);
	}
	return songay;
}
//	Tính xem một ngày là ngày thứ mấy trong tuần.
int ThuTuNgayTrongTuan(int ngay, int thang, int nam) {
	int a = ((14 - thang) / 12);
	int	y = nam + 4800 - a;
	int	m = thang + 12 * a - 3;
	int	JDN = ngay + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;
	JDN %= 7;
	switch (JDN)
	{
	case 0:
		return 2;
	case 1:
		return 3;
	case 2:
		return 4;
	case 3:
		return 5;
	case 4:
		return 6;
	case 5:
		return 7;
	default:
		return 8; // chu nhat
		break;
	}
}
//	Tính xem ngày hôm sau của một ngày là ngày nào.
void NgaySau(int ngay, int thang, int nam, int &ngaySau, int &thangSau, int&namSau) {
	ngay++;
	if (ngay > SoNgayTrongThang(thang, nam))
	{
		ngay = 1;
		thang++;
		if (thang > 12)
		{
			thang = 1;
			nam++;
		}
	}
	ngaySau = ngay;
	thangSau = thang;
	namSau = nam;
}
//	Tính xem ngày hôm trước của một ngày là ngày nào.
void NgayTruoc(int ngay, int thang, int nam, int &ngayTruoc, int &thangTruoc, int &namTruoc) {
	ngay--;
	if (ngay == 0)
	{
		thang--;
		if (thang == 0)
		{
			nam--;
			thang = 12;
		}
		ngay = SoNgayTrongThang(thang, nam);
	}
	ngayTruoc = ngay;
	thangTruoc = thang;
	namTruoc = nam;
}

