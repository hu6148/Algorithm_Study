#include <iostream>

using namespace std;

int a[1030][1030];
int s[1030][1030];

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			s[i][j] = a[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
		}
	}

	for (int i = 0; i < m; i++) {
		int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
		cout << s[x2][y2] + s[x1 - 1][y1 - 1] - s[x1 - 1][y2] - s[x2][y1 - 1] << '\n';
	}

	return 0;
}
