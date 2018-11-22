#include<iostream>
using namespace std;
int main() {
	//viet ct giai va bien luan pt bac nhat
	int a, b;
	float x;
	cout << "cho pt ax+b=0\nnhap 2 so a va b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) {
			cout << "pt co vo so nghiem\n";
		}
		else {
			cout << "pt vo nghiem\n";
		}
	}
	else {
		x = -b / a;
		cout << "pt co nghiem la x= " << x << endl;
	}
	system("pause");
	return true;
}