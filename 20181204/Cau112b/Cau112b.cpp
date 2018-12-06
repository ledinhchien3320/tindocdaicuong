#include <iostream>
using namespace std;

void HinhChuNhatRong(int d, int r) {
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= r; j++) {
			if (i == 1 || i==d || j==1 || j == r) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	int d, r;
	do {
		cout << "Nhap chieu dai: ";
		cin >> d;
		if (d <= 0) {
			cout << "chieu dai khong hop le. Xin moi nhap lai.";
		}
	} while (d <= 0);
	do {
		cout << "nhap vao chieu rong: ";
		cin >> r;
		if (r <= 0) {
			cout << "chieu rong khong hop le. Xin moi nhap lai.";
		}
	} while (r<=0);
	cout << "\n___Hcn rong___\n\n";
	HinhChuNhatRong(d, r);
	system("pause");
	return true;
}