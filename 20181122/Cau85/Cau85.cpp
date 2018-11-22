#include<iostream>
using namespace std;
int main() {
	//nhap vao 1 thang trong nam cho biet thang do thuoc quy may
	// dung cau lenh switch
	int Thang;
	cout << "nhap mot thang: ";
	cin >> Thang;
	switch (Thang) {
	     case 1:
		 case 2:
		 case 3:
			 cout << "Thang do thuoc quy 1\n";
	         break;
		 case 4:
		 case 5:
		 case 6:
			 cout << "Thang do thuoc quy 2\n";
			 break;
		 case 7:
		 case 8:
		 case 9:
			 cout << "Thang do thuoc quy 3\n";
			 break;
		 case 10:
		 case 11:
		 case 12:
			 cout << "Thang do thuoc quy 4\n";
			 break;
	}
	system("pause");
	return true;
}