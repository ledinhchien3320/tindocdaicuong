#include <iostream>
using namespace std;

void TamGiacVuongCanRong(int h) {
	//chay 2 vong for de ve ra tam giac
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == h || j == 1 || j == i) {
				cout << " * ";
			}
			else {
				cout << "   ";
			}
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	int h;
	do {
		cout << "Nhap vao chieu cao h: ";
		cin >> h;
		if (h <= 0) {
			cout << "Chieu cao khong hop le. Xin moi nhap lai.";
		}
	} while (h<=0);
	cout << "\n___TamGiacVuongCanRong___\n\n";
	TamGiacVuongCanRong(h);
	system("pause");
	return true;
}