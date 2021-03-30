#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	vector<pair<int, string>> v;
	set<string> dup;

	for (int i = 0; i < T; i++) {
		string b;
		cin>>b;
		int a = b.length();
		if (dup.find(b)==dup.end()) {
			dup.insert(b);
			v.push_back(make_pair(a, b));
		}

	}
	

	sort(v.begin(), v.end());

	for (int i = 0; i <v.size(); i++) {	
		cout << v[i].second << '\n';
	}

	return 0;
}
