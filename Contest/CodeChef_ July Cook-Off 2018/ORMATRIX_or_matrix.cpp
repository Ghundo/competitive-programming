/**
 *    author: marcavenzaid
 *    created: 2018-07-23-00.47
 */

/* Problem:
 * You are given a matrix of integers A with N rows (numbered 1 through N) and M
 * columns (numbered 1 through M). Each element of this matrix is either 0 or 1.
 *
 * A move consists of the following steps:
 *
 * • Choose two different rows r1 and r2 or two different columns c1 and c2.
 * • Apply the bitwise OR operation with the second row/column on the first
 *   row/column. Formally, if you chose two rows, this means you should change
 *   Ar1,k to Ar1,k || Ar2,k for each 1 <= k <= M; if you chose two columns,
 *   then you should change Ak,c1 to Ak,c1 || Ak,c2 for each 1 <= k <= N.
 *   For each element of the matrix, compute the minimum number of moves
 *   required to make it equal to 1 or determine that it is impossible. Note
 *   that these answers are independent, i.e. we are starting with the initial
 *   matrix for each of them.
 *
 * Input:
 * • The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * • The first line of each test case contains two space-separated integers N
 *   and M.
 * • N lines follow. For each i (1 <= i <= N), the i-th of these lines contains
 *   M integers Ai,1,Ai,2,…,Ai,M NOT separated by spaces.
 *
 * Output:
 * For each test case, print N lines. For each valid i, the i-th of these lines
 * should contain M space-separated integers; for each valid j, the j-th of
 * these integers should be the minimum number of moves required to make Ai,j
 * equal to 1, or -1 if it is impossible.
 *
 * Constraints:
 * • 1 <= T <= 100
 * • 1 <= N,M <= 1,000
 * • Ai,j E{0,1} for each valid i,j
 * • the sum of N*M for all test cases does not exceed 1,000,000
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
