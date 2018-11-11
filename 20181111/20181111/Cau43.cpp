#include<iostream>
using namespace std;
	//dem so chu so cua so nguyen duong n
	int demso(int n) {
		int dem = 0;
		while (n) {
			int i = n / 10;
			dem++;
			n /= 10;
		}
		return dem;
	}
	int main() {
		int n;
	cout << "nhap mot chu so: ";
	cin >> n;
	int Result = demso(n);
	cout << "so vua nhap co " << Result << " chu so "<<endl;
	system("pause");
	return true;
}
