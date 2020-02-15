#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int c, m, x;
        cin>>c>>m>>x;

        //int team=0;
//        while(true)
//        {
//            if(c!=0 && m!=0 && x!=0)
//            {
//                team++;
//                c--; m--; x--;
//            }
//            else
//                break;
//        }


        int team = min(min(c, m), (c+m+x)/3);

        cout<<team<<endl;
    }

    return 0;
}
