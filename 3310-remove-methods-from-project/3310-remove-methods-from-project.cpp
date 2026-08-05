class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n); 
        vector<int> inDegree(n, 0);
        vector<bool> sus(n, false);
        for(auto &edge : invocations) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            inDegree[v]++;
        }
        queue<int> que;
        que.push(k);
        sus[k] = true;
        while(!que.empty()) {
            int curr = que.front();
            que.pop();
            for(int &nn : adj[curr]) {
                inDegree[nn]--;
                if(!sus[nn]) {
                    que.push(nn);
                    sus[nn] = true;
                }
            }
        }
        vector<int> result;
        bool cannotRemove = false;
        
        for(int i = 0; i < n; i++) {
            if(sus[i] && inDegree[i] > 0) {
                cannotRemove = true;
                break;
            }
            if(!sus[i]) {
                result.push_back(i);
            }
        }
        if(cannotRemove) {
            vector<int> vec(n);
            for(int i = 0; i < n; i++) {
                vec[i] = i;
            }
            return vec;
        }
        return result;
    }
};