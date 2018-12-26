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
void Ktra(int a[][Max], int hang, int cot) {
	int Dem = 0;
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] % 2 == 0 && a[i][j] < 2018) {
				Dem++;
			}
		}
	}
	if (Dem != 0) {
		cout << "\nHam ton tai so chan nho hon 2018\n";
	}
	else {
		cout << "\nHam k ton tai so nguyen nho hon 2018\n";
	}
}
int main() {
	//viet ham ktra xem ma tran co so nguyen chan nho hon 2018 hay k
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
	Ktra(a, hang, cot);
	system("pause");
	return true;
}