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
int main()
{
	cau2();
}

