class Solution {
public:
    int mirrorDistance(int n) {
    int m=0;
    int hehe=n;
     while(n>0){
        int digit= n%10;
        n=n/10;
        m= m*10+digit;
     }   
     int ans=abs(hehe-m);
     return ans;   
    }
};