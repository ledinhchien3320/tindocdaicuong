#include<iostream>
using namespace std;
int main() {
	//dem so luong chu so be nhat cua so nguyen duong n
	int n, Dem = 0, Min = 9;
	cout << "nhap mot so: ";
	cin >> n;
	while (n!=0) {
		int i = n % 10;
		n /= 10;
		if (i <= Min) {
			Min = i;
			Dem++;
		}
	}
	cout << "Cau54= " << Dem << endl;
	system("pause");
	return true;
}