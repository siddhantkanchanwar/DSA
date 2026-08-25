// class Solution {
// public:
//     int missingMultiple(vector<int>& nums, int k) {
//         int ans =1;
//         for(int i=1;i<INT_MAX;i++){
//             if(find(nums, nums + 5, k*i) != nums + 5){
//                 continue;
//             }
//             else{
//                 ans = k*i;
//                 break;
//             }
//         }
//         return ans;
//     }
// };




class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = 1;

        for(int i = 1; i < INT_MAX; i++) {
            if(find(nums.begin(), nums.end(), k*i) != nums.end()) {
                continue;
            }
            else {
                ans = k*i;
                break;
            }
        }

        return ans;
    }
};