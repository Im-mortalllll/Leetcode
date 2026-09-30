class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> cnt;
        int depth = 0;
        for (int i = 0; i< seq.length(); i++){
            char c = seq[i];
            if (c == '('){
                cnt.push_back((++depth) % 2);
            }
            else if (c == ')'){
                cnt.push_back((depth--) % 2);
            }
        }
        return cnt;
    }
};