#include "Array.h"
#include<iostream>
#define MAX 100
using namespace std;

int main()
{
    int a[MAX], n = 0;
    input(a, n);
    //output(a, n);
    //giatrichan(a, n);
    //vitriam(a, n);
    //giatrilonnhat(a, n);
    //vitrilonnhat(a, n);
    //nguyentonhohon100(a, n);
    //tonggiatriam(a, n);
    //sapxep(a, n);
    //output(a, n);
    int kq = giatrichancuoicung(a, n);
    if (kq < 0) {
        cout << "khong co gia tri chan trong mang" << endl;

    }
    else {
        cout << "gia tri chan cuoi cung: " << kq << endl;
    }
       
}
