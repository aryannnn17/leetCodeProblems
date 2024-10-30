#include <bits/stdc++.h>
using namespace std;

vector<int> getIndex_0(vector<vector<int>> &edges, int K)
{
    vector<int> index;
    for (int i = 0; i < edges.size(); i++)
    {
        if (edges[i][0] == K)
        {
            index.push_back(i);
        }
    }
    if (index.empty())
    {
        index.push_back(-1);
    }
    return index;
}
vector<int> getIndex_1(vector<vector<int>> &edges, int K)
{
    vector<int> index;
    for (int i = 0; i < edges.size(); i++)
    {
        if (edges[i][1] == K)
        {
            index.push_back(i);
        }
    }
    if (index.empty())
    {
        index.push_back(-1);
    }
    return index;
}
vector<double> add_prob(vector<int> &index, vector<double> &succProb, double prob)
{
    vector<double> res;
    for (int i = 0; i < index.size(); i++)
    {
        res.push_back(prob + succProb[index[i]]);
        
    }
    return res;
}

class Solution
{
public:
    double maxProbability(int n, vector<vector<int>> &edges, vector<double> &succProb, int start_node, int end_node)
    {
        double prob = 0;
        double x;
        vector<int> index = getIndex_0(edges, start_node);
        vector<double> res = add_prob(index, succProb, prob);
        
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 2}};
    vector<double> succProb = {0.5, 0.5, 0.2};
    double ans = sol.maxProbability(6, edges, succProb, 0, 2);
    return 0;
}