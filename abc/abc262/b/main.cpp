#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    a[x].push_back(y);
    a[y].push_back(x);
  }
  int cnt = 0;
  rep(i, n) {
    Rep(j, i + 1, n) {
      Rep(k, j + 1, n) {
        if (find(all(a[i]), j) != a[i].end() && find(all(a[i]), k) != a[i].end() && find(all(a[j]), k) != a[j].end()) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
