#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int minExtraChar(string s, vector<string>& dictionary) {
    int n = s.length();
    unordered_set<string> dict(dictionary.begin(), dictionary.end());
    
    // dp[i] represents the minimum number of extra characters from index i to the end
    vector<int> dp(n + 1, 0);
    
    // Start filling dp from the end of the string
    for (int i = n - 1; i >= 0; --i) {
        // Initially, assume we can't match anything starting at i
        dp[i] = dp[i + 1] + 1;
        
        // Try to match every substring starting at i
        for (int j = i; j < n; ++j) {
            string sub = s.substr(i, j - i + 1);
            if (dict.find(sub) != dict.end()) {
                dp[i] = min(dp[i], dp[j + 1]);
            }
        }
    }
    
    return dp[0];
}

int main() {
    string s1 = "leetscode";
    vector<string> dictionary1 = {"leet", "code", "leetcode"};
    cout << "Minimum extra characters (Example 1): " << minExtraChar(s1, dictionary1) << endl;

    string s2 = "sayhelloworld";
    vector<string> dictionary2 = {"hello", "world"};
    cout << "Minimum extra characters (Example 2): " << minExtraChar(s2, dictionary2) << endl;

    return 0;
}
