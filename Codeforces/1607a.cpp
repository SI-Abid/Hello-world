#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string key, word;
        int ar[27];
        cin>>key>>word;
        if(word.size()==1)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        for (int i = 1; i < 27; i++)
        {
            ar[key[i-1]-96]=i;   
        }
        for (int i = 0; i < word.size()-1; i++)
        {
            cnt+=abs(ar[word[i]-96]-ar[word[i+1]-96]);
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}