class Solution {
public:
    int find(vector<int>&nums,int target,int start,int end)
    {
        
        if(start>end)
        return -1;
        int mid=start+(end-start)/2;
        if(nums[mid]==target)
        return mid;
        if(nums[end]<nums[mid])//first section is sorted 
        {
            if(nums[start]<=target && nums[mid]>=target)
            {
                return find(nums,target,start,mid-1);
            }
            else 
            return find(nums,target,mid+1,end);
        }
        else 
        {
            if(nums[mid]<=target && nums[end]>=target)
            {
                return find(nums,target,mid+1,end);
            }
            else 
            {
            return find(nums,target,start,mid-1);
            }
        }

    }
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        return find(nums,target,start,end);
        }
};
