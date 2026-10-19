class Solution {
public:
    int mySqrt(int x) {
        long long start=0,end=x;
        int ans =0;
        while(start<=end){
            long long mid = start + (end-start)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return end;
        
    }
};