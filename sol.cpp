#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mx = *max_element(a.begin(), a.end());
		long long ans = 0;
		// view the image in this repository for better understanding
		// the first task is to find the maximum element
		// next is to check if the difference of its current position (index + 1) 
		// and k (the position that maximum element should be placed) is greater
		// than or equal to 0 (it means that this maximum element is always found
		// at the k-th position)
		// finally, count the number of elements ahead of this maximum element
		// because we can form these subsequences as well
		// note: don't forget to add 1 for the original sequence
		for (int i = 0; i < n; i++) {
			if (a[i] == mx && (i + 1) - k >= 0) {
				ans += (1 + n - (i + 1));
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
