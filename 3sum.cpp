class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<=2){
            return{};
        }
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size()-2;i++)
        {
            int curr1=nums[i];
            int str=i+1;
            int end=nums.size()-1;
            while(str<end){
                int mid=str+(end-str)/2;
                if(curr1+nums[str]+nums[end]==0)
                {
                res.push_back({curr1,nums[str],nums[end]});
                str++;end--;
                
                while(str<end && nums[str-1]==nums[str])
                str++;
                while(str<end && nums[str-1]==nums[end+1])
                end--;
            }
            else if(curr1+nums[str]+nums[end]<0){
                str++;
            }
            else{
                end--;
            }
        }
        while(i<nums.size()-1 && nums[i]==nums[i+1]){
        i++;
        }
        }
        return res;
        }
};
