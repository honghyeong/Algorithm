#include<iostream>
#include<vector>
#include<limits>
#include<math.h>
using namespace std;

int d[1000001]={0,1};


int fib(int n) {

	int result = numeric_limits<int>::max();

	if ((int(sqrt(n)) * int(sqrt(n))) == n) {
		d[n] = 1;
		return 1;
	}
	if (d[n]) {
		return d[n];
	}
	else {
		for (int i = 1; i <= int(sqrt(n)); i++) {

			result = min(result, fib(n - i * i)+1);


		}

		d[n] = result;
		return d[n];
	}
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	//if (n - (int(sqrt(n)) * int(sqrt(n))) == 0)
	//	cout << "제곱수";
	//

	cout<<fib(n);

	return 0;
}
