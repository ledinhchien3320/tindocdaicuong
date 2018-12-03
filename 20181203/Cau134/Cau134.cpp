#include<iostream>
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
	int Maxa=a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > Maxa) {
			Maxa = a[i];	
		}
	}cout << "Phan tu lon nhat la: " << Maxa << endl;
}
int main() {
	//viet ham tim GTLN cua mang 
	float a[Max];
	int n;
	NhapMang(a, n);
	XuatMang(a, n);
	system("pause");
	return true;
}