#include<iostream>
#include<vector>

using namespace std;


int N, M;
vector<int> a[1001];
int visited[1001];
int cnt = 0;

void dfs(int node) {
	

	visited[node] = 1;

	for (int i = 0; i < a[node].size(); i++) {
		int v = a[node][i];
		if (!visited[v]) {
			dfs(v);
		}
	}

}

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V1, V2;
	
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> V1 >> V2;
		a[V1].push_back(V2);
		a[V2].push_back(V1);
	}


	for (int i = 1; i < N + 1; i++) {
		if (!visited[i]) {
			cnt++;
			dfs(i);
		}
	}

	cout << cnt;
	return 0;

}
