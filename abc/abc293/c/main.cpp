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
  int a[11][11];

  cin >> h >> w;
  Rep(i, 1, h+1) Rep(j, 1, w+1) cin >> a[i][j];

  int p[h+w-1], l = h+w-2, ans = 0;
  Rep(i, 1, l+1) if(i > w-1) p[i] = 1; else p[i] = 0;

  do{
    int x = 1, y = 1;
    set<int> s;
    s.insert(a[1][1]);
    for(int i = 1; i <= l; i++){
      if(p[i]) y++;
      else x++;
      s.insert(a[x][y]);
    }
    if(s.size() == l+1) ans++;
  } while(next_permutation(p+1, p+l+1));

  cout << ans << endl;
  return 0;
}
