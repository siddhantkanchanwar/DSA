class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int start =0,end= arr.size()-1,mid;
        while(start<=end){
            mid = start+(end-start)/2;
            if(arr[mid]==k){
                return 1;
            }
            else if(k<arr[mid]){
                end=mid-1;
            }
            else{
                start= mid+1;
            }
         }
           return 0;
        
    }
};