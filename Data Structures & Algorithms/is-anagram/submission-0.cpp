class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int>freq;
        for(int ch : s){
            freq[ch]++;
        }
        for(int ch : t){
            freq[ch]--;

            if(freq[ch]< 0){
            return false;
        }
        }
        
        return true;
    }
};
