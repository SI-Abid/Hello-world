#include <bits/stdc++.h>
using namespace std;

// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
// You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].
// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.
// Return the modified image after performing the flood fill.
// Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, newColor = 2
// Output: [[2,2,2],[2,2,0],[2,0,1]]

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int m = image.size(), n = image[0].size();
        int oldColor = image[sr][sc];
        if (oldColor == newColor)
        {
            return image;
        }
        queue<pair<int, int>> q;
        q.push({sr, sc});
        while (!q.empty())
        {
            int r = q.front().first, c = q.front().second;
            q.pop();
            if (image[r][c] == oldColor)
            {
                image[r][c] = newColor;
                if (r - 1 >= 0 && image[r - 1][c] == oldColor)
                {
                    q.push({r - 1, c});
                }
                if (r + 1 < m && image[r + 1][c] == oldColor)
                {
                    q.push({r + 1, c});
                }
                if (c - 1 >= 0 && image[r][c - 1] == oldColor)
                {
                    q.push({r, c - 1});
                }
                if (c + 1 < n && image[r][c + 1] == oldColor)
                {
                    q.push({r, c + 1});
                }
            }
        }
        return image;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1, sc = 1, newColor = 2;
    vector<vector<int>> res = sol.floodFill(image, sr, sc, newColor);
    for (auto &i : res)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}