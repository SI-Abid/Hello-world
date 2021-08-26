#include"bits/stdc++.h"
using namespace std;

set<int> s;

void gen_id()
{
    srand(time(0));
    int x=rand()%10000;
    s.insert(x);
    cout<<"Registration done! ID is:"<<x<<endl;

}
void src_id()
{
    int q, i=0;
    bool found=false;
    cout<<"Enter the ID to be searched:";
    cin>>q;
    for(auto x:s)
    {
       if(x==q)
        {
            found=true;
            break;
        }
        i++;
    }
    (found)?cout<<"ID found at location "<<i<<endl:cout<<"ID not found\n";
}
void display()
{
    NULL;
}
void rmv_id()
{
    NULL;
}

int main()
{
    int choice;
    while(true)
    {
        puts("Please select-\n1.Reg ID\n2.Src ID\n3.Withdraw ID\n4.Display\n5.Exit");
        cin>>choice;
        switch (choice)
        {
        case 1:
            gen_id();
            break;
        case 2:
            src_id();
            break;
        case 3:
            rmv_id();
            break;
        case 4:
            display();
            break;
        case 5: exit(1);
        default:
            break;
        }
    }
}