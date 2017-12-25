#include <iostream>
using namespace std; 

bool isPrime(int n) {
	if (n < 2) {
		return false;
	}

	for (int i = 2; i < (n - 1); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void main() {
	int n; 
	cout << "Nhap so can kiem tra: "; 
	cin >> n;

	if (isPrime(n)) {
		cout << "La so nguyen to"; 
	}
	else {
		cout << "Khong phai so nguyen to"; 
	}
	
}