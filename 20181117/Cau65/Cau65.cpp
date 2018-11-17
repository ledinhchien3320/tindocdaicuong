#include<iostream>
using namespace std;
int main() {
	//giai PT bac 2
	int a, b, c, x1, x2;
	cout << "cho PT bac 2: a*x^2 + b*x + c=0\n Nhap 3 so a,b,c:";
	cin >> a >> b >> c;
	int Delta = (b*b) - (4 * a*c);
	if (Delta < 0) {
		cout << "PT vo nghiem";
	}
	else if (Delta == 0) {
		x1 = (float)(-b) / (2 * a);
		cout << "PT co 1 nghiem duy nhat la: " << x1 << endl;
	}
	else if (Delta > 0) {
		x1 = (float)(-b - sqrt(Delta) / (2 * a));
		x2 = (float)(-b + sqrt(Delta) / (2 * a));
		cout << "PT co 2 nghiem phan biet x1= " << x1 << "\nx2= " << x2 << endl;
	}
	system("pause");
	return true;
}