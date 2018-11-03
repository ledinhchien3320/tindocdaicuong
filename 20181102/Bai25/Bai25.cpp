#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh tong tat ca cac uoc so chan cua so nguyen duong n
	//khai bao va nhap n
	int n, S = 0;
	cout << "nhap n: "; cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0 && i % 2 == 0)
			S += i;
	}
	cout << "Cau25= " << S<<"\n";
	system("pause");
	return true;
}