class Solution {
public:
    int find (vector<int>&nums,int start,int end)
    {
    

        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
            return mid;
            else if(nums[mid]<nums[mid-1])
            return find(nums,start,mid);
            else if(nums[mid]<nums[mid+1])
            return find(nums,mid,end);         

        }
        return -1;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size()-1;
        return find(arr,0,n);
        
    }
};
