#include "bits/stdc++.h"
#define F first
#define S second
using namespace std;

int minSwaps(int [], int);

int main()
{

    return 0;
}

int minSwaps(int arr[], int n)
{

    pair<int, int> Pos[n];
    for (int i = 0; i < n; i++)
    {
        Pos[i].F = arr[i];
        Pos[i].S = i;
    }
 
    sort(Pos, Pos + n);
    
    vector<bool> vis(n, false);
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || Pos[i].S == i)
            continue;
 
        int cnt = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;
            j = Pos[j].S;
            cnt++;
        }
 
        if (cnt > 0)
        {
            ans += (cnt - 1);
        }
    }
    return ans;
}
 