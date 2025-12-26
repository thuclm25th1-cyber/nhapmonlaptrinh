#include <iostream>
#include "songuyen.h"
using namespace std;

void input(int b[], int& n) {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\t+ phan tu " << (i + 1) << ": ";
		cin >> b[i];
	}
}
void output(int b[], int n) {
	cout << "danh sach phan tu mang: " << endl;
	int i = 0;
	while (i < n) {
		cout << b[i] << "   ";
		i++;
	}
	cout << endl;
}

void giatrichan(int b[], int n) {
	cout << "danh sach gia tri chan: " << endl;
	int i = 0;
	while (i < n) {
		if(b[i]%2==0)
		cout << b[i] << "   ";
		i++;
	}
	cout << endl;
}

void vitriam(int b[], int n) {
	cout << "danh sach vi tri am: " << endl;
	int i = 0;
	while (i < n) {
		if (b[i] < 0)
			cout << i + 1 << "   ";
		i++;
	}
	cout << endl;

}
void giatrilonnhat(int b[], int n) {
	int max = b[0];
	for (int i = 1; i < n; i++) {
		if (b[i] > max)
			max = b[i];
	}
	cout << "gia tri lon nhat: " << max << endl;
}

void vitrilonnhat(int b[], int n) {
	int min = b[0], vt = 0;
	for (int i = 1; i < n; i++) {
		if (b[i] < min) {
			min = b[i];
			vt = i;
		}
	}
	cout << "vi tri co gia tri lon nhat: " << vt + 1 << endl;

}
void nguyentonhohon100(int b[], int n) {
	cout << "nguyen to nho hon 100: " << endl;
	for (int i = 0; i < n; i++) {
		if (b[i] < 100 && NguyenTo(b[1]) == true) {
			cout << b[i] << "  ";
		}
	}
	cout << endl;

}

void tonggiatriam(int b[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] < 0)
			tong += b[i];
	}
	cout << "tong am: " << tong << endl;
}

void sapxep(int b[], int n) {
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (b[j] < b[i]) {
				int t = b[j];
				b[j] = b[i];
				b[i] = t;
			}
}

int giatriduongdautien(int b[], int n) {
	for (int i = 0; i < n; i++) {
		if (b[i] > 0)
			return b[i];
	}
	return -1;
}

int giatrichancuoicung(int b[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		if (b[i] % 2 == 0)
			return b[i];
	}
	return -1;
}
