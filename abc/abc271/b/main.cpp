#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()


int main() {
  ll n, q;
  cin >> n >> q;
  vector<vector<ll>> a(n);
  rep(i, n) {
    ll l;
    cin >> l;
    rep(j, l) {
      ll x;
      cin >> x;
      a[i].push_back(x);
    }
  }
  rep(i, q) {
    ll x, y;
    cin >> x >> y;
    cout << a[x-1][y-1] << endl;
  }
  return 0;
}
