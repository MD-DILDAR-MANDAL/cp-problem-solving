//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int len = s.length();
        unordered_set <char> ch; 
        int l = 0;

        for(int r = 0;r < len;r ++){
            while(ch.find(s[r]) != ch.end()){
                ch.erase(s[l]);       
                l++;
            }
            ch.insert(s[r]);
            maxLen = max(maxLen,r - l + 1);
        }

        return maxLen;
    }
};

//complexity O(2n)
//we can optimise it by taking a unordered_map and store the char with their last index 

/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxLen = 0;
        int len = s.length();
        vector <int> freq(256,-1); 

        for(int r = 0;r < len;r++){
            if(freq[s[r]] != -1){
                l = max(freq[s[r]] + 1,l);
                //we can also use if (freq[s[r]] < l) then l remain same otherwise update
            }
            freq[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }    
        return maxLen;
    }
};

*/