#include <iostream>
using namespace std;

void HCN_dac(int d, int r) {
//chay 2 vong for de ve ra hcn dac
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= r; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	//viet ct ve hcn dac
	int d, r;
	do {
		cout << "Nhap vao chieu dai cua hcn: ";
		cin >> d;
		if (d <= 0) {
			cout << "Chieu dai khong hop le. Xin moi nhap lai";
		}
	} while (d <= 0);
	do {
		cout << "Nhap vao chieu rong cua hcn: ";
		cin >> r;
		if (r <= 0) {
			cout << "Chieu rong khong hop le. Xin moi nhap lai.";
		}
	} while (r<=0);
	cout << "\n___HCN_dac___\n\n";
	HCN_dac(d, r);
	system("pause");
	return true;
}
