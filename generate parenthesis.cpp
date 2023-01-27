class Solution {
public:
    void find(string &temp,vector<string> &res,int open,int close){
        if(open>close || open<0 || close<0)
        return;
        if(open==0 && close==0)
        {
            res.push_back(temp);
            return;
        }
        temp.push_back('(');
        find(temp,res,open-1,close);
        temp.pop_back();
        temp.push_back(')');
        find(temp,res,open,close-1);
        temp.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open=n,close=n;
        string temp="";
        find(temp,res,open,close);
        return res;

        
    }
};
