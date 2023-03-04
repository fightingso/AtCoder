#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  Rep(i,1,n+1) {
    int ab = i, cd = n - i;
    ll cnt_ab = 0, cnt_cd = 0;
    for (int j = 1; j * j <= ab; j++) if (ab % j == 0) if (j * j == ab) cnt_ab++; else cnt_ab += 2;
    for (int j = 1; j * j <= cd; j++) if (cd % j == 0) if (j * j == cd) cnt_cd++; else cnt_cd += 2;
    ans += cnt_ab * cnt_cd;
  }
  cout << ans << endl;
  return 0;
}
