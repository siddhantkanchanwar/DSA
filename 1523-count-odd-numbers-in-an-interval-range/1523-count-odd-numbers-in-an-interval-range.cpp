class Solution {
public:
    long long countOdds(long long low, long long high) {
        long long count=0;
        for(long long i=low;i<=high;i++){
            if(i%2!=0){
                count++;
            }
        }
        return count;
    }
};