class Solution {
public:
    int mySqrt(int x) {
        long long start=1,end=x,ans;
        long long mid;
        if(x==0){
            return 0;
        }
        while(start<=end){
            mid = start + (end-start)/2;
            if(mid*mid==x){
                return mid;
                break;
            }
            else if(mid*mid<x){
                ans = mid;
                start = mid+1;
            }
            else{
                // ans = mid;
                end = mid-1;
            }
        }
        return ans;
   
    }
};