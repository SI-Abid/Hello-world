#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// struct Node
// {
//     Node *next[2];
//     Node()
//     {
//         next[0] = next[1] = NULL;
//     }
//     void insert(string s)
//     {
//         int len = s.length();
//         Node *cur = this;
//         for (int i = 0; i < len; i++)
//         {
//             int idx = s[i] - '0';
//             if (cur->next[idx] == NULL)
//             {
//                 cur->next[idx] = new Node();
//             }
//             cur = cur->next[idx];
//         }
//     }

// };

// string toBin(int n)
// {
//     return bitset<17>(n).to_string();
// }

const int limit = 1<<17;
bool bits[limit+1][18];

int main()
{
    // memset(bits[0], 0, sizeof bits[0]);
    for (size_t i = 0; i < limit+1; i++)
    {
        for (size_t b = 0; b < 18; b++)
        {
            bits[i][b] = i & (1<<b);
        }
    }
    int t;
    cin>>t;
    while (t--)
    {
        int l,r;
        cin>>l>>r;
        int cnt[18]={0};
        int cnt2[18]={0};
        for (int i = l; i <= r; i++)
        {
            for (int b = 0; b < 18; b++)
            {
                cnt[b] += bits[i][b];
            }
        }
        for (int i = l,x; i <= r; i++)
        {
            cin>>x;
            for (int b = 0; b < 18; b++)
            {
                cnt2[b] += bits[x][b];
            }
        }
        int ans = 0;
        for (int b = 0; b < 18; b++)
        {
            // cout<<cnt[b]<<" "<<cnt2[b]<<" | ";
            if(cnt[b]!=cnt2[b])
            {
                ans += 1<<b;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}