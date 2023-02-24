#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n;
vector<ll> h(50050);

ll dp[50050];

int main() {
  cin >> n;
  rep(i,n) cin >> h[i];
  dp[0] = 0;
  dp[1] = abs(h[1]-h[0]);
  Rep(i,2,n) {
    dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
  }
  cout << dp[n-1]<< endl;
  return 0;
}
