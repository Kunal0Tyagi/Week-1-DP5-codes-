class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n),rmax(n);
        lmax[0]=height[0];
        rmax[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            lmax[i]=max(height[i],lmax[i-1]);
            rmax[n-i-1]=max(height[n-i-1],rmax[n-i]);
        }
        
        int amt=0;
        for(int i=1;i<n-1;i++)
        {
            amt+=min(lmax[i],rmax[i])-height[i];
        }
        return amt;
    }
};
