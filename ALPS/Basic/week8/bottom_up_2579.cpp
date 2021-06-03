#include<iostream>

using namespace std;

int point[301];
long long fib[301] = { 0, };
int n;

void upstair() {
	
	for (int i = 3; i <= n; i++) {
		long long a = fib[i - 2] + point[i];
		long long b = fib[i - 3] + point[i] + point[i - 1];

		fib[i] = max(a, b);
	}
	
}





int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		point[i] = a;
	}

	fib[1] = (long long)point[1];
	fib[2] = (long long)point[1] + point[2];
	upstair();
	
	cout << fib[n];

	return 0;
}
