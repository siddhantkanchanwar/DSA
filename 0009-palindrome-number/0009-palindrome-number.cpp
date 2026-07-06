class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0,rem;
        int temp=x;
        if(x<0){
            return 0;
        }
        else if(x%10==0 && x!=0){
            return 0;
        }
        
         while(temp!=0){
            rem = temp%10;
            if(ans>(INT_MAX/10)){
                return 0;
            }
            ans = ans*10+rem;
            temp/=10;}
            if(ans==x){
                return 1;
            }
        return 0;
        
    }
};