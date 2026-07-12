class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ccount=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ccount++;
                ans = max(ans,ccount);
            }
            else{
                ccount =0;
            }
        }
        return ans;
    }
};