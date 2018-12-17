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
int MinC(int a[], int n) {
	int Min=0;
	for (int i = 0; i <= n; i++) {
		if (a[i] % 2 == 0) {
			Min = a[i];
			break;
		}
		for (int i = 1; i < n; i++) {
			if (a[i] % 2 == 0 && a[i] < Min) {
				Min = a[i];
			}
		}
	}
	cout << "Gia tri duong nho nhat la: " << Min << endl;
    return -1;
}
int main() {
	//Tim gia tri chan nho nhat trong mang mot chieu cac so nguyen. Neu mang k co so nguyen thi tra ve -1
	int a[Max], n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	MinC(a, n);
	system("pause");
	return true;
}