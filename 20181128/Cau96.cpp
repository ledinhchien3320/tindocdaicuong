#include<iostream>
using namespace std;
int main() {
	//viet ct nhap vao 3 canh cua 1 tam giac, cho biet do la tam giac gi
	int a, b, c;
	cout << "nhap 3 canh cua tam giac: ";
	cin >> a >> b >> c;
	if (a == b && b== c) {
		cout << "Tam giac do la tam giac deu\n";
	}
	else if (a == b || a == c || b == c) {
		cout << "Tam giac do la tam giac can\n";
	}
	else if (a ^ 2 == b ^ 2 + c ^ 2 || b ^ 2 == a ^ 2 + c ^ 2 || c ^ 2 == a ^ 2 + b ^ 2) {
		cout << "Tam giac do la tam giac vuong\n";
	}
	else {
		cout << "Tam giac do la tam giac thuong\n";
	}
	system("pause");
	return true;
}