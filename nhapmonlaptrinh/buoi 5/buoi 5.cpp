#include <iostream>
using namespace std;

void cau1() {
	int a, b, c;
	cout << "nhap a , b , c: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
		cout << a;
	if (b > a && b > c)
		cout << b;
	if (c > a && c > b)
		cout << c;

}
void cau2() {
	float a, b;
	cout << " nhap a , b: ";
	cin >> a >> b;
	if (a * b > 0)
		cout << "cung dau";
	else
		cout << " khac dau";
}
void cau3() {
	int a, b;
	cout << "nhap a , b: ";
	cin >> a >> b;
	if (a == 0) {
		if (b == 0)
			cout << " Phuong trinh vo so nghiem" << endl;
		else
			cout << " Phuong trinh vo so nghiem" << endl;
	}
	else {
		cout << "nghiem la: " << (-b * 1.0 / a) << endl;
	}

}
void cau4() {
	int thang;
	cout << "nhap thang: ";
	cin >> thang;
	if (thang <= 3) {
		cout << "quy 1";
	}
	else if (thang <= 6){
		cout << "quy 2";
	}
	else if (thang <= 9) {
		cout << "quy 3";
	}
	else {
		cout << "quy 4";
	}
}
void cau5() {
	int a, b, c;
	cout << "nhap 3 canh a , b , c: ";
	cin >> a >> b >> c;
	if (a + b > c || b + c > a || a + c > b) {
		if (a == b && b == c) {
			cout << "tam giac deu" << endl;
		}
		else if (a == b || b == c || c == a) {
			cout << " tam giac can" << endl;
		}
		else if (b * b == a * a + c * c || a * a == b * b + c * c || c * c == a * a + b * b) {
			cout << " tam giac vuong" << endl;
		}
		else {
			cout << " tam giac thuong" << endl;
		}
	}

	else {
		cout << " khong la tam giac" << endl;
	}

}

int main()
{
	cau5();
}
