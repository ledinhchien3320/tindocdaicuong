#include <iostream>

#define Max 100
using namespace std;
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void Tim(int a[], int n) {
	int LN = a[0];
		for (int i = 0; i < n; i++) {
		if(a[i] > LN) {
			LN = a[i];
		}
	}
	int Min = a[0];
		for (int i = 0; i < n; i++) {
			if (a[i] < Min) {
				Min = a[i];
			}
		}
		cout << "\nKhoang chua tat ca cac gia tri cua mang la [" << Min << ", " << LN << "]\n";
}
int main() {
	//Tim khoang [a,b] chua tat ca cac gia tri cua mang
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	Tim(a, n);
	system("pause");
	return true;
}