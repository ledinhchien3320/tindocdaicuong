#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//Tinh S=canbacN+1(N! + canbacN((N-1)! + ...canbac2(1!))) co n dau can
	//khai bao n, S, G la giai thua cua cac so tu 1 den n
	int n, G = 1;
	float S = pow(1, 1 / 2);
	cout << "nhap n: ";
	cin >> n;
	//chay vong for
	for (int i = 2; i <= n; i++) {
		G = G * i;
		S = pow((float)(G + S), (float)1 /i+1);
	}
	cout << "Cau39= " << S << "\n" << endl;
	system("pause");
	return true;
}