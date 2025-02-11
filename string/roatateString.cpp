class Solution {
public:
    bool rotateString(string s, string goal) {
        string str = s+s;
        // abc+abc = abcabc this contains all possible rotation strings
        //use find()
        if(s.size() == goal.size() && str.find(goal) != string::npos) return true;
        return false;
    }
};