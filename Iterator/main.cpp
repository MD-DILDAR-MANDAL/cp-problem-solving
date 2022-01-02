#include <bits/stdc++.h>
using namespace std;

int main(){
    array <int ,6> arr = {0,5,1,1,4,25};
    // array <int ,6> :: iterator i = arr.begin();
    auto i = arr.begin();
    cout << *i << "\n";
    i++;
    cout << *i << "\n";
    cout << arr.end() << "\n";
    //descending order
    sort(arr.begin(),arr.end(),greater <int> () );
    for(auto j : arr) cout << j << " ";
    sort(arr.begin(),arr.end());
    cout << "\n" << *lower_bound(arr.begin(),arr.end(),1);
    cout<< "\n" << *upper_bound(arr.begin(),arr.end(),8) << "\n";
    
    return 0;
}
