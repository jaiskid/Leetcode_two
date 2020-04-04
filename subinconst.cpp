#include <bits/stdc++.h>
using namespace std;
#define m 5
#define n 5
int findmatrix(int mat[m][n], int p, int q, int r, int s) {
	int sum[m][n];
	//preprocess the rows and columns
	sum[0][0] = mat[0][0];
	for (int i = 1; i < m; i++) {
		sum[i][0] = mat[i][0] + sum[i - 1][0];
	}
	for (int j = 1; j < n; j++) {
		sum[0][j] = mat[0][j] + sum[0][j - 1];

	}
	//sum matrix
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			sum[i][j] = mat[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	int total = sum[r][s];
	cout << sum[r][s] << " ";
	if (q - 1 >= 0)
		cout << sum[r][q - 1] << " ", total -= sum[r][q - 1];

	if (p - 1 >= 0)
		cout << sum[p - 1][s] << " ", total -= sum[p - 1][s];

	if (p - 1 >= 0 && q - 1 >= 0)
		cout << sum[p - 1][q - 1] << " ", total += sum[p - 1][q - 1];

	return total;
}
int main() {
	int p, q, r, s;

	int mat[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> mat[i][j];
		}
	}
	cin >> p >> q >> r >> s;
	cout << findmatrix(mat, p, q, r, s);
}