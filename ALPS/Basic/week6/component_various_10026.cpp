#include<iostream>
#include<vector>

using namespace std;

char graph[101][101];
int visited[101][101];
char color;
int cnt = 0;
int N;
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void dfs(int x,int y) {
	

	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int ny = y + dir[i][0];
		int nx = x + dir[i][1];
		if(nx < N && nx >= 0 && ny < N && ny >= 0 && graph[nx][ny] == color && !visited[nx][ny] ){
			dfs(nx, ny);
		}
	}

}


void init() {

	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = 0;

			if (graph[i][j] == 'G') {
				graph[i][j] = 'R';
			}
		}
	}
}

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char ch;
			cin >> ch;
			graph[i][j] = ch;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				cnt++;
				color = graph[i][j];
				dfs(i, j);
			}
			
		}
	}

	cout << cnt<<'\n';

	init();
	// 바뀐지 확인
	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout<<graph[i][j];

	//	}
	//	cout << '\n';
	//}



	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visited[i][j]) {
				cnt++;
				color = graph[i][j];
				dfs(i, j);
			}

		}
	}

	cout << cnt;

	return 0;

}
