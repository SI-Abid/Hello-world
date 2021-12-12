#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeCiphertext(string encodedText, int rows)
    {
        string res="";
        if(rows == 1) return encodedText;
        int n = encodedText.size();
        int cols = n / rows;
        // int clk = cols+1;
        vector<vector<char>> text2d(rows, vector<char>(cols));
        int k = 0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                text2d[i][j] = encodedText[k++];
            }
        }
        for(int i=0;i<cols;i++)
        {
            for(int j=0,k=i;j<rows && k<cols;j++,k++)
            {
                res += text2d[j][k];
            }
        }
        // trim tailing spaces
        while(res.back() == ' ') res.pop_back();
        return res;
    }
};

int main()
{
    //                       0 1 2 3 4 5 6 7 8 9 1011121314151617181920212223  
    // Input: encodedText = "i v e o         e e d       l   t e       o l c", rows = 3
    // Output: "cipher"
    Solution s;
    // cout<<s.decodeCiphertext("ch   ie   pr", 3)<<endl;
    cout << s.decodeCiphertext("osljjaooouqphokrnf     lsdoioccbdhbsqkm b     qmqoitpqnpqwnebsou     llvfotmazegriuigrs     vjpbgaqifwo  kaqto     dsupahycdgbyoubsu", 6) << endl;
    return 0;
}