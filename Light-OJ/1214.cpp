#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    for(int c=1;c<=t;c++)
    {
        cout << "Case " << c << ": ";
        string a;
        int b;
        cin >> a >> b;
        if(b<0)
            b = -b;
        long rem=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='-')
                continue;
            rem = rem*10 + (a[i]-'0');
            rem %= b;
        }
        if(rem==0)
            cout << "divisible" << endl;
        else
            cout << "not divisible" << endl;
    }
    return 0;
}