#include<iostream>
#define Max 100

using namespace std;

void Nhap(int a[Max][Max], int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			cout << "a[" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
}
void Xuat(int a[Max][Max], int hang, int cot) {
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void Tong(int a[Max][Max], int hang, int cot) {
	int S = 0;
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] < 0) {
			   S += a[i][j];
			}
		}
		cout << "Tong cac so am cua ma tran la: " << S << endl;
	}
}
int main() {
	int hang, cot, a[Max][Max];
	do {
		cout << "Nhap so hang: ";
		cin >> hang;
		if (hang<0 || hang>Max) {
			cout << "so hang khong hop le. Vui long nhap lai.";
		}
	} while (hang<0 || hang>Max);
	do {
		cout << "Nhap so cot: ";
		cin >> cot;
		if (cot<0 || cot>Max) {
			cout << "so cot khong hop le. Vui long nhap lai.";
		}
	} while (cot<0 || cot>Max);
	Nhap(a, hang, cot);
	Xuat(a, hang, cot);
	Tong(a, hang, cot);
	system("pause");
	return true;
}