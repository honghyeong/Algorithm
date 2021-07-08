#include<iostream>
#include<algorithm>

using namespace std;

int N;
long long dp[100][100];
int arr[100][100];

int main()
{


	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	dp[0][0] = 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i==N-1 && j==N-1) {
				cout << dp[N - 1][N - 1]<<'\n';

				return 0;
			}
			else if (dp[i][j] != 0) {
				if (i + arr[i][j] < N) {
					
					dp[i + arr[i][j]][j] += dp[i][j];
				}
				if (j + arr[i][j] < N) {
					dp[i][j + arr[i][j]] += dp[i][j];
				}
			}
		}
	}


}
