#include <iostream>

//a + i <=> &a[0 + i] 
//*(a+i) <=> a[i]
using namespace std;
void Nhap(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]= ";
		cin >> *(a+i);
	}
}
void Xuat(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(a + i) << " "<<(a+i)<<endl;
	}
}
int main() {
	int *a = nullptr, n;
	do {
		cout << "Nhap so phan tu cua mang: ";
		cin >> n;
		if (n < 0);
	} while (n < 0);
	a = new int[n];	// Xin cấp phát n ô nhớ kiểu int ở vùng nhớ HEAP
	Nhap(a, n);
	Xuat(a, n);
	if (a != NULL)
	{
		delete[] a;	// Thu hồi n ô nhớ vừa xin cấp phát trước đó 
	}
	system("pause");
	return true;
}