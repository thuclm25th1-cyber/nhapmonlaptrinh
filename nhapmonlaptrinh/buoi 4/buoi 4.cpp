#include <iostream>
#include <string>
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
int main()
{
	cau1();
}

