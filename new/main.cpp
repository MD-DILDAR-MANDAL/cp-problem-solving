#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,val,rev,siz;
    cin >> n;
    priority_queue <int> qu,uq;
    while(n--){
         cin >> val;
        switch(val){
            case 1:
                cin >> rev;
                qu.push(rev);
                uq = qu;
                break;
            case 2:
                siz = uq.size() / 3;
                if(siz == 0) {
                    cout << "No reviews yet" << "\n";
                }
                else{
                    vector <int> v;
                   for(int i = 0;i < siz;i ++){
                            v.push_back(uq.top());
                            uq.pop();
                    }
                    cout << v[siz-1] <<'\n';
                }
                break;
        }
    }
return 0;
}
