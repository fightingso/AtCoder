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
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  rep(i,n) rep(j,n) {
    if (i == j) continue;
    if (s[i][j] == 'W' && s[j][i] == 'W') {cout << "incorrect" << endl; return 0;}
    if (s[i][j] == 'L' && s[j][i] == 'L') {cout << "incorrect" << endl; return 0;}
    if (s[i][j] == 'D' && s[j][i] != 'D') {cout << "incorrect" << endl; return 0;}
  }
  cout << "correct" << endl;
  return 0;
}
