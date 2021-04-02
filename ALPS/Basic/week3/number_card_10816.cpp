#include<iostream>
#include<algorithm>
#include<string>
#include<set>
#include<vector>
#include<map>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	map<int,int> m;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;

		auto x = m.find(a);
		if (x == m.end()) {
			m.insert(make_pair(a, 1));
		}
		else {
			m[a] += 1;
		}
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		cout << m[b] << ' ';
	}

	return 0;
}
