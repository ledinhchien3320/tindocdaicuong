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
	int Dem = 0;
	for (int i = n-1; i >0; i--) {
		for (int j = 2; j <= sqrt(a[i]); j++) {
			if (a[i] % j == 0) {
				Dem++;
				break;
			}
		}
		if(Dem==0)
			return a[i];
	}
	return -1;
}
int main() {
	//Tim so nguyen to cuoi cung cua mang mot chieu cac so nguyen
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
	cout << "\nSo nguyen to cuoi cung la: " << SNT(a, n) << endl;
	system("pause");
	return true;
}