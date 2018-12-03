#include <iostream>
#define Max 100

using namespace std;

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << "  ";
		}
	}
}
int main() {
	//viet ham liet ke cac gia tri chan trong mang mot chieu cac so nguyen
	int a[Max];
	int n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n<0 || n>Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai!!";
		}
	} while (n<0 || n>Max);
	NhapMang(a, n);
	XuatMang(a, n);
	system("pause");
	return true;
}