#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val, lazy;
    Node *left, *right;
    Node()
    {
        lazy=0;
        left = right = NULL;
    }
    ~Node()
    {
        if(left) delete left;
        if(right) delete right;
    }
};

void build(Node *root, int l, int r, string &v)
{
    if (l==r)
    {
        root->val = v[l-1]-'0';
        // cout<<root->val<<" "<<root->lazy<<endl;
        return;
    }
    int mid = (l+r)/2;
    root->left = new Node();
    root->right = new Node();
    build(root->left, l, mid, v);
    build(root->right, mid+1, r, v);
    root->lazy = 0;
}

void update(Node *root, int l, int r, int i, int j)
{
    if (l>j || r<i) return;
    if (l>=i && r<=j)
    {
        root->lazy ^= 1;
        // cout<<root->val<<" "<<root->lazy<<endl;
        return;
    }
    int mid = (l+r)/2;
    update(root->left, l, mid, i, j);
    update(root->right, mid+1, r, i, j);
    // root->lazy = 0;
}

int query(Node *root, int l, int r, int &pos, int carry=0)
{
    if (l==r)
    {
        // cout<<root->val<<" "<<root->lazy<<" "<<carry<<endl;
        return root->val ^ carry ^ root->lazy;
    }
    int mid = (l+r)/2;
    if (pos<=mid) return query(root->left, l, mid, pos, root->lazy ^ carry);
    else return query(root->right, mid+1, r, pos, root->lazy ^ carry);
}

int main(int argc, char **argv)
{
    if(argc == 2 or argc == 3) freopen(argv[1], "r", stdin);
    if(argc == 3) freopen(argv[2], "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        string s;
        cin>>s;
        Node *root = new Node();
        Node *cur = root;
        int n=s.size();
        build(cur,1,n,s);
        int q;
        cin>>q;
        cout<<"Case "<<tt<<":\n";
        while(q--)
        {    
            Node *test = root;
            char op;
            cin>>op;
            if(op=='I')
            {
                int i,j;
                cin>>i>>j;
                update(test,1,n,i,j);
            }
            else
            {
                int x;
                cin>>x;
                cout<<query(test,1,n,x)<<"\n";
            }
        }
    }
    return 0;
}