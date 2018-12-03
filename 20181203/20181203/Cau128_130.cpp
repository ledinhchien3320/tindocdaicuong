#include <iostream>
#define Max 100

using namespace std;

void NhapMang(float a[], int &n) {
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n < 0 || n > Max) {
			cout << "So luong phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n < 0 || n > Max);
	for (int i = 0; i < n; i++) {
		cout << "\nNhap vao a[" << i << "]=";
	    cin >> a[i];
	}
}
void XuatMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
}
int main() {
	//viet ham nhap vao mang mot chieu cac so thuc
	float a[Max];
	int n;
	NhapMang(a, n);
	XuatMang(a, n);
	system("pause");
	return true;
}