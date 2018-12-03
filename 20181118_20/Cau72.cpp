#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh S=-x + x^2/2! + x^3/3! +...+ (-1^n)*X^n/n!;
	int n, x, t = 1, m = 1, S = 0;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		t == pow(-1, i)*pow(x, i);
		m == m * i;
		S += (float)t / m;
	}
	cout << "Cau72= " << S << endl;
	system("pause");
	return true;
}