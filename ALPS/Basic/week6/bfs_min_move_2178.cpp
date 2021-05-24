#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;


int graph[101][101];
int visited[101][101];
int cnt[101][101];
queue<pair<int,int>> q;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };


int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		for (int j = 0; j < m; j++) {
			graph[i][j] = int(a.at(j))-48;
		}
	}

	
	q.push(make_pair(0, 0));
	visited[0][0] = 1;
	cnt[0][0] = 1;

	while (!q.empty()) {


		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (ny < n && ny >= 0 && nx < m && nx >= 0 && !visited[ny][nx] && graph[ny][nx]) {
				q.push(make_pair(ny, nx));
				visited[ny][nx] = 1;
				cnt[ny][nx] = cnt[y][x] + 1;
			}
		}

	}

	cout << cnt[n-1][m-1];

	return 0;

}
