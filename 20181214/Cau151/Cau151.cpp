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
	int Maxsnt = 0;
	for (int i = 1; i <n; i++) {
		for (int j = 2; j <= sqrt(a[i]); j++) {
			if (a[i] % j == 0) {
				Dem++;
				Maxsnt = a[i];
				break;
			}
		}
		if (Dem == 0 && a[i] > Maxsnt) {
			Maxsnt = a[i];
			return a[i];
		}
	}
	return -1;
}
int main() {
	//Tim so nguyen to lon nhat trong mang mot chieu cac so nguyen
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
	cout << "\nSo nguyen to lon nhat la: " << SNT(a, n) << endl;
	system("pause");
	return true;
}
