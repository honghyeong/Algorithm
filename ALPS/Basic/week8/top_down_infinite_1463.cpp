#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int d[1000001]={0,0};


int fib(int n) {
	
	int result = numeric_limits<int>::max();

	if (n == 1) return 0;
	if (d[n]) {
		return d[n];
	}
	else {
		if (n % 3==0) {
			result = min(fib(n / 3),result);
			
			
		}
		if (n % 2 == 0) {
			result = min(fib(n / 2),result);
			
		}
		
		result = min(fib(n - 1),result);

		d[n] = result+1;
		return d[n];
	}

	
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X;
	cin >> X;

	cout << fib(X);
	

	return 0;
}
