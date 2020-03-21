#include<iostream>
using namespace std;
int findsubmatrixSum(int max[100][100], int m, int n, int p, int q, int r, int s) {
	int sum[100][100];
	sum[0][0] = max[0][0];
	// preprocess first row
	for (int j = 1; j < n; j++) {
		sum[0][j] = max[0][j] + sum[0][j - 1];
	}
	//preprocess first columns
	for (int i = 1; i < m; i++) {
		sum[i][0] = max[i][0] + sum[i - 1][0];
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			sum[i][j] = max[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	int total = sum[r][s];
	if (q - 1 >= 0) {
		total -= sum[r][q - 1];
	}
	if (p - 1 >= 0) {
		total - sum[p - 1][s];
	}
	if (p - 1 >= 0 and q - 1 >= 0) {
		total += sum[p - 1][q - 1];
	}
	return total;
}
int main()
{
	int m, n;
	cin >> m >> n;
	int max[100][100];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> max[i][j];
		}
	}
	int p, q, r, s;
	cin >> p >> q >> r >> s;
	cout << findsubmatrixSum(max, m, n, p, q, r, s);
}