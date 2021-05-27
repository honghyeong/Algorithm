#include<iostream>
#include<vector>
using namespace std;

int N;

vector<int> nodes[100001];
int visited[100001];
int p[100001];

void dfs(int node) {
	
	visited[node] = 1;

	for (int i = 0; i < nodes[node].size(); i++) {
		int v = nodes[node][i];
		if (!visited[v]) {
			p[v] = node;
			dfs(v);
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	int a, b;
	for(int i=0;i<N-1;i++){
		cin >> a >> b;
		nodes[a].push_back(b);
		nodes[b].push_back(a);
	}

	dfs(1);
	for (int i = 2; i <= N; i++) {
		cout << p[i]<<'\n';
	}

	return 0;
}
