#include <bits/stdc++.h>
using namespace std;

long long N, A, ans = 0;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A;
    ans += A;
  }
  cout << ans << endl;
  return 0;
}
