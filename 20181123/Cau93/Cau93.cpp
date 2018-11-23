#include<iostream>
using namespace std;
	//viet ct kiem tra mot so co phai la so nguyen to hay k
bool Songuyento(int);
bool Songuyento(int soA) {
	if (soA < 2) {
		return false;
	}
	else if (soA > 2) {
		if (soA % 2 == 0) {
			return false;
		}
		for (int i = 3; i <= sqrt((float)soA); i += 2) {
			if (soA % i == 0);
			return false;
		}
	}
	return true;
}
	int main(int argc, char**argv) {
		int n;
		cout << "nhap mot so: ";
		cin >> n;
		if (Songuyento(n) == true) {
			cout << "So " << n << " la so nguyen to\n";
		}
		else {
			cout << "So " << n << " khong phai la so nguyen to\n";
		}
	system("pause");
	return 0;
}