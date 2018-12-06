/*      *           ứng vs h=4, cạnh đáy= 2*4-1
	   * *          ở vị trí thứ 4, hàng đầu chỉ in ra 1 dấu *
	  *   *         vị trí     3 và 5, hàng 2 in ra 2 dấu *
	 *******             //    2 và 6,      3 //    2 dấu *
	 1234567             //    1 đến 7,      4 //   7 dấu *
				   các vị trí đó tương ứng vs h-i+1 đến h+i-1
*/
#include<iostream>
using namespace std;

void TamGiacCanrong(int h) {
	//chạy vòng for từ 1 đến chiều cao h
	for (int i = 1; i <= h; i++) {
		//chạy vòng for nhỏ từ j đến 2h-1  (là độ dài cạnh đáy) để in ra dấu * xác định cho mỗi hàng
		for (int j = 1; j < 2*h - 1; j++) {
			if (j == h - i + 1 || j == h + i - 1 || i == h) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	//viet ct in ra man hinh tam giac can rong
	int h;
	do {
		cout << "Nhap vao chieu cao h: ";
		cin >> h;
		if (h <= 0) {
			cout << "Chieu cao khong hop le. Xin moi nhap lai.";
		}
	} while (h<=0);
	cout << "\n___Tam Giac Can Rong___\n\n";
	TamGiacCanrong(h);
	system("pause");
	return true;
}