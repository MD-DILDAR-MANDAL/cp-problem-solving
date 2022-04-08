#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 10000;

bool ok(ll n) {
  return n >= 1 and n <= N;
}

void solve() {
  ll a[4];
  for (auto &ai: a) {
    cin >> ai;
  }
  sort(a, a + 4);
  do {
    if ((a[0] + a[1]) % 2 == 0) {
      ll x = (a[0] + a[1]) / 2;
      ll y = (a[0] - a[1]) / 2;
      if (ok(x) and ok(y) and x * y == a[2] and x / y == a[3]) {
        cout << x << ' ' << y << '\n';
        return ;
      }
    }
  } while(next_permutation(a, a + 4));

  cout << "-1 -1\n";
}

int main(){
  ios::sync_with_stdio(0), cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
}

