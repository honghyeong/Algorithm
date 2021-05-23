#include<iostream>

using namespace std;

int visited[1001];
int farm[51][51];
int cnt = 0;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };  // 방향 정의 ( 좋은 아이디어인듯)
int N, M, K;
void dfs(int y, int x) {
	
	farm[y][x] = 0;

	for (int i = 0; i < 4; i++) {
		int ny = y + dir[i][0];
		int nx = x + dir[i][1];
		
		if (ny < N && ny >= 0 && nx < M && nx >= 0 && farm[ny][nx]) {
			dfs(ny, nx);
		}

	}


}

void init() {

	for (int n = 0; n < 51; n++) {
		for (int m = 0; m < 51; m++) {
			farm[n][m] = 0;
		}
	}
	cnt = 0;
}

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int x, y;
	cin >> T;

	while(T--){ // 깔끔하게 테스트케이스 표현
		init();

		cin >> M >> N >> K;
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			farm[y][x] = 1;
		}

		for (int n = 0; n < N; n++) {
			for (int m = 0; m < M; m++) {
				if (farm[n][m]) {
					cnt++;
					dfs(n, m);
				}
			}
		}
		cout << cnt<<'\n';
	}
	return 0;

}
