#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n,k,r,c;
        cin>>n>>k>>r>>c;
        deque<char> pat(n,'.');
        for(int i=0;i<n;i++)
            if(i%k==0)
                pat[i]='X';
        vector<deque<char>> mat;
        int mark = 0;
        for(int i=0;i<n;i++)
        {
            mat.push_back(pat);
            if(pat[c-1]=='X')
                mark=i;
            pat.push_front(pat.back());
            pat.pop_back();
        }
        // int shift = (r-mark+n-1)%n;
        // print
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<mat[(i+mark-r+n+1)%n][j];
            cout<<'\n';
        }
    }
    return 0;
}