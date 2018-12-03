#include<iostream>
using namespace std;
int main() {
	//viet ct tim so m nho nhat sao cho 1+2+...+m < N
	int N, m = 0, S = 0;
	cout << "Nhap mot so: ";
	cin >> N;
	while (S < N) {
		m++;
		S += m;
	}
	cout << "Cau90= " << m << endl;
	system("pause");
	return true;
}