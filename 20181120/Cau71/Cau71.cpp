#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//Tinh S=-x + x^2/(1+2) - x^3/(1+2+3) +...+ (-1)^n*x^n/(1+2+3+....+n)
	int n, x, t=1, m=0, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		t == pow(-1, i)*pow(x, i);
		m += i;
		S += S + (float)t / m;
	}
	cout << "Cau71= " << S << endl;
	system("pause");
	return true;
}