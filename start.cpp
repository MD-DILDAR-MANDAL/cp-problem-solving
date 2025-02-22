#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void init_code()
{
#ifndef ONLINE_JUDGE
   freopen("error.txt", "w", stderr);
#endif
}

class Solution{

public:
    void solve(int *A,int * B,int n1, int n2){
        int minInd = 0;
        int minEle = INT_MAX;
        
        for(int i = 0 ;i < n2;i ++){
         if(minEle > B[i]){
           minEle = B[i];
           minInd = i;
         }
        }
               
       if(n2 == 1){
         for(int i = 0;i < n1; i++){
          if(A[i] > B[0]) A[i] = B[0];
          cout << A[i] <<" ";
         }
         cout << endl;
         return;
       }

       rotate(B,n2,minInd);
       
       int flag = 0;

       for(int i = 0;i < n1 - n2;i++){
        if(A[i] > B[0]){
            flag = 1;
            for(int j = i;j<=n1-n2;j++){
                A[j] = B[0];
            }
            for(int j = 1; j < n2;j++){
                A[n1 - n2 + j] = B[j];
            }
        }
        if(flag == 1)break;
       }

       if(flag ==  1){
        for(int i = 0;i<n1;i++){
            cout << A[i] << " ";
        }
        cout << endl;
       }
       else{
        int a2[n1];
        
        for(int i = 0;i < n1 - n2;i++){
           a2[i] = A[i]; 
        }
        
        for(int j = 0;j < n2;j++){
            a2[n1 - n2 + j] = B[j];
        }

        bool isAsmall = false;
        for(int i = 0;i < n1; i++){
            if(A[i] > a2[i]){
                isAsmall = false;
                break;
            }
            else if(A[i] < a2[i]){
                isAsmall = true;
                break;
            }
        }

        if(isAsmall){
            for(int i = 0;i < n1; i++){
                cout << A[i] << " ";
            }
        }
        else{
            for(int i = 0;i < n1; i++){
                cout << a2[i] << " ";
            }
        }
        cout << endl;
       }
   }
private:
    void reverse(int *B, int start, int end){
      while(start < end){
        int temp = B[start];
        B[start] = B[end];
        B[end] = temp;
        start ++;
        end --;
      }
    }
    
    void rotate(int *B , int n2,int k){
        k = k % n2;
        reverse(B, 0, k - 1);
        reverse(B, k, n2 - 1);
        reverse(B, 0, n2 - 1);
    }

};

int main(){
    init_code();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    while(t--){
        int n1,n2;
        cin >> n1 >> n2;
        int A[n1], B[n2];
        for(int i = 0;i < n1;i ++)cin >> A[i];
        for(int i = 0;i < n2;i ++)cin >> B[i];
        Solution ans;
        ans.solve(A,B,n1,n2);
    }
    return 0;
}  