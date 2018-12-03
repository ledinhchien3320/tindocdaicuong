#include<iostream>
using namespace std;
int main() {
	//tinh tong cac chu so cua so nguyen duong n
	// y tuong: tach cac chu so cua n bang cach % cho 10 sau do dung bien s de tinh tong
	//khai bao va nhap n
	int n, S = 0;
	cout << "nhap mot so: ";
	cin >> n;
	//chay vong lap while de tach cac so va tinh tong cac so do
	while (n) {
		int i = n % 10;
		S += i;
		n /= 10;
	}
	cout << "Cau44= " << S << endl;
	system("pause");
	return true;
}