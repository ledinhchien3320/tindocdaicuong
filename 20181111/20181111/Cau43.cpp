#include<iostream>
using namespace std;
	//dem so chu so cua so nguyen duong n
	int demso(int n) {
		//khai bao bien dem
		int dem = 0;
		//chay vong lap while de giam gia tri cua n di 10 la
		while (n) {
			int i = n / 10;
			dem++;
			n /= 10;
		}
		return dem;
	}
	int main() {
		//khai bao va nhap n
		int n;
	cout << "nhap mot chu so: ";
	cin >> n;
	//gan biet Result cho KQ cua ct o tren va in ra ket qua
	int Result = demso(n);
	cout << "so vua nhap co " << Result << " chu so "<<endl;
	system("pause");
	return true;
}
