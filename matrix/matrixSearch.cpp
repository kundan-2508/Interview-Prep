
https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.empty())
        {
            return false;
        }
        
        int low = 0;
        int nRow = matrix.size();
        int nCol = matrix[0].size();
        int high = (nRow*nCol)-1;
        
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            int currRow = mid/nCol;
            int currCol = mid%nCol;
            if(matrix[currRow][currCol] == target)
            {
                return true;
            }
            else if (matrix[currRow][currCol] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return false;
    }
};
