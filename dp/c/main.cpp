#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, a[100010], b[100010], c[100010], dp[100010][3];

int main() {
  cin >> n;
  rep(i, n) cin >> a[i] >> b[i] >> c[i];
  rep(i, n) {
    dp[i + 1][0] = max(dp[i][1] + a[i], dp[i][2] + a[i]);
    dp[i + 1][1] = max(dp[i][0] + b[i], dp[i][2] + b[i]);
    dp[i + 1][2] = max(dp[i][0] + c[i], dp[i][1] + c[i]);
  }
  cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
  return 0;
}
