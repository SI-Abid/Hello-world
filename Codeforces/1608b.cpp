// You are given three integers n,a,b. Determine if there exists a permutation p1,p2,…,pn of integers from 1 to n, such that:
// There are exactly a integers i with 2≤i≤n−1 such that pi−1<pi>pi+1 (in other words, there are exactly a local maximums).
// There are exactly b integers i with 2≤i≤n−1 such that pi−1>pi<pi+1 (in other words, there are exactly b local minimums).
// If such permutations exist, find any such permutation.
// Otherwise, print “-1”.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(abs(a-b)>1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(a==0 and b==0)
        {
            for(int i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else if(a==b)
        {
            int i=1;
            int j=a+b+2;
            while(i<j)
            {
                cout<<i++<<" ";
                cout<<j--<<" ";
            }
            for(i=a+b+3;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
        {
            if(a>b)
            {
                int i=1;
                int j=n&1?n:n-1;
                while(i<j)
                {
                    cout<<i++<<" ";
                    cout<<j--<<" ";
                }
                cout<<endl;
            }
            else
            {
                int i=1;
                int j=n&1?n:n-1;
                while(i<j)
                {
                    cout<<j--<<" ";
                    cout<<i++<<" ";
                }
                if(n%2==0)
                    cout<<n;
                cout<<endl;
            }
        }

    }
    return 0;
}