class Solution {
public:
    vector<string> dialpad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void find(string digitspr,string &temp,vector<string> &res,int str,int end){
        if(str>end)
        {
            res.push_back(temp);
            return;
        }
        char digitp=digitspr[str];
        string possible=dialpad[digitp-'0'];
        for(int i=0;i<possible.size();i++)
        {
        temp.push_back(possible[i]);
        find(digitspr,temp,res,str+1,end);
        temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int st=0;
        int end=digits.size()-1;
        vector<string> res;
        string temp="";
        if(digits.size()==0)
        return res;
        find(digits,temp,res,st,end);
        return res;        
    }
};
