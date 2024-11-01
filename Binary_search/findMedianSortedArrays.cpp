//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size(); 
        if(len2<len1)return findMedianSortedArrays(nums2,nums1);
         
        int low = 0;
        int high = len1;
        int left = (len1+ len2 + 1)/2; // no of elements in left partition

        while(low <= high){ 
          int mid1 =  (low + high) / 2; //no of elements in left partition from arr 1
          int mid2 = left - mid1; //no of elements in left partition from arr 2 
          int l1 = INT_MIN;
          int l2 = INT_MIN;
          int r1 = INT_MAX;
          int r2 = INT_MAX;
          if(mid1 < len1) r1 = nums1[mid1];
          if(mid2 < len2) r2 = nums2[mid2];
          if(mid1-1 >= 0)l1 = nums1[mid1 - 1];
          if(mid2-1 >= 0)l2 = nums2[mid2 - 1];  

          if(max(l1,l2) <= min(r1,r2)){
            if((len1+len2) % 2 == 0) return double(double(max(l1,l2) + min(r1,r2))/2.0);
            else return max(l1,l2);
          }
          else if(l2>r1)low = mid1+1; 
          else high=mid1-1;
    }
    return -1;
  }
};