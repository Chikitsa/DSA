class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
    int n = grid[0].size();
    int row = m - 1;  // start from the bottom-left corner
    int col = 0;
    int count = 0;
    
    while (row >= 0 && col < n) {
        if (grid[row][col] < 0) {
            count += n - col;  // all elements to the right are negative
            row--;  // move up to the previous row
        } else {
            col++;  // move right to the next column
        }
    }
    
    return count;
    }
};