#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  vector<ll> c(n + m);
  rep(i, n) c[i] = a[i];
  rep(i, m) c[i + n] = b[i];
  sort(all(c));
  rep(i, n) {
    auto itr = lower_bound(all(c), a[i]);
    cout << itr - c.begin() + 1 << ' ';
  }
  cout << endl;
  rep(i, m) {
    auto itr = lower_bound(all(c), b[i]);
    cout << itr - c.begin() + 1 << ' ';
  }
  cout << endl;
  return 0;
}
