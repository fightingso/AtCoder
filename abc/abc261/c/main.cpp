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
  ll n;
  cin >> n;
  map<string, int> f;
  rep(i, n) {
    string s;
    cin >> s;
    if (f[s] == 0) cout << s << endl;
    else cout << s << '(' << f[s] << ')' << endl;
    f[s]++;
  }
  return 0;
}
