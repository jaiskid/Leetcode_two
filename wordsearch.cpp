#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
	if (k == word.length()) {
		return true;
	}
	if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[k]) {
		return false;
	}
	char c = board[i][j];
	board[i][j] = '*';
	if (dfs(board, word, i + 1, j, k + 1) || dfs(board, word, i - 1, j, k + 1) || dfs(board, word, i, j + 1, k + 1) || dfs(board, word, i, j - 1, k + 1)) {
		return true;
	}
	board[i][j] = c;
	return false;
}
bool exist(vector<vector<char>>& board, string word) {
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[0].size(); j++) {
			if (dfs(board, word, i, j, 0))
				return true;
		}
	}
	return false;
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<char>> boards = vector<vector<char>>(n, vector<char>(m));
	//boards.resize(m, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> boards[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << boards[i][j] << " ";
		}
		cout<<endl;
	}
	string word;
	cin >> word;
	cout << exist(boards, word);
}