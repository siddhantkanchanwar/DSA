class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0],mid,start=0,end=nums.size()-1;
        while(start<=end){
            mid = start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start = mid+1;
            }
            else{
                end = mid-1;
                ans = nums[mid];
            }
        }
        return ans;
    }
};