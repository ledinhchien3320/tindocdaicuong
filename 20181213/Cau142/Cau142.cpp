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
void Min(int a[], int n) {
	int GTNN = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < GTNN) {
			GTNN = a[i];
		}
	}
	cout << "\nMin= " << GTNN << endl;
}
int main() {
	//tim gia tri nho nhat trong mang mot chieu cac so thuc
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
	Min(a, n);
	system("pause");
	return true;
}