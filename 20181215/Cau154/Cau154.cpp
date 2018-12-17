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
int Vitri(int a[], int n) {
	int min = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			min = i;
			break;
		}
		for (int i = 0; i < n; i++) {
			if (a[i] < 0 && a[i] < a[min]) {
				min = i;
			}
		}
	}
	cout << "\nvi tri am nho nhat la: " << min << endl;
	return -1;
}
int main() {
	//tim vi tri so am nho nhat trong mang mot chieu cac so nguyen
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	Vitri(a, n);
	system("pause");
	return true;
}