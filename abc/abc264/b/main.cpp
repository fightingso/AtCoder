#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  int r, c;
  cin >> r >> c;
  if (max(abs(r-8), abs(c-8)) % 2) cout << "black" << endl;
  else cout << "white" << endl;
  return 0;
}
