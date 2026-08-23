class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int j=0;j<mat.size();j++){
            for(int i=0, k=mat.size()-1;i<k;i++,k--){
                swap(mat[i][j],mat[k][j]);
            }
        }
    }
};
