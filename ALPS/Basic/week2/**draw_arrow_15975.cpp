#include<iostream>
#include<algorithm>
#include<vector>
#include<set>


using namespace std;
vector<int> v[100000];


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	
	vector<pair<int, int>> srt; // pair<좌표,색깔>
	set<int> color;

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		srt.push_back(make_pair(a, b));
	}

	sort(srt.begin(), srt.end()); // 입력 좌표 순 정렬

	for (int i = 0; i < N; i++) {
		int a, b;
		a = srt[i].first;   // 좌표
		b = srt[i].second; // 색깔

		v[b].push_back(a); // 각 색깔에 대해서 좌표순 정렬됨.
		/*cout << "색깔 : " << b << "좌표 : " << a << '\n';*/
		color.insert(b); // 참조해야할 색깔 
	}


	set<int>::iterator iter;

	for (iter = color.begin(); iter != color.end(); iter++) {



		if (v[*iter].size() > 1) { // 같은 색깔의 다른 점이 없을때는 0이므로 고려 X
			/*cout << "같은 색깔의 점의 개수가 2개 넘는 색깔" << *iter<<'\n';*/

			for (int i = 0; i < v[*iter].size(); i++) {

				if (i == 0) {
					answer += (v[*iter][1] - v[*iter][0]);
				}
				else if (i == v[*iter].size() - 1) {
					answer += (v[*iter][i] - v[*iter][i - 1]);
				}
				else {
					if (v[*iter][i] - v[*iter][i - 1] < v[*iter][i + 1] - v[*iter][i]) {
						answer += (v[*iter][i] - v[*iter][i - 1]); // cur-before 이 더 작을때

					}
					else {
						answer += (v[*iter][i + 1] - v[*iter][i]); // next-cur이 더 작을때
					}
				}
			}
			
		}
	}

	cout << answer;

	return 0;
}
