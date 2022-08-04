#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    set<int>st;
    map<int,int>mp;
    int l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        st.insert(arr[i]);
        if(st.size()==m){
            l=1;
            r=i+1;
            break;
        }
    }

    if(l==-1){
        cout<<l<<' '<<r<<endl;
        return 0;
    }

    while(mp[arr[l-1]]>1){
        mp[arr[l-1]]--;
        l++;
    }

    cout<<l<<' '<<r<<endl;

    return 0;
}