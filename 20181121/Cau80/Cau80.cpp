#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//Tinh S=x + x^2/(1+2) + x^3/(1+2+3) +...+ x^n/(1+2+3+...+n)
	int n, x, t = 1, m = 1, S = 0;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		t == pow(x, i);
		m += i;
		S += S + (float)t / m;
	}
	cout << "Cau80= " << S << endl;
	system("pause");
	return true;
}