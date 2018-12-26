#include <iostream>

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
int main() {
	//viet ham nhap xuat mang 2 chieu so nguyen
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
	system("pause");
	return true;
}