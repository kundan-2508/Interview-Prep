

https://leetcode.com/problems/spiral-matrix-ii/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> v(n,vector<int>(n));
        //int v[n][n];
        
        int startRow = 0;
        int endRow = n;
        int startCol = 0;
        int endCol = n;
        int i , j ;
        int cnt = 1;
        
        while(startRow < endRow && startCol < endCol)
        {
            for(i=startCol;i<endCol;i++)
            {
                v[startRow][i] = cnt;
                cnt++;
            }
            startRow++;
            
            for(i=startRow;i<endRow;i++)
            {
                v[i][endCol-1] = cnt;
                cnt++;
            }
            endCol--;
            
            if(startRow < endRow)
            {
                for(i=endCol-1;i>=startCol;i--)
                {
                    v[endRow-1][i] = cnt;
                    cnt++;
                }
                endRow--;
            }
            
            if(startCol < endCol)
            {
                for(i=endRow-1;i>=startRow;i--)
                {
                    v[i][startCol] = cnt;
                    cnt++;
                }
                startCol++;
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<n;j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return v;
    }
};
