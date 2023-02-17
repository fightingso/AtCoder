#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll rem = t % accumulate(all(a), 0LL);
  rep(i, n) {
    if (rem >= a[i]) rem -= a[i];
    else {
      cout << i + 1 << ' ' << rem << endl;
      return 0;
    }
  }
}
