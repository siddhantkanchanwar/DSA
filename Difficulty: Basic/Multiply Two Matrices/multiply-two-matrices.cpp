class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a,
                                         vector<vector<int>> &b) {
        // code here
        vector<vector<int>> res(a.size(),vector<int>(a.size(),0));
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                for(int k=0;k<a.size();k++){
                res[i][j] += a[i][k]*b[k][j];}
            }
        }
        return res;
    }
};