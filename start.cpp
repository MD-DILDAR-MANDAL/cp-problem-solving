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

int main()
{
   init_code();
    
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      int A[n];
      
      for(int i = 0;i < n; i++){
       cin >>A[i];   
      }
      
      int l = 0;
      int r = 0;
      float avg = 0.0;
      int sum = 0;
      int flag = 0;
      
      while(r < n){
          sum = 0;
          for(int j = r; j >= l;j--){
           sum += A[r];
           avg = (float)sum/(float)(r-l+1);
          
           for(int i = 0;i < j;i++){
               if(A[i] == avg){
                      flag = 1;
                       break;
               }
           }
           for(int i = r + 1;i < n;i++){
               if(A[i] == avg){
                   flag = 1;
                      break;
                  }
           }
          }
          
          if(flag == 1){
              break;
          }
          r++;
      }
      if(flag == 1){
             cout << r - l + 1 << "\n";
             for(int i = l;i <= r;i++ ){
                 cout << A[i] <<" ";
             }
      }
      else cout << "-1";
     cout << endl; 
    }
   return 0;
}  