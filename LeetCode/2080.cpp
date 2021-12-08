#include <bits/stdc++.h>
using namespace std;

class RangeFreqQuery
{
public:
    unordered_map<int, vector<int>> m;
    RangeFreqQuery(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]].push_back(i);
        }
    }

    int query(int left, int right, int value)
    {
        if(m.find(value) == m.end())
            return 0;
        auto l = lower_bound(m[value].begin(), m[value].end(), left);
        auto r = upper_bound(m[value].begin(), m[value].end(), right);
        return r - l;
    }
};

int main()
{
    /*Input
        ["RangeFreqQuery", "query", "query"]
        [[[12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]], [1, 2, 4], [0, 11, 33]]
    */

    vector<int> arr = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
    RangeFreqQuery *obj = new RangeFreqQuery(arr);

    cout << obj->query(1, 2, 4) << endl;
    cout << obj->query(0, 11, 33) << endl;
    cout << obj->query(0, 10, 12) << endl;

    return 0;
}