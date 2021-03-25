#include<iostream>
#include<queue>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int T;
	cin >> T;
	multiset<int> ms;


	for (int i = 0; i < T; i++) {
		int k;
		cin >> k;
		
		ms.insert(k);

		int size = (int)(ms.size()-1)/2;
		
		auto start = ms.begin();

		for (k = 0; k < size; k++) {
			start++;
		}

		cout <<*start << '\n';

	}
	return 0;
}
