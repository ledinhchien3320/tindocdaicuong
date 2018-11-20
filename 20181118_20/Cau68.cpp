#include<iostream>;
#include<cmath>
using namespace std;
int main() {
	// tinh S= -x^2 + x^4 +....+(-1)^n + x^2
	int n, x, t, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	for (int i = 1; i <= n; i++) {
		x = pow(x, 2 * i);
		t = pow(-1, i);
		S += t * x;
	}
	cout << "Cau68= " << S << endl;
	system("pause");
	return true;
}