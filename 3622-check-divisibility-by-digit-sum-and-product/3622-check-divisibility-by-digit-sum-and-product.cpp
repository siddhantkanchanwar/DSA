class Solution {
public:
    bool checkDivisibility(int n) {
        int sum =0;
        int product = 1;
        int temp = n;
        while(n>0){
            int digi = n%10;
            sum+=digi;
            product*=digi;
            n=n/10;
        }
        if(temp%(product+sum)==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};






