#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh S=x - x^2 + x^3...+ (-1)^n+1 * x^n
	int n, x, t, S=0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		x = pow(x, i);
		t = pow(-1, i+1);
		S += t * x;
	}
	cout << "Cau67= " << S << endl;
	system("pause");
	return true;
}