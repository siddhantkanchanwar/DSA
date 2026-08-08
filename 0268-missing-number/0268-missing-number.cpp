class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
        bool flag = false;
            for(int ele:nums){
                if(ele==i){
                    flag = true;
                    break;
                }
            }
                if(flag == false){
                    return i;
                }
        }
        return 0;
    }
};