class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int strrow=0,strcol=0,endrow=matrix.size()-1,endcol=matrix[0].size()-1;
        vector<int> res;
        while(strrow<=endrow && strcol<=endcol)
        {
            for( int i=strcol;i<=endcol;i++)
            {
                res.push_back(matrix[strrow][i]);
            }
            strrow++;
            for(int i=strrow;i<=endrow;i++)
            {
                res.push_back(matrix[i][endcol]);
            }
            endcol--;
            if(strrow>endrow || strcol>endcol)
            break;
            for(int i=endcol;i>=strcol;i--)
            {
                res.push_back(matrix[endrow][i]);
            }
            endrow--;
            for(int i=endrow;i>=strrow;i--)
            {
                res.push_back(matrix[i][strcol]);
            }
            strcol++;

        }
        return res;
        }
};
