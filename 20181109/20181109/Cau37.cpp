#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh tong S= canbacN(N + canbacN-1((N-1) +...+canbac3(3 + canbac2(2)) co n-1 dau can
	//khai bao n tong S
	int n;
	float S = pow(2, 1 / 2);
	cout << "nhap n: ";
	cin >> n;
	//chay vong for tu 3 den n de tinh 
	for (int i = 3; i <= n; i++) {
		S = pow((float)(i + S),(float)1 / i);
	}
	cout << "Cau37=" << S << "\n" << endl;
	system("pause");
	return true;
}