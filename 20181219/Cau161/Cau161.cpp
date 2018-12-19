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
float InGiatri(float a[], int n) {
	int x, y;
	cout << "Nhap gia tri cua khoang [x, y]: "<<endl;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	for (int i = 0; i < n; i++) {
		if (a[i] > x&& a[i] < y) {
			return a[i];
			break;
		}
	}
	return -1;
}
int main() {
	//Tim gia tri dau tien nam trong khoang [x,y] cho trc, neu k co gia tri nao thoa man thi tra ve -1
	float a[Max];
	int n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n <= 0 || n > Max) {
			cout << "so phan tu khong hop le, xin moi nhap lai.";
		}
	} while (n <= 0 || n > Max);
	Nhap(a, n);
	Xuat(a, n);
	cout<<"\nGia tri dau tien trong mang [x,y] la: "<< InGiatri(a, n) <<endl;
	system("pause");
	return true;
}