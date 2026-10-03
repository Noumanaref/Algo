class Solution {
public:
    bool isAnagram(string s, string t) {

        // solution_01:

        // if (s.size() != t.size())
        // {
        //     return false;
        // }

        // unordered_map<char,int> hash1;
        // unordered_map<char,int> hash2;

        // for (int i=0; i<t.size(); i++)
        // {
        //     hash1[s[i]]++;
        //     hash2[t[i]]++;
        // }

        // if (hash1 == hash2)
        // {
        //     return true;
        // }
        // return false;


        // solution_02 : Memory efficent

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};