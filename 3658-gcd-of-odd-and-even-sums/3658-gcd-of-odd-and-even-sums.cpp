class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumeven=0,sumodd=0;
        for(int i=0;i<=2*n;i++){
            if(i%2==0){
                sumeven= sumeven+i;
            }
            else{
                sumodd= sumodd+i;
            }
        }
        return gcd(sumeven,sumodd);
    }
};