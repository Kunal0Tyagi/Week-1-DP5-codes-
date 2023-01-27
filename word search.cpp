class Solution {
public:
    
    bool fun(vector<vector<char>> &vec, string str, int start, int i, int j)
    {
        if(start == str.length())
            return true;
        
        if(i < 0 || j < 0 || i >= vec.size() || j >= vec[0].size())
            return false;
        
        bool ans = false;
        
        if(str[start] == vec[i][j])
        {
            vec[i][j] = '*';
            
            ans = (fun(vec, str, start + 1, i, j + 1) || 
                   fun(vec, str, start + 1, i + 1, j) || 
                   fun(vec, str, start + 1, i, j - 1) || 
                   fun(vec, str, start + 1, i - 1, j));
            
            vec[i][j] = str[start];
        }
        return ans;
    }
    
    bool exist(vector<vector<char>>& vec, string str) {
        int start = 0;
        for(int i = 0; i < vec.size(); i++)
        {
            for(int j = 0; j < vec[0].size(); j++)
            {
                if(str[start] == vec[i][j])
                {
                    if(fun(vec, str, start, i , j))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
