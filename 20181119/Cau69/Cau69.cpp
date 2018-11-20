#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//-x^3 + x^5+...+(-1)^n * x^(2n+1)
	int n, x, t, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		x = pow(x, (2 * i)+1);
		t = pow(-1, i);
		S += t * x;
	}
	cout << "Cau69= " << S << endl;
	system("pause");
	return true;
}
}