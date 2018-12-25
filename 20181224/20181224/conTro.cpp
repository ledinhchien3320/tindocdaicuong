#include <iostream>
using namespace std;

int main() {
	int val = 10;
	int *ptr = &val;
	cout << ptr << endl;
	cout << &val << endl;
	*ptr = 20;
	cout << *ptr << endl;
	system("pause");
	return true;
}