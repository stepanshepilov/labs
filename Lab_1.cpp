#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

float f(float x) {
	if (x == 0) {
		return 1;
	}
	else {
		return sin(x) / x;
	}
}

int main() {
	//function
	float a;
	cout << "Enter a number: " << endl;
	cin >> a;
	float diff = (4 - a) / 10;
	for (int i = 1; i <= 10; i++) {
		cout << f(a + diff * i) << endl;
	}

	// fibbonachi
	int s = 1;
	int n = 2;
	int max;
	cout << "Enter MAX: ";
	cin >> max;
	int f0 = 0;
	int f1 = 1;
	while (s < max) {
		f1 = f1 + f0;
		f0 = f1 - f0;
		s += f1;
		n += 1;
	}
	cout << "N: " << n << endl;
	cout << "S: " << s << endl;
}
