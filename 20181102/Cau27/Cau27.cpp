#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//dem so luong uoc so chan cua so nguyen duong n
	//khai bao va nhap n
	int n, Dem = 0;
	cout << "nhap n: "; cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0 && i % 2 == 0)
			Dem += 1;
	}
	cout << "Cau27= " << Dem << "\n";
	system("pause");
	return true;
}