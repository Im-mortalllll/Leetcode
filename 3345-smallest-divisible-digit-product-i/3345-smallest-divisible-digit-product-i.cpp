class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int k=i;
            int prod=1;
            while(k!=0){
                prod*=(k%10);
                k/=10;
            }
            if(prod%t==0){
                return i;
            }
        }
        return -1;
    }
};