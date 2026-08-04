class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        for(int i=a;i<=b;i++){
        auto it=find(nums.begin(),nums.end(),i);
            if(it==nums.end()){
                ans.push_back(i);
            }
        }
        return ans;
          
    }
};