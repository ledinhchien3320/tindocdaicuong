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
	float LN = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > LN) {
			LN = a[i];
		}
	}
	float Min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < Min) {
			Min = a[i];
		}
	}
	if (abs(Min) > abs(LN)) {
		cout<<"\nGia tri x thoa man la: "<<Min<<endl;
	}
	else {
		cout<<"\nGia tri x thoa man la: "<<LN<<endl;
	}
}
int main() {
	//cho mang mot chieu cac so thuc. Tim gia tri x sao cho doan [-x, x] chua tat ca cac gia tri cua mang
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