class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a = *max_element(arr.begin(),arr.end());
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==a){
                ans =i;
            }
        }
        return ans;
    }
};