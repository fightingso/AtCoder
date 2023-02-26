#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

const ll MOD = 998244353;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];
  vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));
  dp[0][0] = 1;
  rep(i, n) {
    dp[i + 1][0] = (dp[i][0] * 2 + dp[i][1]) % MOD;
    dp[i + 1][1] = (dp[i][0] + dp[i][1] * 2) % MOD;
    if (a[i] == b[i]) {
      dp[i + 1][0] = dp[i][0];
      dp[i + 1][1] = dp[i][1];
    }
    if (i > 0 && a[i - 1] == a[i]) {
      dp[i + 1][0] = dp[i][1];
    }
    if (i > 0 && b[i - 1] == b[i]) {
      dp[i + 1][1] = dp[i][0];
    }
  }
  cout << dp[n][1] << endl;
  return 0;
}


