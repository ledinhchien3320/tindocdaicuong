#include <iostream>
#define Max 100

using namespace std;

void NhapMang(float a[], int &n) {
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n<0 || n>Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n<0 || n>Max);
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void XuatMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << "  ";
		}
	}
}
int Soduongdautien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			return a[i];
		}
	}
		return -1;
	}
int main() {
	//viet ham liet ke cac gia tri am cua mot mang so thuc
	float a[Max];
	int n;
	NhapMang(a, n);
	XuatMang(a, n);
	cout << "So duong dau tien cua mang la: " << Soduongdautien << endl;
	system("pause");
	return true;
}