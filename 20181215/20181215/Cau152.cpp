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
int SHT(int a[], int n) {
	int S = 0, Min=0;
	for (int i = 0; i <=n; i++) {
		for (int j = 1; j < a[i]; j++) {
			if (a[i] % j == 0) {
				S += j;
				break;
			}
		}
		if (S == a[i]) {
			Min = a[i];
		}
		if (S == a[i] && a[i] < Min) {
			Min = a[i];
			return a[i];
		}
	}
	return -1;
}
int main() {
	//Tim so hoan thien nho nhat cua mang mot chieu cac so nguyen
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
	cout << "\nSo hoan thien nho nhat la: " << SHT(a, n) << endl;
	system("pause");
	return true;
}