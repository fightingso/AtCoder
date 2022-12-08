#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    string tmp;

    vector<int> S(H), T(H);
    for (int i = 0; i < H; i++)
    {
        cin >> tmp;
        S[i] = count(tmp.cbegin(), tmp.cend(), '#');
    }
    for (int i = 0; i < H; i++)
    {
        cin >> tmp;
        T[i] = count(tmp.cbegin(), tmp.cend(), '#');
    }

    if (S == T)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
