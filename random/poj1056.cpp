//http:// ----------
//poj.org/ ---------
//problem?id=1056 --

#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>

using namespace std;

struct Node
{
    int cnt;
    Node *next[2];
    Node()
    {
        cnt = 0;
        next[0] = next[1] = NULL;
    }
    void del(Node *cur)
    {
        for(int i = 0; i < 2; i++)
        {
            if(cur->next[i] != NULL)
            {
                del(cur->next[i]);
            }
        }
        if(cur)
        {
            delete cur;
        }
    }
    void insert(string &s)
    {
        int len = s.size();
        Node *cur = this;
        for(int i = 0; i < len; i++)
        {
            int idx = s[i] - '0';
            if(cur->next[idx] == NULL)
            {
                cur->next[idx] = new Node();
            }
            cur = cur->next[idx];
            cur->cnt++;
        }
        // cur->end = true;
    }
    bool codable(string &s)
    {
        int len = s.size();
        Node *cur = this;
        
        for(int i = 0; i < len; i++)
        {
            int idx = s[i] - '0';
            cur = cur->next[idx];
        }
        return cur->cnt == 1;
    }
};

int main(int c, char **v)
{
    if(c==2)
    {
        freopen(v[1],"r",stdin);
    }

    Node *root = new Node();
    string s;
    int set = 0;
    vector<string> ans;
    while(cin>>s)
    {
        // cout << "cheking " << s << endl;
        // continue;

        if(s!="9")
        {
            ans.push_back(s);
            root->insert(s);
            continue;
        }

        set++;
        bool flag = true;
        for(auto i:ans)
        {
            if(root->codable(i)==false)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"Set "<<set<<" is immediately decodable"<<endl;
        }
        else
        {
            cout<<"Set "<<set<<" is not immediately decodable"<<endl;
        }
        
        if(root)
        {
            root->del(root);
        }
        
        root = new Node();
        ans.clear();
        continue;
        
    }
    return 0;
}