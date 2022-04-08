/*#include <bits/stdc++.h>
using namespace std;

int main(){
vector <int> v;
int n ;
cin >> n;
for(int i = 0; i < n ; i++) {
    int x;
    cin >> x;
    v.push_back(x);
}

map <int,int> m;
    for(int i = 0;i < n;i ++)  m[v[i]]++;
    
        int flag = 1;
    for(auto it:m){
        if(it.second > n / 2){
            cout << it.first << endl;
            flag = 0;
            break;
        }
    }
        if(flag) cout << "No majority element" << endl;
return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0;i < n;i ++){
        int x;
        cin >> x;
        v.push_back(x);
        }
        
        map <int,int> m;
        for(int i = 0; i < n;i ++) m[v[i]] ++;
        for(auto it:m) if(it.second > 2) cout << it.first << "\n";
    return 0;
    }
*/
/*
 *MERGE INTERVAL*
 */
/* #include <bits/stdc++.h>
 using namespace std;
 
 int main(){
     vector <pair <int ,int>> vp;
     vector <pair <int , int>> nvp;
     for(int i = 0 ;i < 2;i ++) {
        int x,y;
        cin >> x >> y;
        vp.push_back({x, y});
        }
    sort(vp.begin(),vp.end());
    
    for(int i = 0;i < 1 ;i ++){
        if(vp[i].second >= vp[i+1].first){
            nvp.push_back({vp[i].first,vp[i+1].second});
        }
        else if(vp[i].second >= vp[i+1].first){
            int x,y;
            x = vp[i].first;
            y = vp[i].second;
            nvp.push_back({x,y});
        }

    }
    for(int i = 0; i < 1 ;i ++) cout << nvp[i].first << " , " << nvp[i].second << "\n";
    
     return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

struct interval{ 
    int start,end;
};

bool compareinterval(interval i1, interval i2){
        return (i1.start < i2.start);
}

void mergeintervals( interval arr[],int n){
    if(n <= 0) return;
    stack <interval> s;
    sort(arr, arr + n, compareinterval);
    s.push(arr[0]);
    
    for(int i = 1; i< n; i ++){
        interval top = s.top();
        if(top.end < arr[i].start) s.push(arr[i]);
        else 
            if(top.end < arr[i].end){
            top.end = arr[i].end;
            s.pop();
            s.push(top);
            }
        }
        cout << "\n the merged interval are:";
        while(!s.empty()){
            interval t = s.top();
            cout << "[" << t.start << "," << t.end << "]" ;
            s.pop();
        }
        return;
    }

int main(){
    interval arr[] = {{6,8},{1,9},{2,4},{4,7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeintervals(arr,n);
    return 0;
}