#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, k, h[100010], dp[100010];

int main() {
  cin >> n >> k;
  rep(i, n) cin >> h[i];
  rep(i, n) dp[i] = 1e18;
  dp[0] = 0;
  rep(i, n) {
    Rep(j, 1, k + 1) {
      if (i + j >= n) break;
      dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  cout << dp[n - 1] << endl;
  return 0;
}

