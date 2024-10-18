//https://leetcode.com/problems/kth-missing-positive-number/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len = arr.size()-1;
        int i = 0;
        int j = len;
        int mid = 0;
        int miss = 0;
        while(i <= j){
            mid = i+ (j - i) / 2;
            miss = arr[mid] - mid - 1;
            
            if( miss >= k) j = mid - 1;
            else i = mid + 1;
        }

        // high denotes the less value of the two array elements where the answer lies
        // simplify arr[j] + (k-(arr[j]-j-1))
        return k + j + 1;
    }
};