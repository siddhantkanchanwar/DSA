// class Solution {
// public:
//     vector<int> resultArray(vector<int>& nums) {
//         vector<int> x;
//         vector<int> y;
//         for(int i=0;i<1;i++){
//             x.push_back(nums[i]);
//         }
//         for(int i=1;i<2;i++){
//             y.push_back(nums[i]);
//         }
//         for(int i=0;i<nums.size()-1;i++){
//             if(x[i]>y[i]){
//                 x.push_back(nums[i+1]);
//             }
//             else{
//                 y.push_back(nums[i+1]);
//             }
//         }
//         vector<int> v;
//         for(auto c:x){
//             v.push_back(c);
//         }
//         for(auto he:y){
//             v.push_back(he);
//         }
//         return v;
//     }
// };


class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> x, y;
        x.push_back(nums[0]);
        y.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            if (x.back() > y.back()) {
                x.push_back(nums[i]);
            } else {
                y.push_back(nums[i]);
            }
        }

        vector<int> v;
        v.insert(v.end(), x.begin(), x.end());
        v.insert(v.end(), y.begin(), y.end());
        return v;
    }
};
