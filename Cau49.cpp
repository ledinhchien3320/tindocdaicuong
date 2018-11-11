#include<iostream>
using namespace std;
int main() {
	//tim chu so dau tien cua so nguyen duong n
	//khai bao va nhap n;
	int n, Result; 
	cout << "nhap mot so: ";
	cin >> n;
	//chay vong lap while
	while (n) {
		int i = n % 10;
		Result = i;
		n /= 10; 
	}
	cout << "cau 49= " << Result << endl;
	system("pause");
	return true;
}