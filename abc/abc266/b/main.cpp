#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n;

int main() {
  cin >> n;
  ll ans = n % 998244353;
  if (ans < 0) ans = 998244353 + ans;
  cout << ans << endl;
  return 0;
}
