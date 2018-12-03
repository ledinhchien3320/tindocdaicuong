#include<iostream>
using namespace std;
int main() {
	//cau33; tinh S(n)= canbac2(2+ canbac2(2+ canbac2(2+...+canbac2(2))) co n dau can
	//khai bao va nhap n, sau do gan S la canbac2 cua 2
	int n;
	float S = sqrt(2);
	cout << "nhap n:";
	cin >> n;
	//chay vong for tu 2 den n de tinh tong S cua bai ra
	for (int i = 2; i<=n; i++) {
		S = sqrt(2 + S);
}
	cout << "Result= " << S << "\n" << endl;
	system("pause");
	return true;
}