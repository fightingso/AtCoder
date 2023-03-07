#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  vector<ll> a_mod(46), b_mod(46), c_mod(46);
  rep(i, n) {
    a_mod[a[i] % 46]++;
    b_mod[b[i] % 46]++;
    c_mod[c[i] % 46]++;
  }
  ll ans = 0;
  rep(i, 46) {
    rep(j, 46) {
      rep(k, 46) {
        if ((i + j + k) % 46 == 0) {
          ans += a_mod[i] * b_mod[j] * c_mod[k];
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
