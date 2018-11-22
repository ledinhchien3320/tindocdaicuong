#include<iostream>
using namespace std;
int main() {
	//tim so nguyen duong n nho nhat sao cho S=1+2+...+n>10000
	int n = 0, S = 0;
	while (S < 10000) {
		n++;
		S = S + n;	
	}
	cout << "Cau87= " << n << endl;
	system("pause");
	return true;
}