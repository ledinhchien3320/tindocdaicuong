#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh S= canbac2(X^n+ canbac2(X^(n-1)+...+canbac2(x)))
	//khai bao n,x,tong S
	int n, x;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap x: ";
	cin >> x;
	float S = 0,T=0;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		T = pow(x, i);
		S = sqrt(T + S);
	}
	cout << "Cau40= " << S << "\n" << endl;
	system("pause");
	return true;
}