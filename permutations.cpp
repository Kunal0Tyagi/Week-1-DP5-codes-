class Solution {
public:  
        vector<int> sliceVector(vector<int>& nums, int ind) {
        vector<int> slicedVector;
        for(int i = 0; i < nums.size(); i++) 
        {
            if (i == ind) continue;
            slicedVector.push_back(nums[i]);
        }
        return slicedVector;
        }
        vector<vector<int>> findPerm(vector<int>& nums) {
        // Base case
        if (nums.size() == 1) {
            return {nums};
        }         // Recursive step
        vector<vector<int>> allPerms;
        for(int i = 0; i < nums.size(); i++) {
            vector<int> sliced = sliceVector(nums, i);
            vector<vector<int>> currPerms = findPerm(sliced);  
           for(int j = 0; j < currPerms.size(); j++) {
                currPerms[j].push_back(nums[i]);
            }
             for(int j = 0; j < currPerms.size(); j++) {
                allPerms.push_back(currPerms[j]);
            }
        }
         return allPerms;
     }
     vector<vector<int>> permute(vector<int>& nums) {
        return findPerm(nums);
    }
};
