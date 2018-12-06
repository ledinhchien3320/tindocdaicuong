#include <iostream>

using namespace std;
int main() {
	//voi 3 so 1k 2k 5k. viet ct in ra tat ca cac cach de co tong la 200k tu 3 so do
	for (int i = 0; i <= 200; i++) {
		for (int j = 0; j <= 100; j++) {
			for (int k = 0; k <= 40; k++) {
				if (i * 1 + j * 2 + k * 5 == 200) {
					cout <<i<<" to 1k " << j <<" to 2k "<< k <<" to 5k "<< endl;
			}
		}
	}
}
	system("pause");
	return true;
}