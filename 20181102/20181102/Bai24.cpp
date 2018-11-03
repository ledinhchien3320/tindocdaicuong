#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//liet ke tat ca cac uoc so le cua so nguyen duong n
	//khai bao va nhap n
	int n;
	cout << "nhap n: "; cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0 && i%2==1)
			cout << "uoc so le cua n la: " << i<<"\n";
	}
	system("pause");
	return true;
}