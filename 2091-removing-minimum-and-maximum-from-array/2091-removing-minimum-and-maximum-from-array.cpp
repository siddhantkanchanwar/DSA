class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        int n = nums.size();
        int ind=0;
        int ind2=0;
        int mx = *max_element(nums.begin(),nums.end());
        if(nums.size()==1){
            return 1;
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]==mn){
                    ind =i;
                }
                else{
                    if(nums[i]==mx){
                        ind2 =i;
                    }
                }
            }
            return min({max(ind,ind2)+1,n-min(ind,ind2),min(ind,ind2)+1+n-max(ind,ind2)});
            
        }
    }
};