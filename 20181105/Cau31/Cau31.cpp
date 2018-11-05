#include<iostream>
using namespace std;
int main() {
	//cho snd n, kiem tra xem n co phai la so nguyen to hay k
	//so nguyen to la so chi chia het cho 1 va chinh no
	//khai bao va nhap n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	//dua ra dk de kiem tra xem n co phai la so nguyen to hay k
	for (int i = 2; i < n; i++) {
		if (n%n == 0 && n%i != 0) {
			cout << "n la so nguyen to\n";
		}
		else
		{
			cout << "n khong la so nguyen to\n";
		}
	}
	system("pause");
	return true;
}