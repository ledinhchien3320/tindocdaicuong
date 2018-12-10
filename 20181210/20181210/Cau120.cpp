#include <iostream>

using namespace std;
int main() {
	//viet ct liet ke tat ca cac so chinh phuong nho hon n
	int n;
	do {
		cout << "nhap so n: ";
		cin >> n;
		if (n <= 0) {
			cout << "n phai lon hon 0. Xin moi nhap lai.";
		}
	} while (n<=0);
	for (int i = 2; i <= n; i++) {
		if (sqrt(i) == (int)sqrt(i)) {
			cout << i << endl;
		}
	}
	system("pause");
	return true;

}