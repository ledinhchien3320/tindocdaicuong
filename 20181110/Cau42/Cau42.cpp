#include<iostream>
using namespace std;
int main() {
	// tim gia tri k lon nhat sao cho S(k)=1+2+3+...+k < n
	int n, S = 0, Max1=0,Max=0;
	cout << "nhap n: ";
	cin >> n;
	//chay vong for
	for (int i = 1; i < n; i++) {
		S += i;
		if (S < n) {
			Max = i;
		}
	}
	if (Max > Max1) {
		cout << "Cau42= " << Max << endl;
	}
	system("pause");
	return true;
}