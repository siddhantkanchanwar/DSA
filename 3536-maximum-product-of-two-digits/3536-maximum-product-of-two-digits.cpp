class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        while(n>0){
            int digit = n%10;
            v.push_back(digit);
            n=n/10;
        }
        int m= v.size();
        sort(v.begin(),v.end());
        int ans = v[m-1]*v[m-2];
        return ans;
    }
};