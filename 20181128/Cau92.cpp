#include<iostream>
using namespace std;
int main() {
	//Tim UCLN cua 2 so a va b
	int a, b;
	cout << "nhap 2 so a va b: ";
	cin >> a >> b;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	cout << "UCLN la: " << a << endl;
	system("pause");
	return true;
}