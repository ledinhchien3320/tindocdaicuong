#include <iostream>

using namespace std;
int main() {
	int *ptr = nullptr;
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i <= 10; i++) {
		ptr = &a[i];
		cout << *ptr << " " << ptr << endl;
	}
	system("pause");
	return true;
}