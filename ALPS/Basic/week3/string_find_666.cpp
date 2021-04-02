#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	
	int i = 666;
	while (N > 0) {
		string str = to_string(i);
		if (str.find("666") != string::npos) {
			N--;
		}
		i++;
	}
	
	cout << --i;

	return 0;
}
