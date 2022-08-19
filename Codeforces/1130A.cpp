#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int d = -1; d <= 1; d++) {
		if (d == 0) {
			continue;
		}
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] / (double) d > 0) {
				count++;
			}
		}
		if (count >= (n + 1) / 2) {
			cout << d << endl;
			return 0;
		}
	}
	cout << 0 << endl;
}