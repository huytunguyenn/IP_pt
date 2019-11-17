#include "array.h"
float TimMax(float mang[], int so_luong) {
	float max = mang[0];
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] > max)
			max = mang[i];
	}
	return max;
}
float TongKhongAm(float mang[], int so_luong) {
	float tong = 0;
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] > 0)
			tong += mang[i];
	}
	return tong;
}
float TongViTriChan(float mang[], int so_luong) {
	float tong = 0;
	for (int i = 0; i < so_luong; i++) {
		if (i % 2 == 0)
			tong += mang[i];
	}
	return tong;
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
int DemSNT(float mang[], int so_luong) {
	int dem = 0;
	for (int i = 0; i < so_luong; i++) {
		if (LaSNT(mang[i]) == true)
			dem++;
	}
	return dem;
}
float TimMaxAm(float mang[], int so_luong) {
	float max_am = 0;
	bool check = false;
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] >= 0)
			continue;	// bỏ qua phần tử dương
		if (mang[i] < 0 && check == false) {
			max_am = mang[i];	// gán max_am = phần tử âm đầu tiên
			check = true;
		}
		if (mang[i] > max_am)
			max_am = mang[i];
	}
	return max_am;
}
float TimMinDuong(float mang[], int so_luong) {
	float min_duong = -1;
	bool check = false;
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] < 0)
			continue;	// bỏ qua phần tử âm
		if (mang[i] >= 0 && check == false) {
			min_duong = mang[i];	// gán max_duong = phần tử dương đầu tiên
			check = true;
		}
		if (mang[i] < min_duong)
			min_duong = mang[i];
	}
	return min_duong;
}
bool KiemTraTangDan(float mang[], int so_luong) {
	for (int i = 0; i < so_luong; i++) {
		if (mang[i] > mang[i + 1])
			return false;
	}
	return true;
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
float TongSCP(float mang[], int so_luong) {
	float tong = 0;
	for (int i = 0; i < so_luong; i++) {
		if (LaSCP(mang[i]) == true)
			tong += mang[i];
	}
	return tong;
}