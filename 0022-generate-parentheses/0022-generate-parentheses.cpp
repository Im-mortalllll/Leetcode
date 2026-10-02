class Solution {
    vector <string> pths;
private:
    void fn(string curr, int openb, int closeb, int n){
        if(curr.size()==2*n){
            pths.push_back(curr);
            return;
        }
        if(openb<n){
            fn(curr+"(",openb+1,closeb,n);
        }
        if(closeb<openb){
            fn(curr+")",openb,closeb+1,n);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        fn("",0,0,n);
        return pths;
    }
};