class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        set<int> s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        if(s.size()==1){
            return -1;
        }
        
        return *prev(s.end(),2);
    }
};