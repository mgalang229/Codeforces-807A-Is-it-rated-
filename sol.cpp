#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	// input
	int n;
	cin >> n;
	
	// check if the rating before the contest is different than the one after
	vector<int> a(n), b(n);
	bool rated = false;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		if (a[i] != b[i]) {
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
	
	// output the answer
	cout << (unrated ? "unrated" : "maybe") << '\n';
	return 0;
}
