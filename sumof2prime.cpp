// Check whether given positive number is a sum of two prime number or not

#include <iostream>
using namespace std;

int main() {
	int n,j;
	cout << "Enter a number: ";
	cin >> n;

	int y, p;

	for(int i=2; i<= n / 2; i++) {
		p = 1;
		for(int k=2; k<=i/2; k++) {
			if(i % k == 0) {
				p = 0;
				break;
			}
		}
		
		if(p != 1) continue;
		
		y = n - i;
		
		for(int k=2; k<=y/2; k++) {
			if(y % k == 0) {
				p = 0;
				break;
			}
		}
		
		if(p != 0) {
			cout << i << " " << y << "\n";
			return 0;
		}
	}

	cout << "Not possible\n";

	return 0;
}
