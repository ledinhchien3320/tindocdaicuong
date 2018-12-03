#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh S=1 - 1/(1+2) + 1/(1+2+3) +...+ (-1)^n+1 *1/(1+2+3+...+n)
	int n, m = 0, S = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		m += i;
		S += S + (float)(1 * pow(-1, (1 + i))) / m;
	}
	cout << "Cau70= " << S << endl;
	system("pause");
	return true;
}