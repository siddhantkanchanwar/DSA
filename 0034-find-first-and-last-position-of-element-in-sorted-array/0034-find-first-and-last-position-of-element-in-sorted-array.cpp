class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> ans(2,-1);
     int start =0,end=nums.size()-1;
    //  int ans = -1;
     while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]>target){
            end = mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            ans[0] = mid;
            end=mid-1;
        }
     
    }
    start=0;
    end=nums.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(nums[mid]>target){
            end = mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            ans[1] = mid;
            start=mid+1;
        }
     
    }
    return ans;   
    }
};