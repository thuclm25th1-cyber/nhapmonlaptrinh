#include <iostream>
using namespace std;


int main() {
	for (int i = 1; i <= 5; i++) {
		cout << " for hello" << endl;
	}

	int j = 1;
	while (j <= 5) {
		cout << " while hello: " << j << endl;
		j++;
	 }

	int k = 1;
	do {
		cout << "do..while hello: " << k << endl;
		k++;
	} while (k <= 5);
}

   
