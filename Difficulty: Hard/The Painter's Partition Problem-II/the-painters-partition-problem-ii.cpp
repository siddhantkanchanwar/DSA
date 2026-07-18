class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        long long start = *max_element(arr.begin(),arr.end()), end=0,mid,ans;
        for(int i=0;i<arr.size();i++){
            end += arr[i];
        }
        while(start<=end){
            mid = start+(end-start)/2;
            long long painters = 0,count=1;
            for(int i=0;i<arr.size();i++){
                painters+=arr[i];
                if(painters>mid){
                    count++;
                    painters = arr[i];
                }
            }
            if(count<=k){
                ans =mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        return ans;
    }
};