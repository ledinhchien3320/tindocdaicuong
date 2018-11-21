#include<iostream>
using namespace std;
int main() {
	//Viet chuong trinh tinh tong cua day S= 1+2+3+...+n
	int n, S = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		S += i;
	}
	cout << "Cau77= " << S << endl;
	system("pause");
	return true;
}