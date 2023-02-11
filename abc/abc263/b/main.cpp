#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

ll n;
vector<ll> p;

int main() {
  cin >> n;
  p.resize(n);
  Rep(i,1,n) {cin >> p[i]; p[i]--;}
  vector<ll> dp(n,0);
  Rep(i,1,n) dp[i] = dp[p[i]] + 1;
  cout << dp[n-1] << endl;
  return 0;
}
