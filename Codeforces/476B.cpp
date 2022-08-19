#include<bits/stdc++.h>
using namespace std;

int main()
{
    int fac[]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
    string a,b;
    cin>>a>>b;
    int plus=0,neg=0,ques=0;
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i]=='+'){
            plus++;
        }
        else neg++;
        if(b[i]=='?'){
            ques++;
        }
        else if(b[i]=='+'){
            plus--;
        }
        else neg--;
    }
    if(plus<0 or neg<0)
    {
        cout<<"0.0000000000\n";
        return 0;
    }
    double ways=1<<ques;
    // int need=0;
    // need=plus>neg?plus:neg;
    //nCr
    double ans=fac[ques]/(fac[plus]*fac[neg]);
    
    cout<<fixed<<setprecision(11)<<ans/ways<<"\n";
    
    return 0;
}