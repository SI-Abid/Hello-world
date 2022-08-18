#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> m;
    while (n--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int max_count=0;
    string max_word;
    for (auto it=m.begin(); it!=m.end(); ++it)
    {
        if(it->second>max_count)
        {
            max_count=it->second;
            max_word=it->first;
        }
    }
    cout<<max_word<<endl;
    return 0;
}