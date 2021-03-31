#include<iostream>
#include<algorithm>
#include<vector>

#include<deque>


using namespace std;
vector<int> v[100000];


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int result = 0;
	
	deque<int> v;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		
	}

	sort(v.begin(), v.end());
	
	
	if (v.size() == 1) {
		result = v[0];
	}


	int leftwindowleft = 0;
	int rightwindowright = v.size() - 1;
	int i = 1;

	while (v.size()>1) { // stop 조건

		if (v[0]<0 && v[1]<= 0 ) {  // move left window
			result += v[0] * v[1];
			
		}
		if (v[rightwindowright]>0 && v[rightwindowright - 1] > 0) {
			result += (v[rightwindowright] * v[rightwindowright - 1]); // move right wiwndow
			rightwindowright -= 2;
		}

		

		if (rightwindowright == leftwindowleft) {  // 원소 개수가 홀수인경우 L==R, 한 원소만 남는 경우
			result += v[rightwindowright];
			rightwindowright--;
		}
		if (leftwindowleft + 1 == rightwindowright &&v[leftwindowleft]<0) { // 원소 개수 짝수일 때, 곱하면 안되는 두개 남았을때
			result += v[leftwindowleft] + v[rightwindowright];
			rightwindowright -= 2;
		}


	}

	cout << result;

	return 0;
}
