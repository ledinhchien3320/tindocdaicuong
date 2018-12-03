#include <iostream>
#define Max 100

using namespace std;

void NhapMang(int a[], int &n) {
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n < 0 || n > Max) {
			cout << "So phan tu khong hop le.Xin moi nhap lai";
		}
	} while (n < 0 ||n > Max);
	for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << a[i];
			break;
		}
		else {
		
		}
	}
	cout << "-1";
}
int main() {
	//tim gia tri duong da tien cua mang neu k co thi tra ve -1
	int a[Max];
	int n;
	NhapMang(a, n);
    Xuatmang(a, n);
	system("pause");
	return true;
}