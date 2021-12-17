#include <bits/stdc++.h>
using namespace std;

// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *slow = dummy, *fast = dummy;
        while (n--)
            fast = fast->next;
        while (fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};

int main()
{
    Solution sol;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *ans = sol.removeNthFromEnd(head, 2);
    while (ans)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
    cout << endl;
    return 0;
}