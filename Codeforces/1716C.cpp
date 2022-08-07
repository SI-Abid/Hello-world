#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        // printf("Case %d: ",tc);

        int n;
        cin >> n;
        vector<vector<int>> v(2, vector<int>(n));
        int mx = 0;
        int mi=0, mj=0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[0][i];
            if (v[0][i] > mx)
            {
                mx = v[0][i];
                mi = 0;
                mj = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[1][i];
            if (v[1][i] > mx)
            {
                mx = v[1][i];
                mi = 1;
                mj = i;
            }
        }
        // cout<<mi<<" "<<mj<<endl;
        int ctime = 0;
        // zigzag
        int i = 0, j = 0;
        for (; j < mj; j++)
        {
            if (j & 1)
            {
                if (v[i][j] > ctime)
                {
                    ctime += v[i][j] - ctime;
                }
                i--;
                ctime++;
                if (j == mj - 1 and i == mi)
                {
                    i++;
                    // j++;
                    break;
                }
                if (v[i][j] > ctime)
                {
                    ctime += v[i][j] - ctime;
                }
                ctime++;
            }
            else
            {
                if (v[i][j] > ctime)
                {
                    ctime += v[i][j] - ctime;
                }
                ctime++;
                if (i == 0 and j == 0)
                    ctime--;
                i++;
                if (j == mj - 1 and i == mi)
                {
                    i--;
                    break;
                }
                if (v[i][j] > ctime)
                {
                    ctime += v[i][j] - ctime;
                }
                ctime++;
            }
        }
        int ej = j;
        // cout<<mi<<" "<<mj<<endl;
        // cout<<i<<" "<<j<<" "<<ctime<<endl;
        for (; j < n; j++)
        {
            if (v[i][j] > ctime)
            {
                ctime += v[i][j] - ctime;
            }
            ctime++;
            if (i == 0 and j == 0)
                ctime--;
        }
        j--;
        i ^= 1;
        for (; j >= ej; j--)
        {
            if (v[i][j] > ctime)
            {
                ctime += v[i][j] - ctime;
            }
            ctime++;
            if (i == 0 and j == 0)
                ctime--;
        }
        i^=1;
        if(i==0 and j>0)
        {
            if(v[i][j-1]>ctime)
            {
                ctime+=v[i][j-1]-ctime;
            }
            // ctime++;
        }
        cout << ctime << endl;
    }
    return 0;
}