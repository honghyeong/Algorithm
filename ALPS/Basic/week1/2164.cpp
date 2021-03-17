#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> q;

	int N;
	cin >> N;
	int a;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while ((int)q.size() != 1) {
		q.pop();
		a = q.front();
		q.pop();
		q.push(a);
	}

	cout << q.front();


	return 0;
}
