class Solution {
public:
    int arrangeCoins(int n) {
        int temp = n;
        int count =0;
        int i=1;
        if(n==1){
            return 1;
        }
        while(temp>=0){
            temp-=i;
            count++;
            i++;
        }
        return count-1;
    }
};