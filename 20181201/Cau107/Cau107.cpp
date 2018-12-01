#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//viet ham tinh canbacNcua(x)
	int n, x;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0) {
			cout << "n phai lon hon 0. Xin moi nhap lai.\n";
		}
	} while (n <= 0);
	do {
		cout << "Nhap x: ";
		cin >> x;
		if (x <= 0) {
			cout << "x phai lon hon 0. Xin moi nhap lai.\n";
		}
	} while (x <= 0 );
	float Result = pow(x, (float)1 / n);
	cout << "Can bac n cua x la: " << Result << endl;
	system("pause");
	return true;
}