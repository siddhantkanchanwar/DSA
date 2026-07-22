class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0,ans;
        while(n>0){
            int digit= n%10;
            pro*=digit;
            sum+=digit;
            n=n/10;
        }
        ans = pro-sum;
        return ans;
    }
};