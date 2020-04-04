#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
/*
vector<int> inorderTraversal(TreeNode*root) {
	stack<TreeNode*>s;
	TreeNode *curr = root;
	vector<int> res;
	while (curr != NULL || s.empty() == false) {
		while (curr != NULL) {
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		s.pop();
		res.emplace_back(curr->val);
		curr = curr->right;
	}
	return res;
}
*/
TreeNode* tree_build() {
	int x;
	cin >> x;
	if (x == -1) {
		return NULL;
	}
	TreeNode* curr = new TreeNode(x);
	curr->left = tree_build();
	curr->right = tree_build();
	return curr;
}
vector<vector<int>>zigzagLevel(TreeNode* root) {
	if (root == NULL) {
		return {};
	}
	vector<vector<int>> zigzag;
	stack<TreeNode*> curr;
	stack<TreeNode*> next;
	next.emplace(root);
	while (!curr.empty() || !next.empty()) {
		if (curr.empty()) {
			swap(curr, next);
			zigzag.emplace_back(); 
		}
		TreeNode* temp = curr.top();
		curr.pop();
		zigzag.back().emplace_back(temp->val);
		auto left_child = (zigzag.size() % 2 == 0) ? temp->right : temp->left;
		auto right_child = (zigzag.size() % 2 == 0) ? temp->left : temp->right;
		if (left_child) next.emplace(left_child);
		if (right_child) next.emplace(right_child);
	}
	return zigzag;
}
int main() {
	TreeNode* root = tree_build();
	vector<vector<int>>result = zigzagLevel(root);
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++)
			cout << result[i][j] << " ";
		cout << endl;
	}

}