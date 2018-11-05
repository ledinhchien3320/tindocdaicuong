#include<iostream>
using namespace std;
int main() {
	//tim uoc so le lon nhat cua so nguyen duong n
	//khai bao va nhap n
	int n, Max=0;
	cout << "Nhap n: "; 
	cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0 && i % 2 == 1) {
			if (i > Max);
			Max == i; 
		}
       
	}cout << "Max(n)= " << Max << "\n";
	system("pause");
	return true;
}