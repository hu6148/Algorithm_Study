// 목표한 수는 포인터 점프를 해주어야 한다.

#include <iostream>
#include <algorithm>

using namespace std;

int a[2005];
bool good[2005];

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);
	
	for (int i = 0; i < n; i++) {
		int start = 0, end = n - 1;
		while (start < end) {
			if (start == i) {
				start++;
				continue;
			}
			if (end == i) {
				end--;
				continue;
			}
			if (a[start] + a[end] == a[i]) {
				good[i] = true;
				break;
			}
			else if (a[start] + a[end] < a[i]) {
				start++;
			}
			else {
				end--;
			}
		}
	}

	int answer = 0;
	for (int i = 0; i < n; i++) 
		if (good[i]) answer++;
	
	
	cout << answer;


	return 0;
}
