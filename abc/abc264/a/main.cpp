#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

string s = "atcoder";
ll l, r;

int main() {
  cin >> l >> r;
  cout << s.substr(l-1, r-l+1) << endl;
  return 0;
}
