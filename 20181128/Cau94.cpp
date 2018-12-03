#include<iostream>
using namespace std;
int main() {
	//viet ct in ra tat ca cac so le <100 tru cac so 5 7 93
	for (int i = 1; i <= 100; i+=2) {
		if (i == 5 || i == 7 || i == 93)
			continue;
            cout << i << endl;
	}
	system("pause");
	return true;
}