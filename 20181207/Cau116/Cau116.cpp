#include <iostream>

using namespace std;

int main() {
	//viet ct nhap n va tinh tong S= 1+2+3+...+n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong = " << ((n*(n + 1)) / 2) << endl;
	system("pause");
	return 0;
}