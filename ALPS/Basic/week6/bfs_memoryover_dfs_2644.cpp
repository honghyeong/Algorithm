#include<iostream>
#include<vector>

using namespace std;

vector<int> arr[101];
int visited[101];
int n, i1, i2, m;
int ans = -1;

void dfs(int node, int depth) {

	visited[node] = 1;


	if (node == i2) {
		ans = depth;
	}


	for (int i = 0; i < arr[node].size(); i++) {
		int v = arr[node][i];
		if (!visited[v]) {
			dfs(v, depth + 1);

		}	
		
	}
}

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> i1 >> i2 >> m;
	

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	dfs(i1, 0);

	cout << ans;
	
	return 0;

}
