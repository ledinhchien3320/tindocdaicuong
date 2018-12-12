#include <iostream>

#define Max 100

using namespace std;

void NhapMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void XuatMang(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void Min(float a[], int n) {
	int GTNN = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < GTNN) {
			GTNN = a[i];
		}
	}
	cout << "Gia tri nho nhat la: " << GTNN << endl;
}
int main() {
	//tim gia tri nho nhat trong mang mot chieu cac so thuc
	float a[Max];
	int n;
		do {
			cout << "Nhap so phan tu cua mang: ";
			cin >> n;
			if (n <= 0 || n > Max) {
				cout << "so phan tu khong hop le. xin moi nhap lai.";
			}
		} while (n <= 0 || n > Max);
		NhapMang(a, n);
		XuatMang(a, n);
		Min(a, n);
	system("pause");
	return true;
}