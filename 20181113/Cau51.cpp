#include<iostream>
using namespace std;
int main() {
	//tim chu so lon nhat cua so nguyen duong n
	int n, Max = 0;
	cout << "Nhap mot so: ";
	cin >> n;
	while (n) {
		int i = n % 10;
		n /= 10;
		if (i > Max) {
			Max = i;
		}
	}
	cout << "Cau51= " << Max << endl;
	system("pause");
	return true;
}