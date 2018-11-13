#include<iostream>
using namespace std;
int main() {
	//dem so luong chu so lon nhat cua so nguyen duong n
    int n, Dem = 0, Max = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	while (n) {
		int i = n % 10;
		if (i >= Max ) {
			Max = i;
			Dem++;
		}
		n /= 10;
	}
	cout << "Cau53= " << Dem << endl;
	system("pause");
	return true;
}