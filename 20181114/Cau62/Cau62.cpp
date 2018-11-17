#include<iostream>
using namespace std;
int main() {
	//tim UCLN cua 2 so a,b
	int a, b, maxa = 0, maxb = 0;
	cout << "nhap 2 so: ";
	cin >> a >> b;
	for (int i = 1; i <= a; i++) {
		if (a%i == 0) {
			maxa = i;
		}
	}
	for (int j = 1; j <= b; j++) {
		if (b%j == 0 ) {
			maxb = j;
		}
	}
	if (maxa = maxb) {
		cout << "UCLL cua a va b la" << maxa << endl;
	}
	system("pause");
	return true;
}