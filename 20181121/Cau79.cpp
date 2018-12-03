#include<iostream>
using namespace std;
int main() {
	//dem so luong chu so cua so nguyen duong n
	int n, Dem = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = n; i != 0; i /= 10) {
		Dem++;
	}
	cout << "so chu so cua n la: " << Dem << endl;
	system("pause");
	return true;
}