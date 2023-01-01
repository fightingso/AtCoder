#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, cnt = 0;
    cin >> H >> W;

    vector<vector<char>> S(H, vector<char>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S.at(i).at(j);
            if (S.at(i).at(j) == '#') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
