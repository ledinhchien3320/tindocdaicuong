#include <iostream>

#define Max 100
using namespace std;

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
}
void TinhS(float a[], int n) {
	int S = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			S += a[i];
		}
	}
	cout << "\nCau126 = " << S << endl;
}
int main() {
	//viet ham tinh tong cac gia tri am trong mang mot chieu cac so thuc
	float a[Max];
	int n, S=0;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	TinhS(a, n);
	system("pause");
	return true;
}