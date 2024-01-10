#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> stac;
    int x,n;
    cin >> n;
    int m = n-1;
    while(n--){              //97214378
            cin >> x;
            if(m == n) stac.push(x);
            if(!stac.empty()){
                if(x < stac.top()){
                    stac.pop();
                    stac.push(x);
                }else
                if(x > stac.top())stac.push(x);
            }
    }
        while(!stac.empty()){
        cout << stac.top();
        stac.pop();
        }
    return 0;
}

