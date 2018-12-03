#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//kiem tra xem so nguyen 4byte co dang 2^k hay k
	int n;
	bool Ktra = true;
	cout << "nhap n: ";
	cin >> n;
	while ( n != 1 ) {
		int i = n % 2;
	    n /= 2;
	if (i % 2 == 0) {
		Ktra;
	}
	else {
		Ktra = false;
	     }
    }
    if (Ktra) {
	cout << "so do co dang 2^k ";
     }
	else {
		cout << "so do k co dang 2^k ";
	}
	system("pause");
	return true;
}