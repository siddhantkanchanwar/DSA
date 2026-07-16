class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> mp;
        while(n>0){
            mp[n%10]++;
            n/=10;}
        int score = 0;
       for(auto x: mp){
        score+= x.first*x.second;}
        return score;
    }
};