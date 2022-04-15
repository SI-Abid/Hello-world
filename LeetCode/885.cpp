class Solution
{
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int r, int c)
    {
        vector<vector<int>> res;
        int dir = 0, step;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        res.emplace_back(vector<int>{r, c});
        dir++;
        if (rows * cols == 1)
            return res;
        for (int i = 1; i < 2 * (rows + cols); i += 2)
        {
            for (int j = 0; j < 4; j++)
            {
                step = i + j / 2;
                for (int k = 0; k < step; k++)
                {
                    r += dx[j];
                    c += dy[j];
                    if (r >= 0 && r < rows && c >= 0 && c < cols)
                    {
                        res.emplace_back(vector<int>{r, c});
                        dir++;
                    }    
                    if (dir == rows * cols)
                        return res;
                }
            }
        }
        return res;
    }
};