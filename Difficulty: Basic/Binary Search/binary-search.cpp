class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int start =0;int end = arr.size()-1;
        int mid;
        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]==k){
                return 1;
            }
            else if(arr[mid]<k){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return 0;
    }
};