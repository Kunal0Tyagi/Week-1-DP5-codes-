class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0]. size();
        vector<int> row;
        vector<int> col;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        for(auto r:row) {
            for(int i=0; i<n; i++) {
                matrix[r][i] = 0;
            }
        }

        for(auto c:col) {
            for(int i=0; i<m; i++) {
                matrix[i][c] = 0;
            }
        }
        
    }
};
