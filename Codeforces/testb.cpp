#include <bits/stdc++.h>
typedef long long ll; typedef long double ld;
const int inf = INT_MAX, minf = INT_MIN; 
const ll llinf = LLONG_MAX, llminf = LLONG_MIN;
const long long M = 1000000007;

using namespace std;

const int N = 5e6+3;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    vector <int> sieve(N+1);
    for (int i = 2;i<=N;i++) {
        if (sieve[i]) continue;
        for (int j = 2*i;j<=N;j+=i) {
            sieve[j]=1;
        }
    }
    set<ll> st;
    vector <int> ans(N+1);
    for (int i = 2;i<=N;i++) {
        if (!sieve[i] and i%4==1) {
            for (int j = i;j<=N;j+=i) {ans[j]=1;st.insert(j);}
        }
    }

    cout<<st.size()<<" "<<*st.rbegin()<<endl;

    // int t;
    // cin >> t;
    // while (t--) {
    //     int n;
    //     cin >> n;
    //     if (ans[n]) cout << "YES\n";
    //     else cout << "NO\n";
    // }
}