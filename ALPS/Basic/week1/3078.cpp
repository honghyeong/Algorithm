
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
