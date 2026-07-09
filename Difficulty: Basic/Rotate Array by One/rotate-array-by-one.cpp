class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        vector<int> f;
        f.push_back(arr[arr.size()-1]);
        for(int i=0;i<arr.size()-1;i++){
            f.push_back(arr[i]);
            
        }
        arr=f;
        // for(int i=0;i<f.size();i++){
        //     cout<<f[i]<<" ";
        // }
    }
};