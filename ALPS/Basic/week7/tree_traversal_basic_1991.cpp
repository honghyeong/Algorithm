#include<iostream>
using namespace std;

int N;

typedef struct node {

	char left;
	char right;

}Node ;

Node nodes[27];


void preOrder(char root) {
	if (root == '.')
		return;
	cout << root;
	preOrder(nodes[root].left);
	preOrder(nodes[root].right);
}

void inOrder(char root) {
	if (root == '.')
		return;
	inOrder(nodes[root].left);
	cout << root;
	inOrder(nodes[root].right);
}
void postOrder(char root) {
	if (root == '.')
		return;
	postOrder(nodes[root].left);
	postOrder(nodes[root].right);
	cout << root;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	char a, b, c;
	while (N--) {
		cin >> a >> b >> c;
		nodes[a].left = b;
		nodes[a].right = c;
	}

	preOrder('A');
	cout << '\n';
	inOrder('A');
	cout << '\n';
	postOrder('A');
	cout << '\n';

	return 0;
}
