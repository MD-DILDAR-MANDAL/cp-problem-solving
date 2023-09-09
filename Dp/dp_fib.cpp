#include<iostream>
using namespace std;

int F[100]={-1};

int fib(int n){
        if(n<=1)return n;
        for(int i = 2;i <=n;i++){
            F[i] = F[i-1] + F[i-2];
        }
        return F[n];
}

int main(){
    F[0] = 0;
    F[1] = 1;
    int n;
    cout << "enter n" << "\n";
    cin >> n;
    for(int j = 0;j<n;j++) {
        cout << "  " << fib(j);
    }
    return 0;

}
