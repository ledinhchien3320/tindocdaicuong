#include<iostream>
using namespace std;
int main() {
	// dem so luong chu so le cua so nguyen duong n
	//y tuong: tach cac chu so bang cach % cho 10
	//dua ra dk neu so do le thi tang gia tri cua bien dem len 1 lan
	//khai bao bien va nhap n
	int n, dem = 0;
	cout << "nhap mot so: ";
	cin >> n;
	//chay vong while
	while (n) {
			int i = n % 10;
			n /= 10;
		
			if (i % 2 == 1) {
				dem += 1;
			}
	}
		cout << "Cau46= " << dem << endl;
		system("pause");
		return true;
}