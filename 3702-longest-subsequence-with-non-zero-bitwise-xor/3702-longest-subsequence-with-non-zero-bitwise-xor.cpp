class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int count = 0;
        int hehe =0;
        for(auto x:nums){
             hehe^=x;
        }
        if(hehe!=0){
            return nums.size();
        }
        for(auto x:nums){
            if(x!=0)
            return nums.size()-1;
        }
        return count;
    }
};

