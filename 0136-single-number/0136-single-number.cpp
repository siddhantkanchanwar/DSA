class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto y:m){
            if(y.second==1){
                return y.first;
            }
        }
        return -1;
    }
};