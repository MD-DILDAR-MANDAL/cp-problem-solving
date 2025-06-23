class Solution {
public:
    void create_z(vector<int>& arrZ, string& text) {
        int len = text.length();
        arrZ[0] = -1;
        int l = 0;
        int r = 1;
        int cnt = 0;
        while (r < len) {
            if (text[l] == text[r]) {
                cnt++;
                l++;
            } else {
                if (cnt != 0) {
                    r = r - cnt;
                    arrZ[r] = cnt;
                    cnt = 0;
                    l = 0;
                }
            }
            r++;
        }

        if (r == len && cnt != 0) {
            r = r - cnt;
            arrZ[r] = cnt;
        }
    }

    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        string text = needle + "$" + haystack;
        int len3 = text.length();

        vector<int> arrZ(len3, 0);
        create_z(arrZ, text);
        for(int i = 0; i< len3;i++){
            if(arrZ[i] == len2){
                return i - len2 - 1;
            }
        }      
        return -1;
    }
};