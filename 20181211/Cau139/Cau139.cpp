#include <iostream>

#define Max 100

using namespace std;
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int Giatriduongnhonhat(int a[], int n) {
	int Min = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && a[i] < Min) {
			Min = a[i];
			return a[i];
		}
	return -1;
    }
}
int main() {
	//tim gia tri duong nho nhat trong mang mot chieu cac so thuc. Neu k co thi tra ve kq -1
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le. xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	int duongdau = Giatriduongnhonhat(a, n);
	cout << "\nGia tri duong nho nhat la: " << duongdau << endl;
	system("pause");
	return true;
}
