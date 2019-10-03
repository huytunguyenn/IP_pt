#include <iostream>
#include <string>
using namespace std;
//Nhập vào ngày, tháng và năm.Viết chương trình :
//	a.Kiểm tra tính hợp lệ của dữ liệu nhập vào.
//	b.Cho biết tháng đó có bao nhiêu ngày.
//	c.Cho biết đây là ngày thứ bao nhiêu trong năm.
//	d.Cho biết đây là ngày thứ mấy trong tuần.
//	e.Cho biết ngày hôm sau của ngày đã nhập vào là ngày nào.
//	f.Cho biết ngày hôm trước của ngày đã nhập vào là ngày nào.
//	g.Cho biết năm nhập vào có phải là năm nhuận hay không.


bool laNamNhuan(int nam)
{
	if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
		return true;
	return false;
}
int soNgayTrongThang(int thang, int nam)
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
		if (laNamNhuan(nam))
			ngay = 29;
		else
			ngay = 28;
		break;
	}
	return ngay;
}
bool laNgayHopLe(int ngay, int thang, int nam)
{
	if (nam < 1)
		return false;
	if (thang < 1 || thang>12)
		return false;
	if (ngay<1 || ngay>soNgayTrongThang(thang, nam))
		return false;
	return true;
}
// https://vi.wikipedia.org/wiki/Ngày_Julius
string thuTrongTuan(int ngay, int thang, int nam) 
{
	int a = ((14 - thang) / 12);
	int	y = nam + 4800 - a;
	int	m = thang + 12 * a - 3;
	int	JDN = ngay + ((153 * m + 2) / 5) + 365 * y + (y / 4) - (y / 100) + (y / 400) - 32045;
	JDN %= 7;
	string thu[] = { "Thu 2", "Thu 3", "Thu 4", "Thu 5", "Thu 6", "Thu 7", "Chu nhat" };
	return thu[JDN];
}
int NgayHomTruoc(int ngay,int thang, int nam)
{
	ngay--;
	if(ngay==0)
	{
		thang--;
		if (thang == 0)
		{
			nam--;
			thang = 12;
		}
		ngay = soNgayTrongThang(thang, nam);
	}
	return ngay;
}
int NgayHomSau(int ngay, int thang, int nam)
{
	ngay++;
	if (ngay > soNgayTrongThang(thang,nam))
	{
		ngay = 1;
		thang++;
		if(thang>12)
		{
			thang = 1;
			nam++;
		}
	}
	return ngay;
}

int main()
{
	int ngay, thang, nam;
	cout << "Nhap ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
	//	a.Kiểm tra tính hợp lệ của dữ liệu nhập vào.
	if (laNgayHopLe(ngay, thang, nam))
		cout << "Ngay hop le" << endl;
	else
	{
		cout << "Ngay khong hop le" << endl;
		system("pause");
		return 1;
	}
	//  b.Cho biết tháng đó có bao nhiêu ngày.
	cout << "Thang "<<thang<< " co "<<soNgayTrongThang(thang,nam) <<" ngay"<< endl;
	//	c.Cho biết đây là ngày thứ bao nhiêu trong năm.
	int songay=ngay;
	for (int i=thang-1;i>0;i--)
	{
		songay +=  soNgayTrongThang(i,nam);
	}
	cout << "Day la ngay thu " << songay << " trong nam" << endl;
	//  d.Cho biết đây là ngày thứ mấy trong tuần.
	cout << "Day la ngay thu " <<thuTrongTuan(ngay,thang,nam) << " trong tuan" << endl;
	//	e.Cho biết ngày hôm sau của ngày đã nhập vào là ngày nào.
	cout << "Ngay hom sau cua ngay da nhap la ngay " << NgayHomSau(ngay, thang, nam) << endl;
	//	f.Cho biết ngày hôm trước của ngày đã nhập vào là ngày nào.
	cout << "Ngay hom truoc cua ngay da nhap la ngay " << NgayHomTruoc(ngay, thang, nam) << endl;
	//	g.Cho biết năm nhập vào có phải là năm nhuận hay không.
	if (laNamNhuan(nam))
		cout << "Nam nhap vao la nam nhuan" << endl;
	else
		cout << "Nam nhap vao khong phai la nam nhuan" << endl;
	system("pause");
	return 0;
}