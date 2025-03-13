//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


struct Item{
    int value;
    int weight;
};

class Solution {
  public:
  
    static bool cmp(pair<double,Item> a, pair<double,Item> b){
        return a.first > b.first;
    }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int len = val.size();
        vector< pair<double,Item> > mp;
        double ans = 0;
        int j = 0;
        
        for(int i = 0;i < len;i++){
            double ratio = (double)val[i] / wt[i];
            mp.push_back( { ratio, {val[i], wt[i]} } );
        }
        sort(mp.begin(), mp.end(), cmp);
        while(capacity > 0 && j < len){
            int _val = mp[j].second.value;
            int _wt = mp[j].second.weight;
            
            if(capacity >= _wt){
                ans += _val;
                capacity -= _wt;
            }
            else{
                ans += mp[j].first * capacity;
                break;
            }
            j++;
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends