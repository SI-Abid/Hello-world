#include "bits/stdc++.h"
#define Sort(a)     sort(a.begin(), a.end())
using namespace std;

int main()
{
    int x;
    vector<int> arr(4);
    for(int i=0; i<4; i++);
    {
        cin>>x;
        arr.push_back(x);
    }
    Sort(arr);

    for(int i=0; i<3; i++)
        cout<<arr[3]-arr[i]<<" ";
    
    cout<<endl;
    return 0;
}