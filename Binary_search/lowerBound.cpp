//https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?track=DSASP-Searching&amp%253BbatchId=154&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-a-sorted-array

    int findFloor(vector<long long> &v, long long n, long long x) {

        int i=0;
        int j=n-1;
        int ind=n;
        if(v[0]>x)return -1;
        
        while(i<=j){
            int mid=(i+j)/2;
            
            if(v[mid]==x)return mid;
            else if(v[mid] >x){
                ind=mid;
                j=mid-1;
            }
            else{
                i = mid + 1;
            }
        }
        return ind-1;
    }
};