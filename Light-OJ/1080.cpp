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
        delete left;
        delete right;
    }
};

void build(Node *root, int l, int r, vector<int> &v)
{
    if (l==r)
    {
        root->val = v[l];
        return;
    }
    int mid = (l+r)/2;
    root->left = new Node();
    root->right = new Node();
    build(root->left, l, mid, v);
    build(root->right, mid+1, r, v);
    root->val = min(root->left->val, root->right->val);
}

int main()
{
    
    return 0;
}