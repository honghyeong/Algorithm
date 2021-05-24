#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;

priority_queue<pair<long,int>,vector<pair<long,int>>,greater<pair<long,int>>> pq;


int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long A, B;
	cin >> A >> B;
	int result = -1;

	pq.push({ A,1 });

	while (1) {

		long num = pq.top().first;
		int cnt = pq.top().second;
		pq.pop();
		if (num == B) {
			result = cnt;
			break;
		}
		if (B < num) {
			break;
		}
		
		
		pq.push({ long(num * 2),cnt + 1 });
		pq.push({ long(num * 10+1),cnt + 1 });

	}

	cout << result;

	return 0;

}
