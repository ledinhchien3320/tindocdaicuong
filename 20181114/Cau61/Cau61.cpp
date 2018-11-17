#include<iostream>
using namespace std;
int main() {
	//kiem tra xem cac chu so cua so nguyen duong n co giam dan tu trai sang phai k
	int n, d;
	bool kiemtra = true;
	cout << "Nhap mot so: ";
	cin >> n;
	while (n != 0) {
		int i = n % 10;
		n /= 10;
		d = i;
		if (d > i) {
			kiemtra;
		}
		else {
			kiemtra = false;
		}
	}
	if (kiemtra = false) {
		cout << "cac so cua n khong giam dan tu trai sang phai\n";
	}
	else {
		cout<<"cac so cua n giam dan tu trai sang phai\n";
	}
	system("pause");
	return true;
}