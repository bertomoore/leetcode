#include <algorithm>
#include <vector>

using std::max;
using std::vector;

typedef vector<vector<vector<int>>> vecInt3D;
typedef vector<vector<int>> vecInt2D;
typedef vector<int> vecInt;


class Solution {
private:
    int dp(int row, int col1, int col2, vecInt2D& grid, vecInt3D& dpVec) {

        if (col1 < 0 ||
            col2 < 0 ||
            col1 >= grid[0].size() ||
            col2 >= grid[0].size())
                return 0;

        if (dpVec[row][col1][col2] != -1)
            return dpVec[row][col1][col2];

        int result = grid[row][col1];
        result += (col1 != col2) ? grid[row][col2] : 0;

        if (row != grid.size() - 1) {
            int temp = 0;

            for (int nCol1=col1-1; nCol1<=col1+1; nCol1++)
                for (int nCol2=col2-1; nCol2<=col2+1; nCol2++)
                    temp = max(temp, dp(row+1, nCol1, nCol2, grid, dpVec));
            
            result += temp;
        }

        dpVec[row][col1][col2] = result;

        return result;
    }

public:
    int cherryPickup(vecInt2D& grid) {

        int row = grid.size(),
            col = grid[0].size();

        vecInt3D dpVec (row, vecInt2D (col, vecInt (col, -1)));
        
        return dp(0, 0, col-1, grid, dpVec);
    }
};