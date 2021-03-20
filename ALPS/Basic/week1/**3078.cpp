## Time complexity : O((n-k)k)
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<string> q;

	int n, k;
	cin >> n>> k;

	int result = 0;
	string temp;

	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;

		if (i > k) {

			for (int j = 0; j < k; j++) {
				temp = q.front();
				if (temp.length() == str.length()) {
					result++;
				}
				q.pop();
				q.push(temp);
			}
			q.push(str);
			q.pop();
		}
		else {
			for (int j = 0; j < i-1; j++) {
				temp = q.front();
				if (temp == str) {
					result++;
				}
				q.pop();
				q.push(temp);
			}
			q.push(str);
		}
	}

	cout << result;

	return 0;
}

## Time complexity : O(n)?


#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, k;
	queue<int> q[21];  ## 입력되는 이름의 길이에 주목해서 각 이름의 길이별로 큐를 만들고, k가 넘는 순위 차이의 친구는 제거. 남은 친구들은 좋은 친구가 될 수 있다.
	cin >> n>> k;
	long long cnt = 0;

	int result=0;

	for (int i = 1; i <= n; i++) {
		string str;
		cin >> str;

		int length = str.length();
		
		while (!q[length].empty() && i - q[length].front() > k) {
			q[length].pop();
		}
		
		cnt += q[length].size();
		q[length].push(i);

	}
	cout << cnt;

	return 0;
}
