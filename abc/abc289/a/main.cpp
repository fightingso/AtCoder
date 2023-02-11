#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
  string s;
  cin >> s;
  int n = s.size();
  rep(i, n) {
    if(s[i] == '1') s[i] = '0';
    else s[i] = '1';
  }
  cout << s << endl;
  return 0;
}
