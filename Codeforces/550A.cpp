#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    cin>>s;
    int n=s.length();
    string a="AB";	
    string b="BA";
    // check if a and b are present in the string without overlapping
    vector<int> posa,posb;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==a[0] && s[i+1]==a[1])
        {
            posa.push_back(i);
        }
        if(s[i]==b[0] && s[i+1]==b[1])
        {
            posb.push_back(i);
        }
    }
    if(posa.size()==0 || posb.size()==0)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<posa.size();i++)
    {
        for(int j=0;j<posb.size();j++)
        {
            if(abs(posa[i]-posb[j])>1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}