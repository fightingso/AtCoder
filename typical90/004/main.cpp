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
  vector<int> row(h), col(w);
  rep(i, h) rep(j, w) row[i] += a[i][j];
  rep(i, w) rep(j, h) col[i] += a[j][i];
  rep(i, h) {
    rep(j, w) {
      cout << row[i] + col[j] - a[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
