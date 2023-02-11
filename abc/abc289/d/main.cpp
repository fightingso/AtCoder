#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

const int MAX_N = 100000;

int n, m, x, a[MAX_N + 1], b[MAX_N + 1];
bool f[MAX_N + 1];

void dfs(int now) {
  if (now == x) {
    cout << "Yes" << endl;
    exit(0);
  }

  if (f[now]) {
    return;
  }
  f[now] = true;

  for (int i = 0; i < n; i++) {
    int next = now + a[i];
    if (next <= x) {
      dfs(next);
    }
  }
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    f[b[i]] = true;
  }
  cin >> x;

  dfs(0);

  cout << "No" << endl;
  return 0;
}

