class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        // int ans = x-(2*t);
        int ans = num+(2*t);
        return ans;
    }
};