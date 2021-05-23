#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


int N, M, V;
vector<int> a[1001];
int visited[1001];
queue<int> q;

void dfs(int node) {
	

	visited[node] = 1;
	cout << node<<' ';

	for (int i = 0; i < a[node].size(); i++) {
		
		if (!visited[a[node][i]]) {
			
			dfs(a[node][i]);
			
		}
	}

}

void bfs(int start){

	visited[start] = 1;
	int node;
	cout << start <<' ';
	q.push(start);
	while (!q.empty()) {
		node=q.front();
		q.pop();

		for (int i = 0; i < a[node].size(); i++) {
			if (!visited[a[node][i]]) {
				visited[a[node][i]] = 1;
				cout << a[node][i]<<' ';
				q.push(a[node][i]);
			}
		}

	}
}

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V1, V2;
	
	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> V1 >> V2;
		a[V1].push_back(V2);
		a[V2].push_back(V1);
	}

	for (int i = 1; i < N+1; i++) {
		sort(a[i].begin(), a[i].end());
	}



	dfs(V);
	for (int i = 1; i < N + 1; i++) {
		visited[i] = 0;
	}
	cout << '\n';
	bfs(V);

	return 0;

}
