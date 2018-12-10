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
void TimMin(int a[], int n) {
	int Min = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < a[Min]) {
			Min = a[i];
			cout << "Min= " << i << endl;
		}
	}
}
int main() {
	//viet ham tim vi tri Min trong mang mot chieu cac so nguyen
	int a[Max], n, Min = 0;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	TimMin(a, n);
	system("pause");
	return true;
}