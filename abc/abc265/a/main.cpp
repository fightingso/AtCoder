#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll x, y, n, ans=0;

int main() {
  cin >> x >> y >> n;
  if (y > 3 * x) {
    cout << x * n << endl;
    return 0;
  }
  ans += (n / 3) * y;
  n %= 3;
  ans += x * n;
  cout << ans << endl;
  return 0;
}
