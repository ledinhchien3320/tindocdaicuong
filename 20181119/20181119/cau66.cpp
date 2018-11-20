#include<iostream>
using namespace std;
int main() {
	//giai pt bac 4
	int a, b, c, t,t1,t2, x1, x2,x3,x4,x5,x6;
	cout << "cho pt bac 4 nhap 3 so a,b,c:";
	cin >> a >> b >> c;
	int Delta = (b * b) - (4 * a*c);
	if (Delta < 0) {
		cout << "pt vo nghiem";
	}
	else if (Delta == 0) {
		t = (float)(-b / (2 * a));
		x1 = sqrt(t);
		x2 = -sqrt(t);
		cout << "Pt co 2 nghiem la x1= " << x1 << "\nx2= " << x2 << endl;
	}
	else if(Delta > 0) {
		t1 = (float)(-b + sqrt(Delta) / (2 * a));
		t2 = (float)(-b - sqrt(Delta) / (2 * a));
		x3 = sqrt(t1);
		x4 = -sqrt(t1);
		x5 = sqrt(t2);
		x6 = -sqrt(t2);
		cout << "Pt co 4 nghiem la x1= " << x3 << "\n x2=" << x4 << "\nx3= " << x5 << "\nx4= " << x6 << endl;
	}
	system("pause");
	return true;
}