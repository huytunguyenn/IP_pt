#include "array.h"
void Nhap(float mang[], int &so_luong) {
	do {
		system("cls");
		cout << "Nhap so phan tu: ";
		cin >> so_luong;
		if (!(so_luong > 0)) {
			cout << "Vui long nhap lai!" << endl;
			system("pause");
		}
	} while (!(so_luong > 0));
	for (int i = 0; i < so_luong; i++) {
		cout << "Nhap phan tu thu " << i + 1 << " : ";
		cin >> mang[i];
	}
}
void Xuat(float mang[], int so_luong) {
	for (int i = 0; i < so_luong; i++) {
		cout << mang[i] << " ";
	}
	cout << endl;
}
void Menu(float mang[], int &so_luong) {
	int lua_chon;
	do {
		do {
			system("cls");
			cout << "1. Nhap mang" << endl;
			cout << "2. Xuat mang" << endl;
			cout << "3. Tim phan tu lon nhat" << endl;
			cout << "4. Tinh tong so khong am" << endl;
			cout << "5. Tinh tong phan tu tai vi tri chan" << endl;
			cout << "6. Dem so luong so nguyen to" << endl;
			cout << "7. Tim phan tu am lon nhat" << endl;
			cout << "8. Tim phan tu khong am nho nhat" << endl;
			cout << "9. Kiem tra mang tang dan" << endl;
			cout << "10. Tinh tong cac so chinh phuong" << endl;
			cout << "11. Thoat" << endl;
			cout << "Lua chon cua ban: ";
			cin >> lua_chon;
			if (!(lua_chon > 0 && lua_chon < 12)) {
				cout << "Vui long nhap lai" << endl;
				system("pAuse");
			}
		} while (!(lua_chon > 0 && lua_chon < 12));
		system("cls");
		switch (lua_chon) {
		case 1: {
			Nhap(mang, so_luong);
			break; }
		case 2: {
			Xuat(mang, so_luong);
			break; }
		case 3: {
			cout << "Max la: " << TimMax(mang, so_luong) << endl;
			break; }
		case 4: {
			cout << "Tong khong am: " << TongKhongAm(mang, so_luong) << endl;
			break; }
		case 5: {
			cout << "Tong vi tri chan: " << TongViTriChan(mang, so_luong) << endl;
			break; }
		case 6: {
			cout << "So so nguyen to: " << DemSNT(mang, so_luong) << endl;
			break; }
		case 7: {
			if (TimMaxAm(mang, so_luong) == 0)
				cout << "Khong co phan tu am trong mang" << endl;
			else
				cout << "Max am la: " << TimMaxAm(mang, so_luong) << endl;
			break; }
		case 8: {
			if (TimMinDuong(mang, so_luong) == -1)
				cout << "Khong co phan tu duong trong mang" << endl;
			else
				cout << "Min duong la: " << TimMinDuong(mang, so_luong) << endl;
			break; }
		case 9: {
			if (KiemTraTangDan(mang, so_luong) == false)
				cout << "Mang khong tang dan" << endl;
			else
				cout << "Mang tang dan" << endl;
			break; }
		case 10: {
			cout << "Tong so chinh phuong: " << TongSCP(mang, so_luong) << endl;
			break; }
		}
		system("pause");
	} while (lua_chon != 11);
}