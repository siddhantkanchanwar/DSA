class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int mx = a[0], mn = a[0];

        for (int i = 0; i < a.size(); i++) {
            mx = max(mx, a[i]);
            mn = *min_element(a.begin() + i, a.end());

            if (mx - mn <= k)
                return i;
        }

        return -1;
    

    }
};