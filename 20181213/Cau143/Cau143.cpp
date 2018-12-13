#include <iostream>

#define Max 100
using namespace std;
void Nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void Xuat(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
int Sochandautien(int a[], int n) {

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			return a[i];
			break;
		}
	}
		return -1;
}
int main() {
	//tim so chan dau tien trong mang mot chieu cac so nguyen
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le. Xin moi nhap lai";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	cout<<"\nSo chan dau tien la: "<<Sochandautien(a, n)<<endl;
	system("pause");
	return true;
}