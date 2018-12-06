#include<iostream>

using namespace std;

void Tamgiacvuongcandac(int h) {
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
				cout << "*";
		}
		cout << endl;
	}
}
int main() {
	int h;
	do {
		cout << "Nhap chieu cao h: ";
		cin >> h;
		if (h <= 0) {
			cout << "Chieu cao khong hop le.Xin moi nhap lai.";
		}
	} while (h<=0);
	cout << "\n___TamGiacVuongCan___\n\n";
	Tamgiacvuongcandac(h);
	system("pause");
	return true;
}