#include <iostream>
#include <algorithm>

using namespace std;

int a[15005];

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	int start = 0, end = n - 1;
	int count = 0;

	while (start < end) {
		if (a[start] + a[end] == m) {
			count++;
			start++;
		}
		else if (a[start] + a[end] < m) {
			start++;
		}
		else {
			end--;
		}
	}

	cout << count;


	return 0;
}
