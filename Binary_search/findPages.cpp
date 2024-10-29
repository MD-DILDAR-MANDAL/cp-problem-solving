//we can get the number of pages according to no of students
//we can utilize the range of the no of pages
int countStudent(vector<int> &arr, int n, int pages){
      int pageCnt = 0;
      int cnt = 1;
      for (int j = 0; j < n; j++) {
        if(pageCnt + arr[j] <= pages)pageCnt += arr[j];
        else{
          pageCnt = arr[j];
          cnt++;
        }
      }
  return cnt;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n)return -1;
    int low = *max_element(arr.begin(),arr.end());
    int high = accumulate(arr.begin(),arr.end(),0);
    
    while(low <= high){
      int mid = (low + high)/ 2;
      int cntS = countStudent(arr, n, mid);
      if (cntS > m)low = mid + 1;
      else high = mid-1;
    }
    return low;
}