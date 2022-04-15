class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        auto [rows, cols, r, c, k, tx, ty] = make_tuple(matrix.size(), matrix[0].size(), 0, 0, 0, 0, 0);
        for (int i = 0; i < rows*cols; i++)
        {
            res.emplace_back(matrix[r][c]);
            matrix[r][c] = -1000;
            tx = r + dx[k];
            ty = c + dy[k];
            if (tx < 0 || tx >= rows || ty < 0 || ty >= cols || matrix[tx][ty] == -1000)
            {
                k = (k + 1) % 4;
                r += dx[k];
                c += dy[k];
            }
            else
            {
                r = tx;
                c = ty;
            }
        }
        return res;
    }
};