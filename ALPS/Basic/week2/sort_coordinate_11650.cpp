#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	vector<pair<int, int>> v;

	for (int i = 0; i < T; i++) {
		int a,b;
		cin >> a>>b;
		v.push_back(make_pair(a, b));
	}
	

	sort(v.begin(), v.end());

	for (int i = 0; i <T; i++) {	
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}
