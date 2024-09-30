//https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int mid=0;
        int i=0;
        int j=arr.size()-1;
        int fl=0;
        int cl=0;
        
        if(arr[0]>x){
            fl=-1;
        }
        if(arr[j]<x){
            cl=-1;    
        }
        
        while(i<=j){
            mid=(i+j)/2;
            
            if(arr[mid]<x){
                i=mid+1;
            }
            else if(arr[mid]>x){
                    j=mid-1;
                }
            else{
                break;
            }
        }
        
        if(fl!=-1 && cl!=-1){
            
            if(arr[mid]==x){
                fl=arr[mid];
                cl=fl;
            }
            else if(arr[mid]>x){
                fl=arr[mid-1];
                cl=arr[mid];
            }
            else{
                fl=arr[mid];
                cl=arr[mid+1];
            }
        }
        else if(fl==-1 && cl!=-1){
            cl=arr[mid];
        }
        else{
            fl=arr[mid];    
        }
        
        vector <int>ans={fl,cl};
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends