class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n=stoneValue.size();
        vector<int> d(n+1,0);
        for(int i=n-1;i>=0;i--){
            int val=0;
            d[i]=INT_MIN;
            for(int k=i; k<i+3 && k<n; k++){
                val+=stoneValue[k];
                d[i]=max(d[i],val-d[k+1]);
            }
        }  
        if(d[0]>0){
            return "Alice";
        }
        else if (d[0]<0){
            return "Bob";
        }
        return "Tie";
    }
};