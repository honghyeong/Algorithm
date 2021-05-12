#include<iostream>
#include<algorithm>
#include<vector>
#include<set>


using namespace std;

int arr[20];
int n, s;
int cnt = 0;


void dfs(int input,int sum) {

	if (sum == s && input!=0)
		cnt++;

	if (input == n)
		return;

	for (int i = input; i < n; i++) {
		dfs(i + 1, sum + arr[i]);
	}
	

}

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int result = 0;

	cin >> n >> s;


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dfs(0, 0);

	cout << cnt << '\n';
	return 0;
}
