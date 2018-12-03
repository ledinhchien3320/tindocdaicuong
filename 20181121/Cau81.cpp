#include<iostream>
using namespace std;
int main() {
	//viet ct tim so lon nhat trong 3 so a, b, c
	int a, b, c;
	cout << "nhap 3 so a, b, c: ";
	cin >> a >> b >> c;
		int Max = a;
	if (Max < b) {
		Max = b;
	}
	if (Max < c) {
		Max = c;
	}
	cout << "so lon nhat trong 3 so la: " << Max << endl;
	system("pause");
	return true;
}