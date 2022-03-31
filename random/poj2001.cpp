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
    Node *next[26];
    Node()
    {
        cnt = 0;
        for(int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
    }
    void insert(string &s)
    {
        int len = s.size();
        Node *cur = this;
        for(int i = 0; i < len; i++)
        {
            int idx = s[i] - 'a';
            if(cur->next[idx] == NULL)
            {
                cur->next[idx] = new Node();
            }
            cur = cur->next[idx];
            cur->cnt++;
        }
    }
    string shorted(string s)
    {
        int len = s.length();
        Node *cur = this;
        string ans = "";
        for(int i = 0; i < len; i++)
        {
            int idx = s[i] - 'a';
            if(cur->next[idx] == NULL)
            {
                return "";
            }
            cur = cur->next[idx];
            ans += s[i];
            if(cur->cnt == 1)
            {
                break;
            }
        }
        return ans;
    }
};

int main()
{
    Node *root = new Node();
    string s;
    vector<string> ans;
    while(cin>>s)
    {
        root->insert(s);
        ans.push_back(s);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" "<<root->shorted(ans[i])<<endl;
    }
    return 0;
}