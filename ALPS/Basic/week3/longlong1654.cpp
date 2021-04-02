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

	int K;
	long long N;
	cin >> K >> N;
	vector<int> v;
	int min;

	for (int i = 0; i < K; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	long long left = 1;
	long long right = v[K - 1];
	long long answer=0;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long num_parts = 0;

		for (int i = 0; i < v.size(); i++) {
			num_parts += v[i] / mid;
		}

		if (num_parts >= N) {
			left = mid + 1;
			answer = mid;
		}
		else {
			right = mid - 1;
		}
	}

	cout << answer;
	return 0;
}
