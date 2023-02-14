#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n, h[100010], dp[100010];

int main() {
  cin >> n;
  rep(i, n) cin >> h[i];
  dp[0] = 0;
  rep(i, n+1) {
    if (i == 0) continue;
    if (i == 1) {
      dp[i] = abs(h[i] - h[i-1]);
      continue;
    }
    dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]),
                dp[i-2] + abs(h[i] - h[i-2]));
  }
  cout << dp[n-1] << endl;
  return 0;
}
