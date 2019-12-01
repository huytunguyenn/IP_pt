#include "Diem2D.h"
void NhapDiem2D(Diem2D &P){
	cout << "Nhap hoanh do: "; cin >> P.dX;
	cout << "Nhap tung do: "; cin >> P.dY;
}
void XuatDiem2D(const Diem2D P){
	cout<<"("<<P.dX<<","<<P.dY<<")";
}
float KhoangCachEuclid(Diem2D P, Diem2D Q){
	float khoangcach;
	khoangcach = sqrt(pow((P.dX - Q.dX), 2) + pow((P.dY - Q.dY), 2));
	return khoangcach;
}
float ChuViTamGiac(Diem2D P, Diem2D Q, Diem2D R){
	float PQ = KhoangCachEuclid(P, Q);
	float PR = KhoangCachEuclid(P, R);
	float QR = KhoangCachEuclid(Q, R);
	float perimeter = PQ + PR + QR;
	return perimeter;
}
float DienTichTamGiac(Diem2D A, Diem2D B, Diem2D C){
	float acreage;
	acreage = 0.5*fabs((B.dX - A.dX)*(C.dY - A.dY) - (C.dX - A.dX)*(B.dY - A.dY));
	return acreage;
}
int CheckPoint(Diem2D A) {
	if (A.dX >= 0 && A.dY >= 0)
		return 1;
	else if (A.dX < 0 && A.dY > 0)
		return 2;
	else if (A.dX < 0 && A.dY < 0)
		return 3;
	else if (A.dX > 0 && A.dY < 0)
		return 4;
}
int CheckPointRec(Diem2D A, Diem2D B, Diem2D C, Diem2D D) {
	if (DienTichTamGiac(A, B, C) == (DienTichTamGiac(A, B, D) + DienTichTamGiac(A, B, C) + DienTichTamGiac(B, D, C)))
		return 1;
	return 0;
}
void Menu() {
	int luachon;
	Diem2D a, b, c,d;
	do {
		do {
			system("cls");
			cout << "0. Thoat" << endl;
			cout << "1. Nhap diem 2D" << endl;
			cout << "2. Xuat diem 2D" << endl;
			cout << "3. Kiem tra diem nam trong goc phan tu nao" << endl;
			cout << "4. Tinh chu vi va dien tich cua tam giac tao tu 3 diem" << endl;
			cout << "5. Kiem tra 1 diem co nam trong tam giac tao tu 3 diem" << endl;
			cout << "Lua chon cua ban: ";
			cin >> luachon;
			if(!(luachon >= 0 && luachon < 6)) {
				cout << "Vui long nhap lai" << endl;
				system("pause");
			}
		} while (!(luachon>=0&&luachon<6));
		switch (luachon)
		{
		case 0: {
			break;
		}
		case 1: {
			NhapDiem2D(d);
			break;
		}
		case 2: {
			XuatDiem2D(d);
			cout << endl;
			break;
		}
		case 3: {
			NhapDiem2D(d);
			if (CheckPoint(d) == 1)
				cout << "Diem nam trong goc phan tu thu nhat" << endl;
			else if (CheckPoint(d) == 2)
				cout << "Diem nam trong goc phan tu thu hai" << endl;
			else if (CheckPoint(d) == 3)
				cout << "Diem nam trong goc phan tu thu ba" << endl;
			else if (CheckPoint(d) == 4)
				cout << "Diem nam trong goc phan tu thu tu" << endl; 
			break;
		}
		case 4: {
			cout << "Nhap toa do diem thu nhat tam giac" << endl;
			NhapDiem2D(a);
			cout << "Nhap toa do diem thu hai tam giac" << endl;
			NhapDiem2D(b);
			cout << "Nhap toa do diem thu ba tam giac" << endl;
			NhapDiem2D(c);
			cout << "Chu vi tam giac: " << ChuViTamGiac(a, b, c)<<endl;
			cout << "Dien tich tam giac: " << DienTichTamGiac(a, b, c)<<endl;
			break;
		}
		case 5: {
			cout << "Nhap toa do diem thu nhat tam giac" << endl;
			NhapDiem2D(a);
			cout << "Nhap toa do diem thu hai tam giac" << endl;
			NhapDiem2D(b);
			cout << "Nhap toa do diem thu ba tam giac" << endl;
			NhapDiem2D(c);
			cout << "Nhap toa do diem can xet" << endl;
			NhapDiem2D(d);
			if (CheckPointRec(a, b, c, d) == 1)
				cout << "Diem nam trong tam giac" << endl;
			else
				cout << "Diem nam khong trong tam giac" << endl;
			break;
		}
		}
		system("pause");
	} while (luachon != 0);
}