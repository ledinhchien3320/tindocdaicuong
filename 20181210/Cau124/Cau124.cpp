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
		cout << a[i] <<endl;
	}
}
void KiemTra(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] < 2004) {
			cout << "\nMang ton tai so chan < 2004"<< endl;
		}
		else {
			cout << "\nMang k ton tai so chan < 2004" << endl;
		}
	}
}
int main() {
	//viet ham tim kiem tra trong mang mot chieu cac so nguyen co so chan < 2004 hay k
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	KiemTra(a, n);
	system("pause");
	return true;
}