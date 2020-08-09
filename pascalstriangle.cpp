// Pascals triangle pyramid style

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cout << "Enter the level: ";
	cin >> n;	
	
	vector <vector <int>> a(n, vector <int> (n));
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<i+1; j++) {
			if(j == 0) a[i][j] = 1;
			else {
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
	}

	int temp = n-1, k=0, p = 1;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n+n-1; j++) {
			if(j >= temp && p == 1) {
				cout << a[i][k];
				k++;
				p = 0;
				if(a[i][k] == 0) break;
			} else {
				cout << " ";
				p = 1;
			}
		}
		p = 1;
		k = 0;
		temp--;
		cout << "\n";
	}

	return 0;
}
