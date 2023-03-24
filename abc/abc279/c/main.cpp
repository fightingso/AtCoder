#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h), t(h);
  rep(i, h) cin >> s[i];
  rep(i, h) cin >> t[i];
  vector<string> s_col(w), t_col(w);
  rep(i, w) {
    rep(j, h) {
      s_col[i] += s[j][i];
      t_col[i] += t[j][i];
    }
  }
  sort(all(s_col));
  sort(all(t_col));
  rep(i, w) {
    if (s_col[i] != t_col[i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
