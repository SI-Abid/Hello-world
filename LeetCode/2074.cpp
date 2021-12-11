#include <bits/stdc++.h>
using namespace std;

// You are given the head of a linked list.
// The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,
// The 1st node is assigned to the first group.
// The 2nd and the 3rd nodes are assigned to the second group.
// The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
// Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.
// Reverse the nodes in each group with an even length, and return the head of the modified linked list.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    // insert at the end of the list
    void insert(int x)
    {
        ListNode *temp = this;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = new ListNode(x);
    }
    void print()
    {
        ListNode *temp = this;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
class Solution
{
public:
    ListNode *reverseEvenLengthGroups(ListNode *head)
    {
        vector<int> v;
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        int c = 1;
        for(int i = 0; i < n; i+=c-1)
        {
            if(c%2 == 0)
            {
                if(i+c>=n)
                {
                    if((n-i)%2==0)
                        reverse(v.begin()+i, v.end());
                }
                else
                {
                    reverse(v.begin()+i, v.begin()+i+c);
                }
            }
            else if(i+c>=n && (n-i)%2==0)
            {
                reverse(v.begin()+i, v.end());
            }
            c++;
        }
        ListNode *temp = new ListNode(v[0]);
        ListNode *head1 = temp;
        for(int i = 1; i < n; i++)
        {
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return head1;
    }
};

int main()
{
    // Input: head = [4,3,0,5,1,2,7,8,6]
    // Output: [5,6,2,3,9,1,4,8,3,7]

    ListNode *head = new ListNode(4);
    vector<int> v = {3,0,5,1,2,7,8,6,3,4};

    for (int i = 0; i < v.size(); i++)
        head->insert(v[i]);

    // print the list
    head->print();

    Solution s;
    ListNode *ans = s.reverseEvenLengthGroups(head);
    ans->print();
    return 0;
}