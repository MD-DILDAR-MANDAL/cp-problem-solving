//rabin karp
class Solution {
public:
    int BASE = 256;
    int PRIME = 101;

    int hashCalculate(string str, int start, int end){
	    int p = 0;
	    while(start <= end){
		    p = ( BASE * p + int(str[start]) ) % PRIME ;
		    start++;
	    }
	    return p;
    }

    bool checkPattern(string &str, string &pattern, int start){
	    for(int j = 0;j < pattern.length();j++){
		    if(str[start+j] != pattern[j]){
			    return false;
		    }
	    }
	    return true;
    }

    bool searchPattern(string str, string pattern){
        int strLen = str.length();
	    int patternLen = pattern.length();
	    int patternHash = hashCalculate(pattern, 0, patternLen - 1);
	    int t = 0;
	    int highOrder = 1;

	    for(int i = 0; i < patternLen - 1;i++){
		    highOrder = (highOrder*BASE) % PRIME;
	    }

	    for(int i = 0;i <= (strLen - patternLen);i++){
		    if(i == 0){
			    t = hashCalculate(str, 0, patternLen - 1);
		    }
		    else{
			    t = ((t - (int(str[i - 1]) * highOrder) % PRIME)
                 * BASE + int(str[i + patternLen - 1])) % PRIME; 
			    if(t < 0){
				    t += PRIME;
			    }
		    }

		    if(t == patternHash && 
            checkPattern(str, pattern, i)){
			    return true;
		    }
	    }
        return false;
    }

    int repeatedStringMatch(string a, string b) {
        int aLen = a.length();
        int bLen = b.length();
        int times = 1;
        if(aLen < bLen){
            times = bLen/aLen;
            if(bLen % aLen != 0)times += 1;
        }
        string longString = "";
        for(int i = 0; i<times;i++){
            longString += a;
        }
        for(int i = 0; i<2;i++){   
            if(searchPattern(longString, b)){
                return times;
            }
            times += 1;
            longString += a;
        }
        return -1;
    }
};