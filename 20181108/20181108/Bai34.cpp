#include<iostream>
using namespace std;
int main() {
	//Bai34 tinh tong s=canbac2(n+ canbac2((n-1)+...+canbac2(1)) co n dau can
	//khai bao tong S va nhap n
	int n;
	float S = 0;
	cout << "nhap n: ";
	cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		S = sqrt(i + S);
	}
	cout << "Cau34= " << S << endl;
	system("pause");
	return true;
}