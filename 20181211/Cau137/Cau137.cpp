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
		cout << a[i] << " ";
	}
}
void Vitrinhonhat(int a[], int n) {
	int vtnn=0;
	for (int i = 0; i < n; i++) {
		if (a[i] < a[vtnn]) {
			vtnn = i;
		}
	}
	cout << "\nVi tri nho nhat la: " << vtnn << endl;
}
int main() {
	//Tim vi tri nho nhat trong mang mot chieu cac so nguyen
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
	Vitrinhonhat(a, n);
	system("pause");
	return true;
}