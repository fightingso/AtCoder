#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S.at(i);
    }

    cout << S.at(0) << " ";
    for (int i = 1; i < N; i++) {
        cout << S.at(i) - S.at(i - 1);
        if (i != N - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
}
