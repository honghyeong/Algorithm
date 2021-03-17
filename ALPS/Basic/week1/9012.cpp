#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isVPS(string str) {

	stack<char> st;

	for (int i = 0; i < (int)str.size(); i++) {
		char c = str[i];
		if (c == '(') {
			st.push(c);
		}
		else {
			if ( !st.empty() && st.top() == '(') {
				st.pop();
			}
			else {
				return false;
			}
		}
	}

	return st.empty();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> str;
		if (isVPS(str)) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}

	return 0;
}
