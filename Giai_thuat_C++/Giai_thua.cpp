#include<iostream>
using namespace std;
int gt(int n) {
	if(n <= 1) {
		return n;
	} else {
		return n * gt(n - 1);
	}
}

int main() {
	int n = 0;
	cin >> n;
	cout << gt(n);
	return 0;
}


//gt(5) = 5 * gt(4)
//      = 5 * (4 * gt(3))
//      = 5 * (4 * (3 * gt(2)))
//      = 5 * (4 * (3 * (2 * gt(1))))
//      = 5 * (4 * (3 * (2 * 1)))
//      = 5 * (4 * (3 * 2))
//      = 5 * (4 * 6)
//      = 5 * 24
//      = 120