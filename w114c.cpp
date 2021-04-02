#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define be begin()
#define en end()
#define all(x) (x).begin(), (x).end()
#define out cout << setprecision(20)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef set<int> si;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;

int main(int argc, char *argv[])
{
    if (argc == 2 or argc == 3)
        freopen(argv[1], "r", stdin);
    if (argc == 3)
        freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, string>> vp(n);
    // int a, b, c, ab, ac, bc, abc;
    map<string, int> MAP;
    for (int i = 0; i < n; i++)
    {
        int val;
        string vit;
        cin >> val >> vit;
        sort(all(vit));
        if (MAP[vit])
            MAP[vit] = min(val, MAP[vit]);
        else
            MAP[vit] = val;
    }
    // for(auto it:MAP)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    int mini = INF;
    
    if (MAP["AB"] && MAP["A"] && MAP["B"])
        MAP["AB"] = min(MAP["A"] + MAP["B"], MAP["AB"]);

    if (MAP["BC"] && MAP["C"] && MAP["B"])
        MAP["BC"] = min(MAP["C"] + MAP["B"], MAP["BC"]);

    if (MAP["AC"] && MAP["A"] && MAP["C"])
        MAP["AC"] = min(MAP["A"] + MAP["C"], MAP["AC"]);

    if (MAP["A"] && MAP["B"] && MAP["C"])
        mini = min(mini, MAP["A"] + MAP["B"] + MAP["C"]);

    if (MAP["AB"] && MAP["C"])
        mini = min(mini, MAP["AB"] + MAP["C"]);

    if (MAP["A"] && MAP["BC"])
        mini = min(mini, MAP["A"] + MAP["BC"]);

    if (MAP["B"] && MAP["AC"])
        mini = min(mini, MAP["B"] + MAP["AC"]);

    if (MAP["ABC"])
        mini = min(mini, MAP["ABC"]);

    if(MAP["AB"] && MAP["BC"])
        mini=min(mini, MAP["AB"] + MAP["BC"]);

    if(MAP["AB"] && MAP["AC"])
        mini=min(mini, MAP["AB"] + MAP["AC"]);

    if(MAP["AC"] && MAP["BC"])
        mini=min(mini, MAP["AC"] + MAP["BC"]);

    if (mini && mini!=INF)
        cout << mini << endl;
    else
        cout << "-1\n";
    return 0;
}
