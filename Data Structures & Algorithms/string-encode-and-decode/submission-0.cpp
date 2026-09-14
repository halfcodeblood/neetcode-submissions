class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.size());
            encoded += "#";
            encoded += s;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            j++;  // move after '#'

            string word = s.substr(j, len);

            ans.push_back(word);

            i = j + len;
        }

        return ans;
    }
};