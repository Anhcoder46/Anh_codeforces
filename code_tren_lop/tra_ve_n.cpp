#include<iostream>
using namespace std;

int solve(int n) {
	if (n == 1) return 1;
	return solve(n/2) + solve(n - n/2);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << solve(n);
	return 0;
}