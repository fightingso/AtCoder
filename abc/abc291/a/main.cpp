#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

string s;

int main() {
  cin >> s;
  int n = s.size();
  rep(i, n) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      cout << i + 1 << endl;
      return 0;
    }
  }
}
