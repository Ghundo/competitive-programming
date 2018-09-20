/**
 * author: marcavenzaid
 * created: 2018-09-21-05.07
 */

#include <bits/stdc++.h>

using namespace std;

void print_staircase(int n) {
    string s(n, ' ');
    for (int i = n-1; i >= 0; --i) {
        s[i] = '#';
        cout << s << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    print_staircase(n);
    return 0;
}
