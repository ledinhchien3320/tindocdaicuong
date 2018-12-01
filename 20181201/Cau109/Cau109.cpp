#include<iostream>
using namespace std;
int main() {
	//viet chuong trinh in bang cuu chuong ra man hinh
	for (int i = 1; i <= 10; i++) {
		cout << "____\n";
		for (int j = 1; j <= 10; j++) {
		cout << i << " * " << j << " = " << i * j << endl;
	}
}
	system("pause");
	return true;
}