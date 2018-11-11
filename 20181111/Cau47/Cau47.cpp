#include<iostream>
using namespace std;
int main() {
	//tinh tong cac chu so chan cua so nguyen duong n
	//y tuong: tach cac chu so cua n bang cach %cho 10 
	//dua ra dk de so do chan roi dung bien S de tinh tong cac so do
	//khai bao bien va nhap n
	int n, S = 0;
	cout << "nhap mot so: ";
	cin >> n;
	//chay vong while
	while (n) {
		int i = n % 10;
		n /= 10;
		if (i % 2 == 0) {
			S += i;
		}
	}
	cout << "Cau47= " << S << endl;
	system("pause");
	return true;
}