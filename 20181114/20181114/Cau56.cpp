#include<iostream>
using namespace std;
int main() {
	//kiem tra xem so nguyen duong n co phai toan chu so le hay k
	int n; 
	bool Result=true;
	cout << "Nhap mot so: ";
	cin >> n;
	//chay vong lap while de tach tung so cua n
	while (n != 0) {
		int i = n % 10;
		n /= 10;
		if (i % 2 == 1) {
		   Result;
		}
		else {
			Result= false;
		}
	}
	if (Result) {
		cout << "Cau56: dung\n";
	}
	else {
		cout << "Cau56:sai\n";
	}
	system("Pause");
	return true;
}