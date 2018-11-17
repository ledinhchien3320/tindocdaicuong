#include<iostream>
using namespace std;
int main()
{
	//giai phuong trinh bac 1
	int a, b, x1;
	cout << "Cho PT: ax+b=0\n nhap 2 so a,b ";
	cin >> a >> b;
	if (a == 0) {
		cout << "PT vo nghiem\n";
	}
	else {
		x1 = (float)(- b) / a;
		cout << "PT co nghiem la: " << x1<<endl;
	}
	system("Pause");
	return true;
}