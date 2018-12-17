#include <iostream>
#include <cmath>

#define Max 100
using namespace std;
void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void Tim(float a[], int n) {
	float x, Min = a[0]; 
	cout << "\nNhap x: ";
	cin >> x;
	float Gannhat = abs(a[0] - x);
	for (int i = 0; i < n; i++) {
		float  Hieu = abs(a[i] - x);
		if (Hieu < Gannhat) {
			Gannhat = Hieu;
			Min = a[i];
		}
	}
	cout << "\nGia tri gan x nhat la: " << Min << endl;
}
int main() {
	//Tim gia tri gan gia tri x nhat trong mang mot chieu cac so thuc
	float a[Max];
	int n;
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