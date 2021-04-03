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

	int N, L, M;
	int answer = 0;

	vector<pair<int,int>> v;
	cin >> N >> L >> M;


	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}

	sort(v.begin(), v.end());

	for (int h = 1; h < L / 2; h++) {
		int w = L / 2 - h;
		if (h > N - 1 || w > N - 1) continue;
		for (int i = 0; i < M; i++) {
			int y = v[i].first, x = v[i].second;
			for (int k = 0; k <=w; k++) {
				int cnt = 1;
				for (int j = i + 1; j < M; j++) {
					int ny = v[j].first, nx = v[j].second;
					if (ny > y + h)break;
					if (x - k <= nx && nx <= x - k + w) cnt++;
				}
				answer = max(answer, cnt);
			}
		}
	}


	cout << answer;
	return 0;
}
