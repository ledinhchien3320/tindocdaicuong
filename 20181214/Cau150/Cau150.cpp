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
int Maxam(int a[], int n) {
	int AmLn=0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			AmLn = a[i];
			break;
		}
		if (AmLn != 0) {
			for (int i = 0; i < n; i++) {
				if (a[i] < 0 && a[i] > AmLn) {
					AmLn = a[i];
				}
			}
		}
	}
	cout << "\nGia tri am lon nhat la: " << AmLn << endl;
	return -1;
}
int main() {
	//Tim gia tri am lon nhat trong mang mot chieu cac so nguyen
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
	Maxam(a, n);
	system("pause");
	return true;
}