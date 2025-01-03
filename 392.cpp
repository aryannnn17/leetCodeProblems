class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if (s.length() == 0)
            return true;

        for (int i = 0; i < t.length(); i++) {
            if (s.at(j) == t.at(i))
                j++;
            if (j >= s.length())
                return true;
        }
        return false;
    }
};
