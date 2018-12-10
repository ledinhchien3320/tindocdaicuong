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
		cout<<" "<< a[i];
	}
}
void TimGTLN(int a[], int n) {
	int GTLN = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > GTLN) {
			GTLN = a[i];
			cout <<"Max= "<< GTLN << endl;
		}
	}
}
int main() {
	//viet ham tim GTLN trong mang mot chieu cac so nguyen
	int a[Max], n, GTLN = 0;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	NhapMang(a, n);
	XuatMang(a, n);
	TimGTLN(a, n);
	system("pause");
	return true;
}