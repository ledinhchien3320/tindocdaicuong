#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//Tinh S=x+x^2+x^3+...+ x^n
	int n, x, S=0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		S += pow(x, n);
	}
	cout << "Tong = " << S << endl;
	system("pause");
	return true;
}