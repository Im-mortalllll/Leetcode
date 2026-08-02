class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size()-1;
        int n=b.size()-1;
        int k=max(a.size(),b.size());
        int carry=0;
        string ans="";
        while(m>=0 || n>=0 || carry){
            int sum=0;
            if(m>=0){
                sum+=a[m]-'0';
                m--;
            }
            if (n>=0){
                sum+=b[n]-'0';
                n--;
            }
            sum+=carry;
            if (sum==0) {
                ans+="0";
                carry=0;
            }
            else if (sum==1) {
                ans+="1";
                carry=0;
            }
            else if (sum==2) {
                ans+="0";
                carry = 1;
            }
            else{   // sum==3
                ans+="1";
                carry=1;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};