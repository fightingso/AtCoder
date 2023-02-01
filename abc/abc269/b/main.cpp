#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int a=1e9, b=-1e9, c=1e9, d=-1e9;
string s[10];

int main() {
  rep(i,10) cin >> s[i];
  rep(i, 10) {
    rep(j, 10) {
      if(s[i][j] == '#') {
        a = min(a, i);
        b = max(b, i);
        c = min(c, j);
        d = max(d, j);
      }
    }
  }
  cout << ++a << ' ' << ++b << "\n" << ++c << ' ' << ++d << endl;
  return 0;
}
