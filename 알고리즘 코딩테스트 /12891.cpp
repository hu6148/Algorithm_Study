#include <iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int s, p; cin >> s >> p;
	string str;
	cin >> str;

	int a, c, g, t; cin >> a >> c >> g >> t;

	int start = 0, end = p - 1;
	int a1=0, c1=0, g1=0, t1 = 0;
	for (int i = 0; i <= end; i++) {
		if (str[i] == 'A') a1++;
		if (str[i] == 'C') c1++;
		if (str[i] == 'G') g1++;
		if (str[i] == 'T') t1++;
	}

	int count = 0;

	while (end < s) {
		if (a1 >= a && c1 >= c && g1 >= g && t1 >= t) {
			count++;
		}
		if (str[start] == 'A') a1--;
		if (str[start] == 'C') c1--;
		if (str[start] == 'G') g1--;
		if (str[start] == 'T') t1--;
		start++; end++;
		if (str[end] == 'A') a1++;
		if (str[end] == 'C') c1++;
		if (str[end] == 'G') g1++;
		if (str[end] == 'T') t1++;
	}

	cout << count;


	return 0;
}
