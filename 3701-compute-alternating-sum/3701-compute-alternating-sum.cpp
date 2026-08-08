class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sumodd=0,sumeven=0;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                sumodd+=nums[i];
            }
            else{
                sumeven+=nums[i];
            }
        }
        return sumeven-sumodd;
    }
};