#include <iostream>

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
float TimSoAmDau(float a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] <0 ) {
			return a[i];
			break;
		}
	}
	return -1;
}
int main() {
	//Tim so amdau tien trong mang mot chieu cac so thuc
	float a[Max];
	int n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo am dau tien la: " << TimSoAmDau(a, n) << endl;
	system("pause");
	return true;
}