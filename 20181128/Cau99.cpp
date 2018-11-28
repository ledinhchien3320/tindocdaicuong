#include<iostream>
using namespace std;
int main() {
	//viet ct nhap vao 3 so thuc, in 3 so do ra man hinh theo thu tu tang dan
	int a, b, c;
	cout << "Nhap 3 so: ";
	cin >> a >> b >> c;
	int Max;
	if (a > b) {
		Max = a;
		a = b;
		b = Max;
	}
	if (a > c) {
		Max = a;
		a = c;
		c = Max;
	}
	if (b > c) {
		Max = b;
		b = c;
		c = Max;
	}
	cout << "Cau99= " << a <<" " << b << " "<< c <<endl;
	system("pause");
	return true;
}