// class Solution {
//   public:
//     vector<int> snakePattern(vector<vector<int> > matrix) {
//         // code here
//         vector<int> ans;
//         for(int i=0;i<matrix.size();i++){
//             if(i%2!=0){
//                 reverse(matrix[i].begin(),matrix[i].end());
//                 ans.push_back(matrix[i][j]);
//             }
//             for(int j=0;j<matrix.size();j++){
//                 ans.push_back(matrix[i][j]);
//             }
//             return ans;
//     }}
// };


class Solution {
public:
    vector<int> snakePattern(vector<vector<int>> matrix) {

        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++) {

            if (i % 2 == 0) {
                for (int j = 0; j < matrix[i].size(); j++) {
                    ans.push_back(matrix[i][j]);
                }
            }
            else {
                for (int j = matrix[i].size() - 1; j >= 0; j--) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};