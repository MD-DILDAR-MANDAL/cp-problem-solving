/*Program to select two highest heavy stone and collide them 
 * and add the remaining weight to the pile again. 
 * Do it until the last wieght left*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> q;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    int ans = 0;
    while(n > 1){
        n--;
        int a1 = q.top();
        q.pop();
        int a2 = q.top();
        q.pop();
        ans = a1 - a2; //since a1 will always be greter
        q.push(ans);
        }
        cout <<'\n'<< q.top();

    return 0;
}
