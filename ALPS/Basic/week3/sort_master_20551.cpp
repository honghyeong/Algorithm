#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int result = 0;

	vector<int> v;
	map<int, int> m;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);

	}

	sort(v.begin(), v.end());  // nlogn

	int temp = v[0];
	m.insert(make_pair(v[0], 0));

	for (int i = 0; i < v.size(); i++) {
		
		if (v[i] != temp) {
			m.insert(make_pair(v[i], i));
			temp = v[i];
		}
	}


	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;

		if (m.find(a) == m.end()) {
			cout << "-1" << '\n';
		}
		else {
			cout << m.find(a)->second << '\n';
		}
	}


	return 0;
}
