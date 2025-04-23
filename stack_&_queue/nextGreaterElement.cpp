class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int size1 = nums1.size();
        int size2 = nums2.size();
        stack<int>st;
        vector<int >ans;
        map<int,int>mp;
        vector<int>finalAns;

        for(int i = 0;i < size2;i++){
            mp[nums2[i]] = i;
        }

        for(int i = size2 - 1 ;i >= 0;i --){
            while(!st.empty() && nums2[i] > st.top()){
                st.pop();
            }

            if(st.empty()){
                ans.push_back(-1);
                st.push(nums2[i]);
            }
            else if(st.top() > nums2[i]){
                ans.push_back(st.top());
                st.push(nums2[i]);
            }
        }
        for(int i = 0; i < size1;i++){
            int j = mp[nums1[i]];
            finalAns.push_back(ans[size2 - 1 - j]);
        }
        return finalAns;
    }
};