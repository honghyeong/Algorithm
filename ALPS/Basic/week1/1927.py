#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;


	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x > 0) {
			pq.push(x);
		}
		else {
			if (pq.empty()) {
				cout << "0"<<'\n';
			}
			else {
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
	}


	return 0;
}
