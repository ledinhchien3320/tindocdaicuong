#include<iostream>
using namespace std;
int main() {
	//cho SND n kiem tra xem n co phai la so hoan thien hay k
	//khai bao va nhap n
	//so hoan thien la so ma tong cac uoc cua no bang chinh no
	int n, S = 0;
	cout << "Nhap n: ";
	cin >> n;
	//chay vong for
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			S += i;
		}
	}
	//dua ra Dk de so sanh s vs n xem n co phai la so hoan thien k
	if (S = n) {
		cout << "n la so hoan thien\n";
	}
	else
	{
		cout << "n khong phai la so hoan thien\n";
	}
	system("pause");
	return true;
}