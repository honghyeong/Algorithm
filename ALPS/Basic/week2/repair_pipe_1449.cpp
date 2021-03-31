#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main() {


	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;

	vector<int> v;

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
  # 위치 크기 순으로 정렬
	sort(v.begin(), v.end());


	int left = 0;
	int right = 0;
	int i = 1;

  
  
  #sliding window
  
	while (1) {

		while (left!=v.size()&& (v[right] - v[left])< L) {
			if (right == v.size() - 1) left++;
			else right++;
		}
		/*cout << i << "번째 loop 결과 : " << left <<' '<< right<<'\n';*/
		answer++;
		if (left == v.size()) break;
		left = right;
		/*i++;*/

	}


	cout << answer;

	return 0;
}
