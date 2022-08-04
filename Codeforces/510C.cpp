#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>> adj(101,vector<bool>(101,false));
vector<bool> mat(26),vis(101);
bool impossible=false;
stack<char> st;

void topSort(int node)
{
    vis[node]=true;
    mat[node]=true;
    for(int i=0;i<26;i++)
    {
        if(mat[i] and adj[node][i])
        {
            impossible=true;
        }
        if(vis[i] or adj[node][i]==false)
        {
            continue;
        }
        topSort(i);
    }
    st.push(node+'a');
    mat[node]=false;
}

int main()
{
    int n;
    cin >> n;
    string str,pre;
    cin >> pre;
    n--;
    while(n--)
    {
        cin>>str;
        if(impossible)
            continue;
        int i;
        for(i=0;i<pre.size() and i<str.size();i++)
        {
            if(pre[i]==str[i])
                continue;
            if(adj[str[i]-'a'][pre[i]-'a'])
            {
                impossible=true;
            }
            adj[pre[i]-'a'][str[i]-'a']=true;
            break;
        }
        if(i==str.size() and i!=pre.size())
        {
            impossible=true;
        }
        pre=str;
    }
    if(impossible)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    for(int i=0;i<26;i++)
    {
        if(vis[i])
            continue;
        mat.assign(mat.size(),false);
        topSort(i);
    }
    if(impossible)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
    return 0;
}

