class Solution {
public:
    int minimumPushes(string word) {
        vector<int> v(26,0);
        int count=0;
        for(char ch : word){
            v[ch-'a']++;
            if(v[ch-'a']==1){
                count++;
            }
        }
        if(count<=8){
            return word.length();
        }
        int ans=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            ans+=v[i]*((i/8)+1);
        }   
        return ans;
    }
};