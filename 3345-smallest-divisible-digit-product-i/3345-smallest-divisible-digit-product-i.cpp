class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n>0){
        int pro=1;
        int temp =n;
        while(temp>0){
            int digit = temp%10;
             pro = pro*digit;
            temp= temp/10;}
            if(pro%t==0){
                return n;
                break;
            }
            else{
                n++;
            }
        }
        return 0;
    }
};