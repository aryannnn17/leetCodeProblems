class Solution {
    map<int, vector<int>> adj;
    map<int, int> inDeg, outDeg;
    int getNode() {
        int startNode;
        for (auto& [node, Deg] : outDeg) {
            if (Deg - inDeg[node] == 1)
                return node;
            if (Deg > 0)
                startNode = node;
        }
        return startNode;
    }
    void getEulPath(int curr, vector<int>& eulPath) {
        while (outDeg[curr]) {
            outDeg[curr]--;
            int next_node = adj[curr][outDeg[curr]];
            getEulPath(next_node, eulPath);
        }
        eulPath.push_back(curr);
    }
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        for (auto& pair : pairs) {
            int start = pair[0], end = pair[1];
            adj[start].push_back(end);
            outDeg[start]++;
            inDeg[end]++;
        }
        int startNode = getNode();
        vector<int> eulPath;
        getEulPath(startNode, eulPath);
        vector<vector<int>> ans;
        for (int i = eulPath.size() - 1; i > 0; --i) {
            vector<int> path;
            path.push_back(eulPath[i]);
            path.push_back(eulPath[i - 1]);
            ans.push_back(path);
        }
        return ans;
    }
};
