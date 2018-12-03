#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//tinh S= canbacN+1(n + canbacN(n-1 +...+canbac2(1))) co N dau can
	//khai bao n,S 
	int n;
	float S = pow(1, 1 / 2);
	cout << "nhap n: ";
	cin >> n;
	//chay vong for;
	for (int i = 2; i <= n; i++) {
		S = pow((float)(i + S), (float)1 / (i + 1));
	}
	cout << "Cau38= " << S << "\n" << endl;
	system("pause");
	return true;
}