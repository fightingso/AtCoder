#ifndef HIDDEN_IN_VS_CODE

// Load the library
#include <bits/stdc++.h>
using namespace std;

// Shortcut types
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vvvd = vector<vvd>;
using vc = vector<char>;
using vvc = vector<vc>;
using vvvc = vector<vvc>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;

// Define generic macros
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rrep1(i, n) for (int i = (int)(n); i > 0; i--)
#define all(x) (x).begin(), (x).end()
#define len() size()
#define print(x) cout << x << endl
#define exit(s)        \
    cout << s << endl; \
    exit(0);

#endif

int Q, T[1 << 20], X[1 << 20];

int main()
{
    cin >> Q;
    rep1 (i, Q) {cin >> T[i] >> X[i];}

    deque<int> dq;
    rep1 (i, Q)
    {
        if (T[i] == 1) {dq.push_front(X[i]);}
        else if (T[i] == 2) {dq.push_back(X[i]);}
        else {print(dq[X[i] - 1]);}
    }
}
