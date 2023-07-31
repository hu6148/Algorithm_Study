//s0를 고려해야하는 것을 주의!

#include <iostream>

using namespace std;

long long s[1000005];
long long cnt[1005];

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m; cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		int temp; cin >> temp;
		s[i] = s[i - 1] + temp;
	}

	for (int i = 0; i <= n; i++) {
		s[i] %= m;
		cnt[s[i]]++;
	}

	long long answer = 0;

	for (int i = 0; i < m; i++) {
		answer += (long long)(cnt[i] * (cnt[i] - 1)) / 2;
	}

	cout << answer;

	return 0;
}
