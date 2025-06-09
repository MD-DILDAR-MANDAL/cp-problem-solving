//Find the Index of the First Occurrence in a String
//kmp algorithm
class Solution {
public:
    void create_lps(vector<int> &lps, string &pattern){
        int i = 1;
	    int len = 0;
	    int m = pattern.length();
	    lps[0] = 0;

	    while(i < m){
		    if(pattern[len] == pattern[i]){
			    len ++;
			    lps[i] = len;
			    i++;
		    }
		    else{
			    if(len == 0){
				    lps[i] = 0;
				    i++;
			    }
			    else{
				    len = lps[len - 1];
			    }
		    }
	    }
    }

    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        int first = 0;
        int second = 0;
        int ans = -1;
        vector<int>lps(len2);

        create_lps(lps,needle);
        while(first < len1){
            if(haystack[first] == needle[second]){
                first ++;
                second ++;
                if(second == len2){
                    ans = first - second;
                    second = lps[second - 1];
                    break;
                }
            }
            else if(haystack[first] != needle[second]){
                if(second != 0){
                    second = lps[second - 1];
                }
                else first++;
            }
        }
        return ans;
    }
};