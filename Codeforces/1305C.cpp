#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long

void solve()
{
	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	vector<int> a(n);
	for (auto &x : a)
		cin >> x;
	sort(a.begin(), a.end());
	if(n>m)
	{
		puts("0");
		return;
	}
	ll prod = 1;
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			prod *= abs(a[j] - a[i]);
			prod %= m;
		}
	}
	cout << prod << nl;
}

signed main()
{
	int _(1);
	// cin >> _;
	for (int tc = 1; tc <= _; tc++)
	{
		// printf("Case %d: ",tc);
		solve();
	}
	return 0;
}