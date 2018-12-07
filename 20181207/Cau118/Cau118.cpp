#include <iostream>

using namespace std;

int main() {
	int dem = 0, n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i%j == 0)
				dem++;
		}
		if (dem == 2) {
			cout << i << endl;
	}
			dem = 0;
	}
	system("pause");
	return true;
}