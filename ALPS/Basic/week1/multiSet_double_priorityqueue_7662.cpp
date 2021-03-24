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

	for (int i = 0; i < T; i++) {
		int k;
		cin >> k;
		multiset<int> priority;

		for (int j = 0; j < k; j++) {
			string str;
			cin >> str;

			if (str == "I") {
				int a;
				cin >> a;
				priority.insert(a);


			}
			else if (str == "D") {
				int a;
				cin >> a;

				if (a == -1) {
					if (priority.size()) {
						priority.erase(priority.begin());
					}
					
				}
				else if(a==1){
					if (priority.size()) {
						priority.erase(--priority.end());
					}
				}
			}	
		}

		if (priority.empty()) {
			cout << "EMPTY"<<'\n';
		}
		else {

			auto end = priority.end();
			end--;

			cout << *end << ' ' << *priority.begin() << '\n';
		}


	}
	return 0;
}
