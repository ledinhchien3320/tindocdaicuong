#include<iostream>
using namespace std;
int main() {
	//cau36: Tinh S=canbac2(n! + canbac2(n-1)!+...+canbac2(1!)
	//khai bao tong S, gan gia tri cua giai thua n la G, n
	int n, G = 1;
	float S = 0;
	cout << "nhap n: ";
	cin >> n;
	//chay vong for de tinh gia tri giai thua cua cac so tu 1 den n
	for (int i = 1; i <= n; i++) {
		G = G * i;
		S = sqrt(G + S);
	}
	cout << "Cau36= " << S << endl ;
	system("pause");
	return true;
}