#include <iostream>
using namespace std;

void cau1() {
	int n, tong = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	cout << "tong: " << tong << endl;
}

void cau2() {
	int n, tich = 1;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tich *= i;
	}
	cout << "tich: " << tich << endl;
}
void cau3() {
	int n,x, tich = 1;
	cout << "nhap x, n: ";
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		tich *= x;
	}
	cout << "tich: " << tich << endl;
}
int main() {
	cau3();
}

   
