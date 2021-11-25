#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <list>
#include <set>
#include <cmath>
#include <cstring>

#include <stdio.h>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <iomanip>
#include <ctime>

using namespace std;



int main(int argc, char* argv[])
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin>>n;
        vector<long long>parent,w,dist;
        parent.resize(n+1);
        w.resize(n+1);
        dist.resize(n+1);
        for(int i=0;i<n;i++)
        { 
            cin>>x;
            parent[i+1] = x;
            dist[i+1] = -1;
        }
        long long sum = 1;
        bool impossible = false;
        int prex;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(!i)
                dist[x]=w[x] = 0;
            else
            {
                sum++;
                if(dist[parent[x]] == -1)
                    impossible = true;  
                
                w[x] = sum-dist[parent[x]];
                sum = dist[x] = w[x] + dist[parent[x]];
            }
            prex = x;
        }
        if(impossible)
            cout<<-1;
        else
            for(int i=0;i<n;i++)
            {
                cout<<w[i+1]<<" ";
            }
        cout<<endl;

    }
    return 0;
}