class Solution {
public:
    int shipWithinDays(vector<int>& arr, int k) {
        if(arr.size()<k){
            return -1;
        }
        long long start = *max_element(arr.begin(),arr.end()),end,mid,ans;
        for(long long i=0;i<arr.size();i++){
            end += arr[i];
        }
        while(start<=end){
            mid = start+(end-start)/2;
            long long pages = 0, count=1;
            for(long long i=0;i<arr.size();i++){
                pages+=arr[i];
                if(pages>mid){
                   count++;
                   pages = arr[i];
                }
            }
            if(count<=k){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};