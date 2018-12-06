/*      *           ứng vs h=4, cạnh đáy= 2*4-1
       ***          ở vị trí thứ 4, hàng đầu chỉ in ra 1 dấu * 
	  *****         vị trí từ 3 đến 5, hàng 2 in ra 3 dấu *
     *******             //    2 đến 6,      3 //   5 dấu *
	 1234567             //    1 đến 7,      4 //   7 dấu *
	               các vị trí đó tương ứng vs h-i+1 đến h+i-1
*/
#include<iostream>
using namespace std;

void InTamGiacCan(int h) {
	//chạy vòng lặp for lớn từ i đến chiều cao h
	for (int i = 1; i <= h; i++) {
		//chạy vòng lặp for nhỏ từ j đến 2h-1 (vì đáy của tam giác cân này bao giờ cũng bằng 2h-1)
		for (int j = 1; j <= 2 * h - 1; j++) {
			//ứng với mỗi vị trí thì in ra một dấu * tương ứng.
			if (j >= h - i + 1 && j <= h + i - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
int main() {
	//viet ct in ra man hinh tam giac can co chieu cao h 
	int h;
	do {
		cout << "Nhap vao chieu cao h: ";
		cin >> h;
		if (h <= 0) {
			cout << "Chieu cao h khong hop le. Xin moi nhap lai";
		}
	} while (h <= 0);
	cout << "\n___Tam Giac Can Dac___\n\n";
	InTamGiacCan(h);
	system("pause");
    return true;
}