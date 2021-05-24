#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int graph[300][300];
int visited[300][300];
int cnt[300][300];
int I;
int dir[8][2] = { {2,1},{2,-1},{1,-2},{1,2},{-1,2},{-1,-2},{-2,-1},{-2,1} };
int sx, sy, dx, dy;


void bfs() {

	queue < pair<int, int>> q;

	q.push({ sx,sy });
	visited[sx][sy] = 1;
	cnt[sx][sy] = 0;

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		if (x == dx && y == dy) {
			cout<< cnt[x][y]<<'\n';
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nx = x+ dir[i][0];
			int ny = y + dir[i][1];
			if (nx < I && ny < I && nx >= 0 && ny >= 0 && !visited[nx][ny]) {
				q.push({ nx,ny });
				visited[nx][ny] = 1;
				cnt[nx][ny] = cnt[x][y] + 1;

			}


		}

		
	}
}

void init() {

	sx = 0;
	sy = 0;
	dx = 0;
	dy = 0;
	for (int i = 0; i < 300; i++) {
		for (int j = 0; j < 300; j++) {
			graph[i][j] = 0;
			visited[i][j] = 0;
			cnt[i][j] = 0;
		}
	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;

	cin >> T;

	while (T--) {
		cin >> I;

		cin >> sx >> sy;
		cin >> dx >> dy;
		bfs();

		init();

	}

	return 0;

}
