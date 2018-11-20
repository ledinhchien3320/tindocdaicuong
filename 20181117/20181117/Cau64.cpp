#include<iostream>
using namespace std;
int main()
{
	//giai phuong trinh bac 1
	int a, b, c, x1;
	cout << "Cho PT: ax+b=c\n nhap 3 so a,b,c: ";
	cin >> a >> b >> c;
	if (a = 0) {
		cout << "PT vo nghiem";
	}
	else {
		x1 == (c - b) / a;
		cout << "PT co nghiem la: " << x1;
	}
	system("Pause");
	return true;
}