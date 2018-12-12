#include <iostream>

#define Max 100

using namespace std;

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= " ;
		cin >> a[i];
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i]<<" ";
	}
}
int Vitrichandautien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			return i;
		}
	}
	return -1;
}
int main() {
	//tim vi tri chan dau tien trong mang mot chieu cac so nguyen. Neu k co tra ve -1
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le. xin moi nhap lai.";
		}
	} while (n<=0||n>Max);
	NhapMang(a, n);
	XuatMang(a, n);
	int vitri = Vitrichandautien(a, n);
	cout << "\nVi tri chan dau tien la: " << vitri << endl;
	system("pause");
	return true;
}
