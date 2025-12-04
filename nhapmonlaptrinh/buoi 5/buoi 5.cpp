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
int main()
{
	cau1();
}
