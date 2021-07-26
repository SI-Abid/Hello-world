#include<bits/stdc++.h>
using namespace std;

#define mx 100001
int tree[mx*3], ar[mx];

void buildTree(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = ar[start];
        return;
    }
    int mid = (start + end) / 2;
    int left = 2 * node;
    int right = 2 * node + 1;
    buildTree(left, start, mid);
    buildTree(right, mid + 1, end);
    tree[node] = tree[left] + tree[right];
}

int query(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 0;   // out of range
    if(left <= start && end <= right)
        return tree[node]; // in range
    int mid = (start + end) / 2;  // mid is in range
    int left_sum = query(left, start, mid, left, right);
    int right_sum = query(right, mid + 1, end, left, right);
    return left_sum + right_sum;
}

void update(int node, int start, int end, int pos, int value)
{
    if(pos < start || pos > end)
        return;
    if(pos>=start && pos<=end)
    {
        tree[node] = value;
        return;
    }
    int mid = (start + end) / 2;
    int left = 2 * node;
    int right = 2 * node + 1;
    update(left, start, mid, pos, value);
    update(right, mid + 1, end, pos, value);
    tree[node] = tree[left] + tree[right];
}

int main()
{   
    freopen("in.txt", "r", stdin);
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>ar[i];

    buildTree(1, 0, n-1);
    update(1, 1, n, 2, -1);
    cout<<query(1, 1, n, 1, n)<<endl;
    update(1, 1, n, 2, 1);
    cout<<query(1, 1, n, 1, n)<<endl;
    return 0;
}