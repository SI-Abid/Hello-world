#include "bits/stdc++.h"
using namespace std;

void car()
{
    int pump[5];
    int fuel=30, dist=0, move=1, step;
    bool reached=false;
  
    for(auto &i:pump)
    {
        cin>>i;
        // cout<<i;
    }
    
    cout<<"Petrol pumps generated at ";
    printf("%d, %d, %d, %d, %d\n",pump[0],pump[1],pump[2],pump[3],pump[4]);

    int i=0;
    while(true)
    {
        for(auto p:pump)
            if(dist==p)
                fuel+=20;
        
        step=rand()%7;
        dist+=step, fuel-=step;
        if(fuel<=0)
            break;
        
        cout<<endl<<"Move "<<move++<<" - Car at "<<dist<<", petrol remaining "<<fuel;
        if(dist>=100)
        {
            reached=true;
            break;
        }
    }
    (reached)? cout<<", reached" : cout<<", game over";
    puts("\n");
}

int main()
{
    srand(time(0));
    freopen("in.txt", "r", stdin);

    for(int i=0; i<3; i++)
        car();
    
    return 0;
}