#include <iostream>
#include <cmath>

#define Max 100
using namespace std;
void Nhap(int a[][Max], int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			cout << "a[" << i << "," << j << "]= ";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[][Max], int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
bool check(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int dem(int a[][Max], int hang, int cot) {
	int count = 0;
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (check(a[i][j]) == true)
				count++;
		}
	}
	return count;
}
int main() {
	//viet ham liet ke cac so nguyen to trong ma tran so nguyen
	int a[Max][Max], hang, cot;
	do {
		cout << "Nhap so hang: ";
		cin >> hang;
		if (hang < 0 || hang > Max) {
			cout << "so hang khong hop le. Xin moi nhap lai.";
		}
	} while (hang<0 || hang>Max);
	do {
		cout << "Nhap so cot: ";
		cin >> cot;
		if (cot < 0 || cot > Max) {
			cout << "so cot khong hop le. Xin moi nhap lai.";
		}
	} while (hang < 0 || hang > Max);
	Nhap(a, hang, cot);
	Xuat(a, hang, cot);
	cout<<"So luong so nguyen to la: "<<dem(a, hang, cot) << endl;
	system("pause");
	return true;
}