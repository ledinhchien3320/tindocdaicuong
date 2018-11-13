#include<iostream>
using namespace std;
int main() {
	//tim chu so nho nhat cua so nguyen duong n
	int n, Min = 9;
	cout << "Nhap mot so: ";
	cin >> n;
	//chay vong lap while
	while (n) {
		int i = n % 10;
		n /= 10;
		if (i < Min) {
			Min = i;
		}
	}
	cout << "Cau52= " << Min << endl;
	system("pause");
	return true;
}