#include<iostream>
#include<deque>
#include<queue>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N,M;
	cin >> N >> M;

	deque<int> d;
	queue<int> q;
	int cur = 1;
	int count = 0;

	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		int index=0;

		for (int j = 0; j < d.size(); j++) {
			if (d[j] == num) {
				index = j;
				break;
			}
		}

		
		if (index > d.size()-index) {
			while (d.front() != num) {
				int temp = d.back();
				d.pop_back();
				d.push_front(temp);
				count++;
			}
		}
		else {
			while (d.front() != num) {
				int temp = d.front();
				d.pop_front();
				d.push_back(temp);
				count++;
			}
		}
		d.pop_front();
	}

	cout << count;

	return 0;
}
