#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int graph[26][26];
int cnt = 0;
int total = 0;
int N;
int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
vector<int> v;

void dfs(int x,int y) {
	
	graph[x][y] = 0;
	cnt++;

	for (int i = 0; i < 4; i++) {
		int ny = y + dir[i][0];
		int nx = x + dir[i][1];
		if(nx < N && nx >= 0 && ny < N && ny >= 0 && graph[nx][ny]){
			dfs(nx, ny);
		}
	}

}


int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		
		string a;
		cin >> a;

		for (int j = 0; j < N; j++) {

			graph[i][j]=int(a.at(j))-48;
		}
	
	}


	//for (int i = 0; i < N; i++) {

	//	for (int j = 0; j < N; j++) {
	//		cout << graph[i][j];
	//	
	//	}
	//	cout << '\n';
	//}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (graph[i][j]) {
				total++;
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}

	cout << total<<'\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < total; i++) {
		cout<<v[i]<<'\n';
	}

	return 0;

}
