/**
 * author: marcavenzaid
 * created: 2018-07-16-01.44
 */

#include <bits/stdc++.h>

using namespace std;

void fill_prefix_sum(string s, int n, int prefix_sum[]) {
    prefix_sum[0] = s[0];
    for (int i = 1; i < n; ++i)
        prefix_sum[i] = prefix_sum[i-1] + s[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s = "abcd";
    int n = s.length();
    int ps[n];
    fill_prefix_sum(s, n, ps);
    for (int i = 0; i < n; i++) {
        cout << ps[i] << " ";
    }
    return 0;
}
