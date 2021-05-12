#include<iostream>

using namespace std;

int arr[9] = { 0, };
int n, m;

void dfs(int cnt) {

	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
		

	for (int i = 1; i <= n; i++) {
		
		arr[cnt] = i;
		dfs(cnt+1);
	}
}

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int result = 0;

	cin >> n >> m;

	dfs(0);

	return 0;
}
