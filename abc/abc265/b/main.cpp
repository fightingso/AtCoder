#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, m, t;

int main() {
  cin >> n >> m >> t;
  vector<ll> a(n-1), b(n, 0);
  rep(i,n-1) cin >> a[i];
  rep(i, m) {
    ll x, y;
    cin >> x >> y;
    b[x-2] = y;
  }

  rep(i, n-1) {
    if (t <= a[i]) {
      cout << "No" << endl;
      return 0;
    }
    t -= a[i];
    t += b[i];
  }
  cout << "Yes" << endl;
  return 0;
}
