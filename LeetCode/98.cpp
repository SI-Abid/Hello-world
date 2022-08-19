#include<bits/stdc++.h>
using namespace std;
////////// START OF USER-DEFINED SETTINGS //////////
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isValidBST(TreeNode *root)
    {
        if(root == nullptr)
            return true;
        if(root->left == nullptr && root->right == nullptr)
            return true;
        if(root->left->val < root->val && root->right->val > root->val)
        {
            return isValidBST(root->left) && isValidBST(root->right);
        }
        else
        {
            return false;
        }
    }
};
////////// END OF USER-DEFINED SETTINGS //////////
// Driver program to test above function
int main()
{   
    // Let us construct the BST shown in the figure
    // Input : root = [2, 1, 3]
    // Output : true
    TreeNode *root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    Solution obj;
    if (obj.isValidBST(root))
        cout << "true";
    else
        cout << "false";
    return 0;
}