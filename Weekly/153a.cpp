#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"1.0000000000\n";
        return 0;
    }
    int plus,plux,ques;
    for (size_t i = 0; i < a.size(); i++)
    {
        if(b[i]=='?'){
            ques++;
        }
        if(a[i]=='+'){
            plus++;
        }
        else plus--;
        if(b[i]=='+'){
            plux++;
        }
        else plux--;
    }
    double total=1<<ques;
    double need=0;
    if(plus>plux) need=plus-plux;
    else need=plux-plus;
    //nCr
    double ans=1;
    for (size_t i = 1; i <= need; i++)
    {
        ans*=(total-i+1);
        ans/=i;
    }
    cout<<fixed<<setprecision(11)<<ans<<"\n";
    // +++ ++- +-+ -++ +-- -+- --+ --- = 8
    // ++++ +++- ++-- +--- ---- 3n+2;
    
    return 0;
}