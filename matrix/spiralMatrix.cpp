https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/
https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix/0
https://leetcode.com/problems/spiral-matrix/
https://www.hackerrank.com/contests/utsav/challenges/spiral-matrix
https://www.hackerrank.com/contests/coding-test-1-bits-hyderabad/challenges/spiral-matrix-1
https://www.interviewbit.com/problems/spiral-order-matrix-i/
https://www.codechef.com/problems/SPMAT#
https://www.hackerearth.com/problem/algorithm/spiral-matrix-1/description/


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        if(matrix.empty())
        {
            return v;
        }
        int i, startRow = 0, startCol = 0;
        int endRow = matrix.size(), endCol = matrix[0].size();
        while(startRow < endRow && startCol < endCol)
        {
            for(i=startCol;i<endCol;i++)
            {
                v.push_back(matrix[startRow][i]);
            }
            startRow++;
            for(i=startRow;i<endRow;i++)
            {
                v.push_back(matrix[i][endCol-1]);
            }
            endCol--;
            if(startRow < endRow)
            {
                for(i=endCol-1;i>=startCol;i--)
                {
                    v.push_back(matrix[endRow-1][i]);
                }
                endRow--;
            }
            if(startCol < endCol)
            {
                for(i=endRow-1;i>=startRow;i--)
                {
                    v.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
        }
        return v;
    }
};
