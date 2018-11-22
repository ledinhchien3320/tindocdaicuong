#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//tinh S=1^3 + 2^3 +...+ n^3
	int n, S = 0;
	cout <<"nhap mot so: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		S += pow(i, 3);
	}
	cout << "Cau86= " << S << endl;
	system("pause");
	return true;
}