#include<iostream>
#include<vector>
using namespace std;

long long d[101] = { 0,1,1,1,2,2 };



void fib() {
	for (int i = 6; i <= 100; i++) {
		d[i] = (d[i - 1] + d[i - 5]);
	}
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	fib();
	
	while (T--) {
		int N;
		cin >> N;
		cout << d[N]<<'\n';
	}
	return 0;
}
