#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int _;
    cin>>_;
    for(int tc=1;tc<=_;tc++)
    {
        // printf("Case %d: ",tc);
    
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int alice=0,bob=0;
        int moves=0;
        int i=0,j=n-1;
        alice+=a[i];
        i++;
        int alice_prev=alice;
        int bob_prev=bob;
        while(true)
        {
            int sum=0;
            while(sum<=alice_prev && i<=j)
            {
                sum+=a[j];
                j--;
            }
            bob+=sum;
            bob_prev=sum;
            moves++;
            if(i>j)
            {
                break;
            }
            sum=0;
            while(sum<=bob_prev && i<=j)
            {
                sum+=a[i];
                i++;
            }
            alice+=sum;
            alice_prev=sum;
            moves++;
            if(i>j)
            {
                break;
            }
        }
        cout<<min(moves+1,n)<<" "<<alice<<" "<<bob<<endl;
    }
    return 0;
}