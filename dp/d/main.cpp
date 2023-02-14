#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, m, w[110], v[110], dp[110][100010];

int main() {
  cin >> n >> m;
  rep(i, n) cin >> w[i] >> v[i];
  rep(i, n) {
    rep(j, m + 1) {
      if (j - w[i] >= 0) dp[i + 1][j] = max(dp[i][j - w[i]] + v[i], dp[i][j]);
      else dp[i + 1][j] = dp[i][j];
    }
  }
  cout << dp[n][m] << endl;
  return 0;
}
