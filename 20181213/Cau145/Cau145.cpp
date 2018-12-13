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
int SCP(int a[], int n) {
	int S = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0)
			return a[i];
		for (int j = 1; j <= a[i]; j++) {
			if (a[i] % j == 0) {
				S += j;
			}
		}
		if (S == a[i]) {
			return a[i];
		}
 	}
	return -1;
}
int main() {
	//tim so chinh phuong dau tien trong mang mot chieu cac so nguyen
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
	cout << "So chinh phuong dau tien la: " << SCP(a, n) << endl;
	system("pause");
	return true;
}