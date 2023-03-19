#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) {
    rep(j, w) {
      if (a[i][j] == 0) cout << ".";
      else cout << (char)('A' + a[i][j] - 1);
    }
    cout << endl;
  }
  return 0;
}
