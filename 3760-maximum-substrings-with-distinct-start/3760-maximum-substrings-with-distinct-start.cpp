class Solution {
public:
    int maxDistinct(string s) {
        int count =0;
        int freq[26]={0};
        for(auto x:s){
            if(x>='a' && x<='z'){
                if(freq[x-'a']<1){
                    count++;
                }
                freq[x-'a']=1;
            }
        }
        return count;

    }
};