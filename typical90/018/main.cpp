#ifndef HIDDEN_IN_VS_CODE

// Load the library
#include <bits/stdc++.h>
using namespace std;

// Shortcut types
using ll = long long;
using ld = long double;
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

ll Q;
ld T, L , X, Y, E;
ld pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986;

ld query(ld I) {
    ld x = 0;
    ld y = -(L / 2) * sin(I / T * 2 * pi);
    ld z = (L / 2) - (L / 2) * cos(I / T * 2 * pi);
    ld d1 = sqrt((x - X) * (x - X) + (y - Y) * (y - Y));
    ld d2 = z;
    ld angle = atan2(d2, d1);
    return angle * 180L / pi;
}

int main() {
    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;
    rep1 (i, Q) {
        cin >> E;
        ld ans = query(E);
        printf("%.12Lf\n", ans);
    }
}
