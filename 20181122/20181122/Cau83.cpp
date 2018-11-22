#include<iostream>
using namespace std;
int main() {
	//viet ct nhap vao 2 so thuc, kiem tra xem chung co cung dau hay k
	float a, b;
	cout << "nhap 2 so a va b: ";
	cin >> a >> b;
	if (a*b > 0) {
		cout << "2 so cung dau\n";
	}
	else {
		cout << "2 so khac dau\n";
	}
	system("pause");
	return true;
}