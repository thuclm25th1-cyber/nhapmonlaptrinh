#include <iostream>
using namespace std;

void cau1() {
	const float PI = 3.14;
	// Viet chuong trinh tinh dien tichva chu vi hinh tron voi ban kinh r
	int r;
	cout << "nhap ban kinh r: ";
	cin >> r;
	cout << " dien tich: " << PI * r * r << endl;
	cout << " chu vi: " << 2 * PI * r << endl;
}
void cau2() {
	int luong, phucap;
	cout << "nhap luong: ";
	cin >> luong;
	cout << "nhap phu cap: ";
	cin >> phucap;
	cout << "thuc lanh: " << luong + phucap - (luong + phucap) * 0.1 << endl;
}
void cau3() {
	float cannang, chieucao;
	cout << "nhap can nang: ";
	cin >> cannang;
	cout << "nhap chieu cao: ";
	cin >> chieucao;
	cout << "BMI: " << cannang / (chieucao * chieucao) << endl;
}
void cau11() {
	float  a, b;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	cout << "S=" << (a + b) * (a + b) + (a - b) * (a - b);
}

int main()
{
	cau11 ();
}
