#include<iostream>
#include<vector>
using namespace std;

int T;

int fib_zero[41];
int fib_one[41];

void fibo() {

	fib_zero[0] = 1;
	fib_zero[1] = 0;
	fib_one[0] = 0;
	fib_one[1] = 1;

	for (int i = 2; i < 41; i++) {
		fib_zero[i] = fib_zero[i - 1] + fib_zero[i - 2];
		fib_one[i] = fib_one[i - 1] + fib_one[i - 2];
	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	fibo();
	
	while (T--) {
		int a;
		cin >> a;
		cout << fib_zero[a] << ' ' << fib_one[a] << '\n';
	}

	return 0;
}
