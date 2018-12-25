#include <iostream>

using namespace std;
int main() {
	int *ptr = nullptr;
	int val = 10;
	ptr = &val;
	if ( ptr == nullptr) {
		cout << "Nothing\n";
	}
	else {
		cout << *ptr << " " << ptr << endl;
	}
	system("pause");
	return true;
}