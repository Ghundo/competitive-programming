/**
 * author: marcavenzaid
 * created: 2018-07-23-00.47
 */

#include <bits/stdc++.h>

using namespace std;

const int ASCII_0 = 48;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        int s_has_one = 0;
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            for (int j = 0; j < m; ++j) {
                int s_ij = s[i][j] - ASCII_0;
                s_has_one |= s_ij;
                rows[i] |= s_ij;
                cols[j] |= s_ij;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!s_has_one) {
                    cout << -1;
                } else {
                    if (s[i][j] == ASCII_0+1) {
                        cout << 0;
                    } else {
                        if (rows[i] || cols[j]) {
                            cout << 1;
                        } else {
                            cout << 2;
                        }
                    }
                }
                cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
