class Solution {
  public:
    int cubeRoot(int n) {
        // code here
       long long start =1, end =n, ans,mid;
       if(n==0){
           return 0;
       }
       while(start<=end){
           mid = start+ (end-start)/2;
           if(mid*mid*mid==n){
               return mid;
               break;
           }
           else if(mid*mid*mid<n){
               ans = mid;
               start = mid+1;
           }
           else{
               end = mid-1;
           }
       }
       return ans;
    }
};