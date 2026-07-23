class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        int count =0;
        for(auto &c:s){
            c= tolower(c);
        }
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='0' && s[i]<='9') ){
                v.push_back(s[i]);
            }
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=v[v.size()-1-i]){
                count++;
                break;
            }
        }
        if(count>0){
            return false;
        }
        else{
            return true;
        }
    }
};