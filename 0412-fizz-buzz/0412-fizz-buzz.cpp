class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fi;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                fi.push_back("FizzBuzz");
            }
            else if(i%3==0){
                fi.push_back("Fizz");
            }
            else if(i%5==0){
                fi.push_back("Buzz");
            }
            else{
                fi.push_back(to_string(i));
            }
        }
        return fi;
    }
};