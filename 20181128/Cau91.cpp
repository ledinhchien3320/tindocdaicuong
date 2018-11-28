#include<iostream>
using namespace std;
int main() {
	//viet ct in ra tat ca cac so le <100
	int i = 1;
	while (i < 100) {
		if (i % 2 == 1) {
			cout << i << endl;
		}
		i++;
	}
	system("pause");
	return true;
}