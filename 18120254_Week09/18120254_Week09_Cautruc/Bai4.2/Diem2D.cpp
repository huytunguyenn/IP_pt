#include "Diem2D.h"
void NhapDiem2D(Diem2D &P, int i){
	cout<<"Nhap diem 2D thu "<< i<<":";
	cout << "Nhap hoanh do: "; cin >> P.dX;
	cout << "Nhap tung do: "; cin >> P.dY;
}
void XuatDiem2D(const Diem2D P){
	cout<<P.dX<<","<<P.dY;
}
double KhoangCachEuclid(Diem2D P, Diem2D Q){
	double khoangcach;
	khoangcach = sqrt(pow((P.dX - Q.dX), 2) + pow((P.dY - Q.dY), 2));
	return khoangcach;
}
double ChuViTamGiac(Diem2D P, Diem2D Q, Diem2D R){
	double PQ = KhoangCachEuclid(P, Q);
	double PR = KhoangCachEuclid(P, R);
	double QR = KhoangCachEuclid(Q, R);
	double perimeter = PQ + PR + QR;
	return perimeter;
}
double DienTichTamGiac(Diem2D A, Diem2D B, Diem2D C){
	double acreage;
	acreage = 0.5*fabs((B.dX - A.dX)*(C.dY - A.dY) - (C.dX - A.dX)*(B.dY - A.dY));
	return acreage;
}