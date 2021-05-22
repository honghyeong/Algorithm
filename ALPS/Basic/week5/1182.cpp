#include<iostream>

using namespace std;

//int path[8];
int arr[21];
int N, S;
int cnt = 0;
void dfs(int depth,int sum) {

	
	if (depth == N && depth !=0) {
		if (sum == S) {
			cnt++;
			
		}
		return;
	}

	dfs(depth + 1, sum);
	dfs(depth + 1, sum + arr[depth]);

}

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	dfs(0,0);


	printf("%d", S == 0 ? cnt - 1 : cnt);
}
