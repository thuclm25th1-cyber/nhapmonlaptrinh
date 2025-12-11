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
int main() {
	cau1();
}

   
