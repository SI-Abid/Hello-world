#include <bits/stdc++.h>
using namespace std;


map<char, int> mp;

struct Node
{
    int cnt;
    Node *next[4];
    Node()
    {
        cnt = 0;
        for (int i = 0; i < 4; i++)
            next[i] = NULL;
    }
    void insert(string &s)
    {
        // int len = s.size();
        Node *cur = this;
        for (int i = 0; i < s.size(); i++)
        {
            int idx = mp[s[i]];
            if (cur->next[idx] == NULL)
            {
                cur->next[idx] = new Node();
            }
            cur = cur->next[idx];
            cur->cnt++;
        }
    }
};

void del(Node *cur)
{
    for (int i = 0; i < 4; i++)
    {
        if (cur->next[i] != NULL)
        {
            del(cur->next[i]);
        }
    }
    cur->cnt = 0;
    delete cur;
}

void dfs(Node *root, int &ans, int &lvl)
{
    if (root == NULL)
        return;

    ans = max(ans, lvl * root->cnt);

    for (int i = 0; i < 4; i++)
    {
        lvl++;
        dfs(root->next[i], ans, lvl);
        lvl--;
    }
}

int main(int argc, char const *argv[])
{
    if (argc >= 2)
    {
        freopen(argv[1], "r", stdin);
        if (argc == 3)
            freopen(argv[2], "w", stdout);
    }

    mp['T'] = 0;
    mp['A'] = 1;
    mp['C'] = 2;
    mp['G'] = 3;

    int t;
    cin >> t;
    string s;
    Node *root;
    int n,ans,lvl,tc,i;
    for (tc = 1; tc <= t; tc++)
    {
        cin >> n;
        root = new Node();
        for (i = 0; i < n; i++)
        {
            cin >> s;
            root->insert(s);
        }
        ans = 0;
        lvl = 0;
        // cout<<"-----------"<<endl;
        dfs(root, ans, lvl);
        cout << "Case " << tc << ": " << ans << endl;
        del(root);
        // cout<<ans<<endl;
    }
    return 0;
}
