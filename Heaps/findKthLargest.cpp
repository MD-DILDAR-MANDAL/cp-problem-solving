class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap(nums.begin(), nums.end());
        for(int i = 1; i < k; i++){
            heap.pop();
        }
        return heap.top();
    }
};

/*
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector <int> arr = nums;
        int len = nums.size();
        for(int i = len/ 2 - 1; i >= 0;i --){
            maxheapify(arr, i, len);
        }
        for(int i = len - 1; i >= len - k ;i--){
            swap(arr[0] , arr[i]);
            maxheapify(arr, 0, i);

        }
        return arr[len - k];
    }
private: 
    void maxheapify(vector <int> &arr, int i, int n){

        int left = i * 2 + 1;
        int right = i * 2 + 2;
        int maxInd = i;
        if(left < n && arr[ left ] > arr[i]) maxInd = left;
        if(right < n && arr[ right] > arr[maxInd]) maxInd = right;
        if(maxInd != i){
            swap(arr[i], arr[maxInd]);
            maxheapify(arr, maxInd, n);
        }
    }
};
*/