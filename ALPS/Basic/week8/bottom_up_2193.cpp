#include<iostream>
#include<vector>
#include<limits>
#include<math.h>
using namespace std;

long long fib_zero[91]={0,1};
long long fib_one[91] = { 0,1 };

void pinaryNumber() {
	for (int i = 2; i < 91; i++) {
		fib_zero[i] = fib_zero[i - 1] + fib_one[i - 1];
		fib_one[i] = fib_zero[i - 1];
	}
}





int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;


	pinaryNumber();

	cout << fib_one[n];

	return 0;
}
