#include <iostream>

#define Max 100
using namespace std;
void Nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
float Giatri(float a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] > 2003) {
			return a[i];
			break;
		}
	}
	return -1;
}
int main() {
	//cho mang mot chieu cac so thuc. Tim gia dau tien lon hon 2003. Neu k co thi tra ve -1
	float a[Max];
	int n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "So phan tu khong hop le. Xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	cout<<"\nGia tri dau tien lon hon 2003 la: "<<Giatri(a, n)<<endl;
	system("pause");
	return true;
}