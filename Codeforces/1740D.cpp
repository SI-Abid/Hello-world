#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(k);
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        int avail= n*m-3;
        int need=k;
        priority_queue<int> pq;
        for(int e:a)
        {
            pq.push(e);
            if(pq.top()==need)
            {
                while(!pq.empty() && pq.top()==need)
                {
                    pq.pop();
                    need--;
                }
            }
            if(pq.size()==avail)
            {
                break;
            }
        }
        cout<< (need==0 ? "YA" : "TIDAK") <<'\n';
    }
    return 0;
}