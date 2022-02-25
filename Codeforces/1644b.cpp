#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        for (int i = n; i > 0; i--)
        {
            a.push_back(i);
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
            swap(a[0],a[i]);
        }
    }
    return 0;
}