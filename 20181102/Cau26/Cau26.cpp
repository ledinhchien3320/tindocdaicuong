#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh tich tat ca cac uoc so le cua so nguyen duong n
	//khai bao va nhap n
	int n, T = 1;
	cout << "nhap n: "; cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0 && i % 2 == 1)
			T *= i;
	}
	cout << "Cau26= " << T << "\n";
	system("pause");
	return true;
}