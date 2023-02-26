#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define all(x) (x).begin(),(x).end()

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int x = 0, y = 0;
    set<pair<int, int>> visited;

    visited.insert(make_pair(x, y));

    for (int i = 0; i < N; i++) {
        char c = S[i];
        if (c == 'R') {
            x++;
        } else if (c == 'L') {
            x--;
        } else if (c == 'U') {
            y++;
        } else if (c == 'D') {
            y--;
        }
        if (visited.count(make_pair(x, y)) > 0) {
            cout << "Yes" << endl;
            return 0;
        }
        visited.insert(make_pair(x, y));
    }

    cout << "No" << endl;

    return 0;
}

