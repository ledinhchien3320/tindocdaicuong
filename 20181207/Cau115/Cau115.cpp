#include <iostream>
#include <string>
using namespace std;
char HoTen[50];
int DiemToan;
int DiemVan;
float Trungbinh;
// viết ct nhập vào họ tên,  điểm toán và điểm văn của 1 học sinh. In ra màn hình diểm trung bình
void Nhap() {
	cout << "Nhap ho ten: ";
	cin >> HoTen;
	cout << "Nhap Diem toan: ";
	cin >> DiemToan;
	cout << "Nhap diem van: ";
	cin >> DiemVan;
}
void Tinhdiem() {
	Trungbinh = (DiemToan + DiemVan) / 2;
}
void Xuat() {
	cout << "Ho Ten: " << HoTen << endl;
	cout << "Diem toan: " << DiemToan << endl;
	cout << "Diem van: " << DiemVan << endl;
	cout << "Diem trung binh: " << Tinhdiem << endl;
}
int main() {
	Nhap();
	Tinhdiem();
	Xuat();
	system("pause");
	return true;
}