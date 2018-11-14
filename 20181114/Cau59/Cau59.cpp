#include<iostream>
using namespace std;
int main() {
	//kiem tra xem so nguyen n co phai la so doi xung hay k
	int n, K=0;
	//K ky hieu cho so nguoc X ky hieu cho so xuoi
	cout << "nhap mot so: ";
	cin >> n;
	int X = n;
	while (n) {
		K = K * 10 + n % 10;
		n /= 10;
	}
	if (X == K) {
		cout << "n la so doi xung\n";
	}
	else {
		cout << "n khong la so doi xung";
	}
	system("pause");
	return true;
}