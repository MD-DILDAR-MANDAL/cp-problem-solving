class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] == 10 || bills[0] == 20) return false;

        int a = 0, b = 0, c = 0;
        int size = bills.size();
        int i = 0;
        while(i < size){
            int val = bills[i];
            if(val == 5) a++;
            else if(val == 10){
                if(a == 0) return false;
                a--;
                b++;
            }
            else if(val == 20){
                if(a == 0 ) return false;
                if(b == 0 && a != 0){
                     if(a < 3) return false;
                     a -= 3; 
                }
                else{
                    a--;
                    b--;
                }
                c++;
            }
            i++;
        }
        return true;
    }
};