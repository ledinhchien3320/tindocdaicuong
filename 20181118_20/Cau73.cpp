#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//Tinh S=-1 + x + x^2/2! + x^4/4!+...+ (-1)^n*x^2n/2n!
	int n, x, t = 1, m = 1, m1=1, S = 0;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		t == pow(-1, i)*pow(x, 2 * i);
		m == 2 * i;
		m1 == m1 * m*(m - 1);
		S += (float)t / m1;
	}
	cout << "Cau73= " << S << endl;
	system("pause");
	return true;
}