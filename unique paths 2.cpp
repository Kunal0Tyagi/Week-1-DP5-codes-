class Solution {
public:
int rmax, cmax;
vector<vector<int> > dp;
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	rmax = size(obstacleGrid), cmax = size(obstacleGrid[0]);
	dp.resize(rmax, vector<int>(cmax));
	return move(obstacleGrid, 0, 0);
}
int move(vector<vector<int>>& mat, int i, int j) {
	if(i < 0 || j < 0 || i >= rmax || j >= cmax) 
    return 0;  
    if(mat[i][j])
    return dp[i][j] = 0;
	if(i == rmax- 1 && j == cmax - 1)
    return 1;
	if(dp[i][j]) return dp[i][j];
	return dp[i][j] = move(mat, i + 1, j) + move(mat, i, j + 1);
}
};
