#include<iostream>
using namespace std;
int main() {
	//liet ke tat ca cac uoc so cua so nguyen duong n
	int n;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			cout << "uoc so cua n la: " << i << endl;
		}
	}
	system("pause");
	return true;
}