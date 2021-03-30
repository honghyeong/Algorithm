#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>

using namespace std;

int main() {
	

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;


	for (int i = 0; i < T; i++) {

		vector<int> v1;
		vector<int> v2;

		int result = 0;

		int cv1, cv2;
		cin >> cv1 >> cv2;

		for (int j = 0; j < cv1; j++) {
			int a;
			cin >> a;
			v1.push_back(a);
		}
		sort(v1.begin(), v1.end(),greater<int>());
		

		for (int j = 0; j < cv2; j++) {
			int a;
			cin >> a;
			v2.push_back(a);
		}
		sort(v2.begin(), v2.end(),greater<int>());


		int maxi = 0;
		int maxnum = v2[0];


		for (int j = 0; j < cv1; j++) {

			while (v1[j] <= maxnum and maxi!=v2.size()) {

				maxi++;
				if (maxi == v2.size()) break;
				maxnum = v2[maxi];
			}

			result +=( v2.size() - maxi);
		}
		cout << result << '\n';
	}	
	return 0;
}
