#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

struct UnionFind {
  vector<int> par;

  UnionFind(int n) : par(n) {
    for (int i = 0; i < n; i++) par[i] = i;
  }

  int root(int x) {
    if (par[x] == x) return x;
    return par[x] = root(par[x]);
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);
    if (x == y) return;
    par[x] = y;
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  vector<int> u(m), v(m);
  rep(i, m) {
    cin >> u[i] >> v[i];
    u[i]--, v[i]--;
    uf.unite(u[i], v[i]);
  }
  set<int> roots;
  rep(i, n) roots.insert(uf.root(i));
  map<int, int> cnt;
  rep(i, n) cnt[uf.root(i)]++;
  rep(i, m) {
    int r = uf.root(u[i]);
    cnt[r]--;
  }
  for (auto p : cnt) {
    if (p.second != 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
