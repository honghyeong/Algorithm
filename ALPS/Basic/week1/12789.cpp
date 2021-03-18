#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	stack<int> st;
	queue<int> q;

	int order = 1;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		q.push(num);
	}

	while (!q.empty()) {
		if (q.front() == order) {
			q.pop();
			order++;
		}
		else {
			if ((!st.empty()) && st.top() == order) {

				st.pop();
				order++;

			}
			else {
				st.push(q.front());
				q.pop();

			}

		}
	}

	int len = st.size();

	while(!st.empty()) {
		
		if (st.top() != order) {
			cout << "Sad" << '\n';
			return 0;
		}
		order++;
		st.pop();
	}

	cout << "Nice" << '\n';

	return 0;
}
