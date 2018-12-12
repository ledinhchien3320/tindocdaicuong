#include <iostream>

#define Max 100
using namespace std;

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
}
int TimSSoChan(int a[], int n) {
	for (int i = n-1; i >=0; i--) {
		if (a[i] % 2 == 0) {
			return a[i];
		}
	}
	return -1;
}
int main() {
	//Tim so chan cuoi trong mang mot chieu cac so nguyen. Neu khong co thi tra ve Kq=-1
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0) {
			cout << "\nSo phan tu khong hop le.xin moi nhap lai.\n";
		}
	} while (n <= 0);
	NhapMang(a, n);
	XuatMang(a, n);
	int Sochancuoi = TimSSoChan(a, n);
	cout<<"So chan cuoi cung la: "<< Sochancuoi;
	system("pause");
	return true;
}