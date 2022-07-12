#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum=0;
        int cnt=-1;
        int cnt2=0;
        int cnt3=0;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
            {
                if(x==2) cnt2++;
                else 
                {
                    sum+=x;
                    cnt++;
                }
            }
        }
        while(sum>0)
        {
            sum/=2;
            cnt3++;
            if(sum&1)
            {
                break;
            }
        }
        if(cnt==-1)
        {
            cout<<cnt2<<"\n";
        }
        else
        {
            if(cnt3>=2 and cnt2>0)
            {
                cout<< cnt+1+cnt2 <<"\n";
            }
            else
            {
                cout<< cnt+cnt3+cnt2 <<"\n";
            }
        }
    }
    return 0;
}