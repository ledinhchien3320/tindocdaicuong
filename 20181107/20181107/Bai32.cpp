#include<iostream>
using namespace std;
int main() {
	//cau 32: cho snd n. kiem tra xem n co phai la so chinh phuong hay k
	//so chinh phuong la so ma can bac 2 cua no la 1 so nguyen
	//khai bao va nhap n
	int n;
	cout << "Nhap n: ";
	cin >> n;
	//dua ra DK neu can bac 2 cua n la 1 so nguyen thi n la so chinh phuong
	if (sqrt(n) == (int)sqrt(n)) {
		cout << "n la so chinh phuong";
	}
	else
	{
		cout << "n khong phai la so chinh phuong\n";
	}
	system("pause");
	return true;
}
