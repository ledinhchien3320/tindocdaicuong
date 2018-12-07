#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	//viet ct tinh Sin(x) theo cong thuc Sin(x)= x- x^3/3 + x^5/5 +... + (-1)^n.x^(2n+1)/2n+1
	int x, n, t, m;
	float S = 0;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0) {
			cout << "n phai > 0. Xin moi nhap lai.";
		}
	} while (n<=0);
	do {
		cout << "Nhap x: ";
		cin >> x;
		if (x <= 0) {
			cout << "x phai >0.Xin moi nhap lai.";
		}
	} while (x<=0);
	for (int i = 1; i <= n; i++) {
		t = pow(-1, i)*pow(x, 2 * i + 1);
		m = 2 * i + 1;
		S += t / m;
	}
	cout << "Sin(x)= " << setprecision(5) << fixed << S << endl;
	system("pause");
	return true;
}