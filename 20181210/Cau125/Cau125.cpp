#include <iostream>

#define Max 100
using namespace std;

void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " " << a[i];
	}
}
void DemSoLuong(int a[], int n) {
	int Dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 100) {
			Dem++;
		}
	}
	cout << "\nSo chu so < 100 trong mang la: " << Dem << endl;
}
int main() {
	//viet ham tim dem so chu so < 100 trong mang mot chieu cac so nguyen
	int a[Max], n, Dem = 0;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	DemSoLuong(a, n);
	system("pause");
	return true;
}