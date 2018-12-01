#include<iostream>
using namespace std;
int main() {
	//viet ct nhap vao mot so nguyen, in ra cach doc cua so do
	int So;
	cout << "Nhap vao mot so: ";
	cin >> So;
	int tram, chuc, donvi;
	donvi = So % 10;
	So /= 10;
	chuc = So % 10;
	tram = So / 10; 
	{
	if (tram == 1) {
		cout << "Mot tram ";
	}
	if (tram == 2) {
		cout << "Hai tram ";
	}
	if (tram == 3) {
		cout << "Ba tram ";
	}
	if (tram == 4) {
		cout << "Bon tram ";
	}
	if (tram == 5) {
		cout << "Nam tram ";
	}
	if (tram == 6) {
		cout << "Sau tram ";
	}
	if (tram == 7) {
		cout << "Bay tram ";
	}
	if (tram == 8) {
		cout << "Tam tram ";
	}
	if (tram == 9) {
		cout << "Chin tram ";
	}
}
	{
		if (chuc == 0) {
			cout << "le ";
		}
		if (chuc == 1) {
			cout << "Mot muoi ";
		}
		if (chuc == 2) {
			cout << "Hai muoi ";
		}
		if (chuc == 3) {
			cout << "Ba muoi ";
		}
		if (chuc == 4) {
			cout << "Bon muoi ";
		}
		if (chuc == 5) {
			cout << "Nam muoi ";
		}
		if (chuc == 6) {
			cout << "Sau muoi ";
		}
		if (chuc == 7) {
			cout << "Bay muoi ";
		}
		if (chuc == 8) {
			cout << "Tam muoi ";
		}
		if (chuc == 9) {
			cout << "Chin muoi ";
		}
	}
	{
		if (donvi == 1) {
			cout << "Mot ";
		}
		if (donvi == 2) {
			cout << "Hai ";
		}
		if (donvi == 3) {
			cout << "Ba ";
		}
		if (donvi == 4) {
			cout << "Bon ";
		}
		if (donvi == 5) {
			cout << "Nam ";
		}
		if (donvi == 6) {
			cout << "Sau ";
		}
		if (donvi == 7) {
			cout << "Bay ";
		}
		if (donvi == 8) {
			cout << "Tam ";
		}
		if (donvi == 9) {
			cout << "Chin ";
		}
	}
	system("pause");
	return true;
}