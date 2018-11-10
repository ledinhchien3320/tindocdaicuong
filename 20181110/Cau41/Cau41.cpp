#include<iostream>
using namespace std;
int main() {
	// Tinh S=1/(1+ 1/(1+1/(1+1...+1/(1+1))) co n dau phan so
	int n;
	float S = 1;
	cout << "nhap n: ";
	cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		S = 1 + 1 / S;
	}
	cout << "Cau41= " << S << "\n" << endl;
	system("pause");
	return true;
}