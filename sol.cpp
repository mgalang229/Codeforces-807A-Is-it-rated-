#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	bool rated = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] != b[i]) {
			// check if the rating before the contest is different than the one after
			rated = true;
		}
	}
	// check if rated
	if (rated) {
		cout << "rated" << '\n';
		return 0;
	}
	// check if the list is sorted in non-increasing order
	bool unrated = false;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				unrated = true;
			}
		}
		if (unrated) {
			break;
		}
	}
	cout << (unrated ? "unrated" : "maybe") << '\n';
	return 0;
}
