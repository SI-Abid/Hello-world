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
    void insert(int x)
    {
        ListNode *temp = new ListNode(x);
        temp->next = this->next;
        this->next = temp;
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
    int getLength(ListNode *head)
    {
        int len = 0;
        while (head)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode *reverseArrayToList(vector<int> &arr)
    {
        int len = arr.size();
        ListNode *head = new ListNode(arr[len - 1]);
        ListNode *temp = head;
        for (int i = len - 2; i >= 0; i--)
        {
            temp->next = new ListNode(arr[i]);
            temp = temp->next;
        }
        return head;
    }
    ListNode *reverseEvenLengthGroups(ListNode *head)
    {
        int len = getLength(head);
        ListNode *temp = head;
        ListNode *reverseHead = NULL;
        // temp = temp->next;
        int cnt = 1;
        while (cnt <= len)
        {
            if (cnt % 2 == 0)
            {
                ListNode *tmp = temp->next;
                vector<int> arr;
                for (int i = 0; i < cnt; i++)
                {
                    arr.push_back(tmp->val);
                    tmp = tmp->next;
                }
                temp = tmp;
                ListNode *newHead = reverseArrayToList(arr);
                if (reverseHead == NULL)
                {
                    reverseHead = newHead;
                }
                else
                {
                    ListNode *temp = reverseHead;
                    while (temp->next)
                    {
                        temp = temp->next;
                    }
                    temp->next = newHead;
                }
            }
        }
        return head;
    }
};

int main()
{
    // Input: head = [5,2,6,3,9,1,7,3,8,4]
    // Output: [5,6,2,3,9,1,4,8,3,7]

    ListNode *head = new ListNode(5);
    vector<int> v = {2, 6, 3, 9, 1, 7, 3, 8, 4};

    for (int i = 0; i < v.size(); i++)
        head->insert(v[i]);

    // print the list
    head->print();

    Solution s;
    ListNode *ans = s.reverseEvenLengthGroups(head);
    while (ans != NULL)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    return 0;
}