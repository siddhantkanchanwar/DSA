class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start =0 ,end = arr.size()-1, mid,ans;
        while(start<=end){
            mid= end+(start-end)/2;
            if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                // ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};