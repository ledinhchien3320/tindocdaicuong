#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//kiem tra xem so nguyen 4byte co dang 3^k hay k
	int n;
	bool Ktra = true;
	cout << "nhap n: ";
	cin >> n;
	while (n != 1) {
		int i = n % 3;
		n /= 3;
		if (i % 3 == 0) {
			Ktra;
		}
		else {
			Ktra = false;
		}
	}
	if (Ktra) {
		cout << "so do co dang 3^k ";
	}
	else {
		cout << "so do k co dang 3^k ";
	}
	system("pause");
	return true;
}