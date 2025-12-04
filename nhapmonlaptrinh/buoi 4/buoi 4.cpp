#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void cau1() {
	string hoten;
	int namsinh;
	bool gioitinh;
	cout << "nhap ho ten: ";
	getline( cin, hoten);
	cout << "nhap nam sinh: ";
	cin >> namsinh;
	cout << "nhap gioi tinh (1 - nam : 0 - nu): ";
	int temp;
	cin >> temp;
	gioitinh = temp == 1 ? true : false;
	cout << hoten << "\t" << namsinh << "\t" << (gioitinh == true ? "Nam" : "Nu") << endl;

}
void cau2() {
	int sotien;
	cout << "nhap so tien: ";
	cin >> sotien;
	int to500k = sotien / 500000;
	cout << "so to 500k: " << to500k << endl;
	sotien -= to500k * 500000;
	int to200k = sotien / 200000;
	cout << "so to 200k: " << to200k << endl;
	sotien -= to200k * 200000;
	int to100k = sotien / 100000;
	cout << "so to 100k: " << to100k << endl;
	sotien -= to100k * 100000;
	int to50k = sotien / 50000;
	cout << " so to 50k: " << to50k << endl;
	sotien -= to50k * 50000;
	int to20k = sotien / 20000;
	cout << "so to 20k: " << to20k << endl;
	sotien -= to20k * 20000;
	int to10k = sotien / 10000;
	cout << "so to 10k: " << to10k << endl;


 }
void cau3() {
	float bankinh, chieucao;
	cout << "nhap ban kinh , chieu cao (cm): ";
	cin >> bankinh >> chieucao;
	const float PI = 3.14;

	float V = PI * bankinh * bankinh * chieucao;
	cout << "the tich khoi tru tron la: " << V << "(cm3)" << endl;
	cout << "so lit nuoc la: " << V / 1000 <<  "(lit)" << endl;
}
void cau4() {
	int x1, y1, x2, y2;
	cout << "nhap toa do diem A(x,y): ";
	cin >> x1 >> y1;
	cout << "nhap toa do diem B(x,y): ";
	cin >> x2 >> y2;
	cout << "khoang cach: " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;
}
void cau5() {
	int a, b, c;
	cout << "nhap 3 canh: ";
	cin >> a >> b >> c;
	cout << "the tich: " << a * b * c << endl;
	cout << " dien tich: " << 2 * (a * b + b * c + a * c) << endl;

}


int main()
{
	cau5();
}

