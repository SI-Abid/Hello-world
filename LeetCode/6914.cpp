/*
You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.

Return the head of the linked list after doubling it.
*/
// convert the list into number and multiply it by 2 then convert it back to list

// Definition for singly-linked list.
#include <bits/stdc++.h>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
using namespace std;
using ll = long long;
class Solution
{
public:
    vector<int> listToVec(ListNode *head)
    {
        vector<int> ans;
        ans.push_back(0);
        while (head)
        {
            int num = head->val;
            ans.push_back(num % 10);
            head = head->next;
        }
        reverse(ans.begin(), ans.end());
        // multiply by 2
        int i = 0;
        int carry = 0;
        while (i < ans.size())
        {
            int num = ans[i] + ans[i] + carry;
            ans[i] = num % 10;
            carry = (num / 10);
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    ListNode *vecToList(vector<int> num)
    {
        ListNode *head = new ListNode();
        ListNode *cur = head;
        int i = 0;
        if (num[0] == 0)
            i++;
        for (; i < num.size(); i++)
        {
            cur->val = num[i];
            if (i != num.size() - 1)
                cur->next = new ListNode();
            else
                break;
            cur = cur->next;
        }
        cur->next = NULL;
        return head;
    }
    ListNode *doubleIt(ListNode *head)
    {
        return vecToList(listToVec(head));
    }
};

class UnitTest
{
public:
    vector<int> listToVector(ListNode *head)
    {
        vector<int> vec;
        while (head)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        return vec;
    }
    ListNode *vectorToList(vector<int> vec)
    {
        ListNode *head = new ListNode();
        ListNode *cur = head;
        for (int i = 0; i < vec.size(); i++)
        {
            cur->val = vec[i];
            if (i != vec.size() - 1)
            {
                cur->next = new ListNode();
                cur = cur->next;
                continue;
            }
            cur->next = NULL;
        }
        return head;
    }
};

template <typename T>
bool operator==(const vector<T> &lhs, const vector<T> &rhs)
{
    if (lhs.size() != rhs.size())
        return false;
    for (int i = 0; i < lhs.size(); i++)
    {
        if (lhs[i] != rhs[i])
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    UnitTest ut;
    Solution s;
    vector<int> vec = {1, 8, 9}, ans = {3,7,8};
    ListNode *head = ut.vectorToList(vec);
    ListNode *res = s.doubleIt(head);
    assert(ut.listToVector(res) == ans);
    return 0;
}
