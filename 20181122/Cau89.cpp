#include<iostream>
using namespace std;
int main() {
	//viet ct tinh tong cac gia tri le nguyen duong be hon so n
	int n, S = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (i % 2 == 1) {
			S += i;
		}
	}
	cout << "Cau89= " << S << endl;
	system("pause");
	return true;
}