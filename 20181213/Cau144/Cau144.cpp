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
int SNT(int a[], int n) {
	int Dem;
	for (int i = 0; i < n; i++) {
		Dem = 0;
		if (a[i] == 2)
			return a[i];
		for (int j = 2; j <= sqrt(a[i]); j++) {
			if (a[i] % j == 0) {
				Dem++;
				break;
			}
		}
		if (Dem == 0)
			return a[i];
	}
	return -1;
}
int main() {
	//tim so nguyen to dau tien trong mang mot chieu cac so nguyen
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
	cout << "\nSo nguyen to dau tien la: " << SNT(a, n) << endl;
	system("pause");
	return true;
}