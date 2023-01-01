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

ll N, K, L, A[1 << 18];

bool solve(ll M)
{
    ll cnt = 0, pre = 0;
    rep1(i, N)
    {
        if (A[i] - pre >= M && L - A[i] >= M)
        {
            cnt++;
            pre = A[i];
        }
    }
    if (cnt >= K)
        return true;
    return false;
}

int main()
{
    cin >> N >> L;
    cin >> K;
    rep1(i, N) cin >> A[i];

    ll left = -1, right = L + 1;
    while (right - left > 1)
    {
        ll mid = left + (right - left) / 2;
        if (solve(mid) == false)
            right = mid;
        else
            left = mid;
    }
    print(left);
    return 0;
}
