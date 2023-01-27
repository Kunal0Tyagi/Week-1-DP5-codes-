class Solution {
public:
    int firstoccur(vector<int> &nums,int target,int start,int last)
    {
        if(start>last)
        return -1;
        else if(start==last)
        return(nums[start]==target?start:-1);
        else 
        {
            int mid=start+(last-start)/2;
            if(nums[mid]<target)
            return firstoccur(nums,target,mid+1,last);
            else if(nums[mid]>target)
            return firstoccur(nums,target,start,mid-1);
            else{
                if((mid==0)||(mid>=1 && nums[mid-1]<nums[mid]))
                return mid;
                else 
                return firstoccur(nums,target,start,mid-1);
            }
            
        }
    }
    int lastoccur(vector<int> &nums,int target,int start,int last)
    {
        if(start>last)
        return -1;
        else if(start==last)
        return(nums[start]==target?start:-1);
        else 
        {
            int mid=start+(last-start)/2;
            if(nums[mid]<target)
            return lastoccur(nums,target,mid+1,last);
            else if(nums[mid]>target)
            return lastoccur(nums,target,start,mid-1);
            else{
                if((mid==nums.size()-1)||(mid+1<=nums.size()-1 && nums[mid+1]>nums[mid]))
                return mid;
                else 
                return lastoccur(nums,target,mid+1,last);
            }
            
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int last=nums.size()-1;
        int lastoccu;
        int firstoccu=firstoccur(nums,target,0,last);
        if(firstoccu==-1)
        return{-1,-1};
        else 
        lastoccu=lastoccur(nums,target,firstoccu,last);
        return{firstoccu,lastoccu};

    }
};
