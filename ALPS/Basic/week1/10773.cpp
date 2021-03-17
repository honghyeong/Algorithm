#include<iostream>
#include<stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	cin >> k;

	stack<int> st;

	for (int i = 0; i < k; i++) {
		int num;
		cin >> num;
		
		if (num != 0) {
			st.push(num);
		}
		else {
			st.pop();
		}
	}

	int sum = 0;

	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}

	cout << sum;

	return 0;
}
