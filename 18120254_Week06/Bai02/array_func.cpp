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
void XoaBatKy(float mang[], int &so_luong) {
	int vi_tri;
	do {
		cout << "Nhap vi tri muon xoa: ";
		cin >> vi_tri;
		if (!(vi_tri > 0 && vi_tri <= so_luong)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(vi_tri > 0 && vi_tri <= so_luong));
	for (int i = vi_tri - 1; i < so_luong - 1; i++) {
		mang[i] = mang[i + 1];
	}
	so_luong--;
}
void XoaLienTuc(float mang[], int &so_luong) {
	int vi_tri, sl_xoa;
	do {
		cout << "Nhap vi tri muon xoa: ";
		cin >> vi_tri;
		cout << "Nhap so luong muon xoa: ";
		cin >> sl_xoa;
		if (!(vi_tri > 0 && vi_tri <= so_luong && sl_xoa > 0 && sl_xoa + vi_tri <= so_luong + 1)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(vi_tri > 0 && vi_tri <= so_luong && sl_xoa > 0 && sl_xoa + vi_tri <= so_luong + 1));
	for (int i = vi_tri - 1; i < so_luong; i++) {
		mang[i] = mang[i + sl_xoa];
		if (i + sl_xoa > so_luong)
			break;
	}
	so_luong -= sl_xoa;
}
void DemSo(float mang[], int so_luong) {
	sort(mang, mang + so_luong);
	int dem_lap = 1;
	int loai_so = 0;
	for (int i = 1; i < so_luong; i++) {
		if (mang[i] == mang[i - 1])
			dem_lap++;
		else {
			loai_so++;
			cout << "Co " << dem_lap << " so " << mang[i - 1] << endl;
			dem_lap = 1; //reset biến đếm
		}
	}
	loai_so++;
	cout << "Co " << dem_lap << " so " << mang[so_luong - 1] << endl;
	cout << "Co " << loai_so << " loai so khac nhau" << endl;
}
void DemSoTrongDoan(float mang[], int so_luong) {
	sort(mang, mang + so_luong);
	int dem_lap = 1;
	int loai_so = 0;
	int k;
	do {
		cout << "Nhap k: ";
		cin >> k;
		if (!(k <= so_luong)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(k <= so_luong));
	for (int i = 1; i < k; i++) {
		if (mang[i] == mang[i - 1])
			dem_lap++;
		else {
			loai_so++;
			cout << "Co " << dem_lap << " so " << mang[i - 1] << endl;
			dem_lap = 1; //reset biến đếm
		}
	}
	loai_so++;
	cout << "Co " << dem_lap << " so " << mang[k - 1] << endl;
	cout << "Co " << loai_so << " loai so khac nhau" << endl;
}
float TimMaxThuHai(float mang[], int so_luong) {
	int firstMax, secondMax;
	if (mang[0] > mang[1]) {
		firstMax = mang[0];
		secondMax = mang[1];
	}
	else {
		firstMax = mang[1];
		secondMax = mang[0];
	}
	for (int i = 2; i < so_luong; i++) {
		if (mang[i] > firstMax) {
			secondMax = firstMax;
			firstMax = mang[i];
		}
		else if (mang[i] > secondMax) {
			secondMax = mang[i];
		}
	}
	return secondMax;
}
void DemSoLap(float mang[], int so_luong) {
	sort(mang, mang + so_luong);
	int i = 0, max = 0, index = 0;
	int dem_lap;
	while (i < so_luong) {
		dem_lap = 1;  //reset dem_lap khi bước qua loại số mới
		while (mang[i] == mang[i + 1]) {
			dem_lap++;	// đếm số lần lặp của loại số đó
			i++;
		}
		if (max < dem_lap) {
			max = dem_lap;
			index = i;		 // loại số lặp nhiều nhất
		}
		i++;
	}
	cout << "Phan tu lap nhieu nhat la: " << mang[index] << endl;
	cout << "So lan lap: " << max << endl;
}
void TimMinTrongDoan(float mang[], int so_luong) {
	int x, y;
	do {
		cout << "Nhap doan [x,y]" << endl;
		cout << "Nhap x: ";
		cin >> x;
		cout << "Nhap y: ";
		cin >> y;
		if (!(x > 0 && y <= so_luong && y > x)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(x > 0 && y <= so_luong && y > x));
	float min = mang[x - 1];
	for (int i = x - 1; i < y; i++) {
		if (mang[i] < min)
			min = mang[i];
	}
	cout << "So nho nhat trong doan [" << x << ", " << y << "] la: " << min << endl;
}
void TongMax(float mang[], int so_luong) {
	int k;
	do {
		cout << "Nhap k: ";
		cin >> k;
		if (!(k <= so_luong)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(k <= so_luong));
	float tong = 0;
	float max = 0;
	int index;
	for (int i = 0; i < so_luong; i++) {
		tong = 0;
		if (i + k <= so_luong) {
			int j;
			for (j = i; j < k + i; j++) {
				tong += mang[j];
			}
			if (tong > max) {
				max = tong;
				index = i;
			}
		}
	}
	cout << "Tong lon nhat " << k << " phan tu = " << max << endl;
	cout << "Tong tu phan tu thu " << index + 1 << " den phan tu thu " << index + k << endl;
}
void DaoNguocMang(float mang[], int so_luong) {
	for (int i = 0; i < so_luong / 2; i++) {
		float temp = mang[i];
		mang[i] = mang[so_luong - 1 - i];
		mang[so_luong - 1 - i] = temp;
	}
}
void DuaVeDau(float mang[], int vi_tri) {
	int temp = mang[vi_tri];           // lưu lại giá trị chẵn cần dịch lên
	for (int i = vi_tri; i >= 1; i--)
	{
		mang[i] = mang[i - 1]; // dịch các giá trị trc giá trị chẵn lên
	}
	mang[0] = temp;  // đưa giá trị chẵn về đầu 
}
void SapXepChanTangDauLeGiamCuoi(float mang[], int so_luong) {
	int vitrichan_cuoi = 0;
	for (int i = 0; i < so_luong; i++) {
		if (int(mang[i]) % 2 == 0) {
			DuaVeDau(mang, i);
		}
	}
	for (int i = 0; i < so_luong; i++) {
		if (int(mang[i]) % 2 != 0) {
			vitrichan_cuoi = i;
			break;
		}
	}
	// sắp xếp chẵn tăng ở đầu
	sort(mang, mang + vitrichan_cuoi);
	// sắp xếp lẻ giảm ở cuối
	sort(mang + vitrichan_cuoi, mang + so_luong, greater<>());
}
bool LaSCP(float n) {
	if (n - (int)n != 0)	//check xem là float hay là int
		return false;
	for (int i = 1; i <= sqrt(n); i++) {
		if (i*i == n)
			return true;
	}
	return false;
}
void SapXepSCP(float mang[], int so_luong) {
	for (int i = 0; i < so_luong - 1; i++) {
		if (LaSCP(mang[i]) == true) {
			for (int j = i + 1; j < so_luong; j++) {
				if (LaSCP(mang[j]) == true && mang[i] > mang[j]) {
					float temp = mang[j];
					mang[j] = mang[i];
					mang[i] = temp;
				}
			}
		}
	}
}
void HoanViMangCon(float mang[], int so_luong) {
	int m;
	do {
		cout << "Nhap chi so mang m: ";
		cin >> m;
		if (!(m < so_luong&&m>=0)) {
			cout << "Vui long nhap lai" << endl;
			system("pause");
		}
	} while (!(m < so_luong && m>=0));
	for (int i = m; i < so_luong; i++) {
		DuaVeDau(mang, i);
	}
	sort(mang, mang +(so_luong-1-m)); // sort lại vì đưa mảng thứ 2 về đầu mảng nhưng bị ngược 
}
bool KiemTraTangDan(float mang[], int so_luong) {
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] > mang[i + 1])
			return false;
	}
	return true;
}
void InDayTangMax(float mang[], int so_luong) {
	int do_dai = 1, max = 1, start = 0, end = 0;
	for (int i = 0; i < so_luong - 1; i++) {
		if (mang[i] <= mang[i + 1]) {
			do_dai++;
			if (do_dai > max) {
				max = do_dai;
				start = i + 2 - do_dai;
				end = i + 1;
			}
		}
		else
			do_dai = 1;  //reset lại độ dài
	}
	for (int i = start; i <= end; i++) {
		cout << mang[i] << " ";
	}
	cout << endl;
}
void InDayTang(float mang[], int so_luong) {
	for (int i = 0; i < so_luong - 1; i++) {
		bool check = false; // check khi bắt đầu 1 dãy tăng
		if (mang[i] > mang[i + 1])
			cout << mang[i] << endl;  // dãy không tăng thì in riêng
		else {
			while (mang[i] <= mang[i + 1]) {
				if (check == false) {
					cout << mang[i] << " ";  // in ra phần tử đầu tiên của dãy tăng
					check = true;
				}
				cout << mang[i + 1] << " "; // in ra các phần tử tiếp theo của dãy tăng
				i++;
			}
		}
		cout << endl;
	}
}
bool LaSNT(float n) {
	if (n - (int)n != 0)	//check xem là float hay là int
		return false;
	else if (n < 2)
		return false;
	for (int i = 2; i < n; i++) {
		if ((int)n%i == 0)
			return false;
	}
	return true;
}
float MinSNT(float mang[], int so_luong) {
	float min = 0;
	bool check = false;
	for (int i = 0; i < so_luong; i++) {
		if (LaSNT(mang[i]) == true && check == false) {
			min = mang[i];
			check = true;
		}
		else if (LaSNT(mang[i]) == true && mang[i] < min) {
			min = mang[i];
		}
	}
	return min;
}
void Menu(float mang[], int &so_luong) {
	int lua_chon;
	do {
		do {
			system("cls");
			cout << "1. Nhap mang" << endl;
			cout << "2. Xuat mang" << endl;
			cout << "3. Xoa mot phan tu bat ky" << endl;
			cout << "4. Xoa k phan tu lien tuc tu vi tri i" << endl;
			cout << "5. Dem so luong va in cac phan tu khac nhau trong mang" << endl;
			cout << "6. Dem so luong va in cac phan tu khac nhau trong doan [1,k]" << endl;
			cout << "7. Tim so lon thu hai" << endl;
			cout << "8. Tim phan tu xuat hien nhieu lan nhat tren mang" << endl;
			cout << "9. Tim so nho nhat trong doan [x,y]" << endl;
			cout << "10. Tong lon nhat cua k phan tu lien tiep xuat hien tren mang" << endl;
			cout << "11. Dao nguoc mang" << endl;
			cout << "12. Sap xep so chan tang dan o dau mang, so le giam dan o cuoi mang" << endl;
			cout << "13. Sap xep so chinh phuong tang dan (khong doi vi tri cac so con lai)" << endl;
			cout << "14. Hoan vi 2 mang con chia boi vi tri m (khong dung mang phu)" << endl;
			cout << "15. Kiem tra mang tang dan hay giam dan" << endl;
			cout << "16. In day con tang dan (lien tiep) dai nhat" << endl;
			cout << "17. In ra tat ca day con tang (lien tiep)" << endl;
			cout << "18. In ra so nguyen to nho nhat xuat hien trong mang" << endl;
			cout << "19. Thoat" << endl;
			cout << "Lua chon cua ban: ";
			cin >> lua_chon;
			if (!(lua_chon > 0 && lua_chon < 20)) {
				cout << "Vui long nhap lai" << endl;
				system("pAuse");
			}
		} while (!(lua_chon > 0 && lua_chon < 20));
		system("cls");
		switch (lua_chon) {
		case 1: {
			Nhap(mang, so_luong);
			break; }
		case 2: {
			Xuat(mang, so_luong);
			break; }
		case 3: {
			Xuat(mang, so_luong);
			XoaBatKy(mang, so_luong);
			cout << endl << "Mang sau khi xoa" << endl;
			Xuat(mang, so_luong);
			break; }
		case 4: {
			Xuat(mang, so_luong);
			XoaLienTuc(mang, so_luong);
			cout << endl << "Mang sau khi xoa" << endl;
			Xuat(mang, so_luong);
			break; }
		case 5: {
			Xuat(mang, so_luong);
			DemSo(mang, so_luong);
			break; }
		case 6: {
			Xuat(mang, so_luong);
			DemSoTrongDoan(mang, so_luong);
			break; }
		case 7: {
			Xuat(mang, so_luong);
			cout << "Phan tu lon thu hai: " << TimMaxThuHai(mang, so_luong) << endl;
			break; }
		case 8: {
			Xuat(mang, so_luong);
			DemSoLap(mang, so_luong);
			break; }
		case 9: {
			Xuat(mang, so_luong);
			TimMinTrongDoan(mang, so_luong);
			break; }
		case 10: {
			Xuat(mang, so_luong);
			TongMax(mang, so_luong);
			break; }
		case 11: {
			Xuat(mang, so_luong);
			DaoNguocMang(mang, so_luong);
			cout << "Sau khi dao nguoc: " << endl;
			Xuat(mang, so_luong);
			break; }
		case 12: {
			Xuat(mang, so_luong);
			cout << "Mang sau khi sap xep: " << endl;
			SapXepChanTangDauLeGiamCuoi(mang, so_luong);
			Xuat(mang, so_luong);
			break; }
		case 13: {
			Xuat(mang, so_luong);
			SapXepSCP(mang, so_luong);
			cout << "Mang sau khi sap xep: " << endl;
			Xuat(mang, so_luong);
			break; }
		case 14: {
			Xuat(mang, so_luong);
			HoanViMangCon(mang, so_luong);
			cout << "Mang sau khi hoan vi: " << endl;
			Xuat(mang, so_luong);
			break; }
		case 15: {
			if (KiemTraTangDan(mang, so_luong) == false)
				cout << "Mang khong tang dan" << endl;
			else
				cout << "Mang tang dan" << endl;
			break; }
		case 16: {
			Xuat(mang, so_luong);
			cout << "Day con tang (lien tiep) co do dai nhat la: " << endl;
			InDayTangMax(mang, so_luong);
			break; }
		case 17: {
			Xuat(mang, so_luong);
			cout << "Tat ca cac day con tang: " << endl;
			InDayTang(mang, so_luong);
			break; }
		case 18: {
			Xuat(mang, so_luong);
			if (MinSNT(mang, so_luong) == 0)
				cout << "Khong co so nguyen to trong mang" << endl;
			else
				cout << "So nguyen to nho nhat trong mang: " << MinSNT(mang, so_luong) << endl;
			break; }
		}
		system("pause");
	} while (lua_chon != 19);
}