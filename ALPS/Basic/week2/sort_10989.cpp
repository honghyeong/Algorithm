# Lack of memory : 10^7 * 4Byte =  40 MB
# vector<int> v(10001) : 1 ~ 10000 까지 몇 개씩 나왔는 지 저장하는 방식으로 풀이.

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long T;
	cin >> T;

	vector<int> v(10001);

	for (long i = 0; i < T; i++) {
		int a;
		cin >> a;
		v[a]++;
	}
	

	for (int i = 1; i < 10001; i++) {
		if (v[i] > 0) {
			for (int k = 0; k < v[i]; k++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}
