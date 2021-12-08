#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int wateringPlants(vector<int> &plants, int capacity)
    {
        int n = plants.size();
        int ans = 0;
        int i = 0;
        for(int i = 0; i < n; )
        {
            // cout<< "i: "<< i <<endl;
            int c = capacity;
            while(i < n && c >= plants[i])
            {
                // cout << "c: "<< c <<endl;
                c -= plants[i];
                // cout << "c: "<< c <<endl;
                ans++;
                // cout << "ans: "<< ans <<endl;
                i++;
            }
            if(i == n)
                break;
            ans+=i+i;
            // cout << "ans: "<< ans <<endl;
        }
        return ans;
    }
};

int main()
{
    // Input: plants = [7,7,7,7,7,7,7], capacity = 8
    Solution s;
    vector<int> plants = {7,7,7,7,7,7,7};
    int capacity = 8;
    cout << s.wateringPlants(plants, capacity) << endl;
    return 0;
}