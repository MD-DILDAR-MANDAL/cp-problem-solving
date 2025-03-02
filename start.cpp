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

class Solution {

public:
   int solve(void){
       int n;
       int r;
       int p;
       cin >> n;
       cin >> r;
       cin >> p;
       return nCrLucasModP(n, r, p);
 }
private:
int nCrMod10(int n, int r){
        int mod2 = nCrLucasModP(n, r, 2);
        int mod5 = nCrLucasModP(n, r, 5);
        for(int i = 0;i < 10;i++){
            if(i % 2 == mod2 && i % 5 == mod5 ) return i;
        }
        return 0;
    }

    int nCrLucasModP(int n, int r, int p) {
        if (r > n)return 0;

        int result = 1;
        while (n > 0 || r > 0) {
            int ni = n % p;
            int ri = r % p;
            result = 1LL * result * nCrLucasModPDP(ni, ri, p) % p;
            n = n / p;
            r = r / p;
        }
        return result;
    }

    int nCrLucasModPDP(int n, int r, int p) {
        if (r > n)return 0;
        if (r == 0 || r == n)return 1;

        vector<int> fact(n + 1, 1);
        for (int i = 2; i <= n; i++)
            fact[i] = (1LL * i * fact[i - 1]) % p;

        return (1LL * fact[n] * factInv(fact[r], p - 2, p) % p * factInv(fact[n - r], p - 2, p) % p) % p;
    }

    int factInv(int r, int y, int p) {
        int res = 1;
        while (y > 0) {

            if (y % 2 != 0) res = (1LL * res * r) % p;
            y = y / 2;
            r = (1LL * r * r) % p;
        }
        return res;
    }

};

int main(){
    init_code();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    Solution ans;
    while(t--){
        cout << ans.solve() << endl;
    }
    return 0;
}  