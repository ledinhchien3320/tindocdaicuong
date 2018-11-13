#include<iostream>
using namespace std;
int main() {
	//tim so dao nguoc cua so nguyen duong n
	//ý tưởng: dùng thuật toán chia % để tách từng số sau đó nhân lại vs 10 và cộng vs số vừa tách đc
	int n, x, Result=0;
	cout << "Nhap mot so: ";
	cin >> n;
	//chay vong lap while;
	while (n) {
		x = n % 10;
		Result = Result * 10 + x;
		n /= 10;
	}
	cout << "Cau50= " << Result << endl;
	system("pause");
	return true;
}