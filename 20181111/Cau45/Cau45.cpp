#include<iostream>
using namespace std;
int main() {
	//tinh tich cac chu so cua so nguyen duong n
	//y tuong: tach cac so cua so n bang cach % cho 10 sau do dung bien T de tinh tich
	//khai bao bien va nhap n
	int n, T = 1;
	cout << "nhap mot so: ";
	cin >> n;
	//chay vong lap while
	while (n) {
		int i = n % 10;
		T *= i;
		n /= 10;
	}
	cout << "Cau45= " << T << endl;
	system("pause");
	return true;
}