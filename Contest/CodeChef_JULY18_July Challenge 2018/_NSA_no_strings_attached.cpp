/**
 *    author: marcavenzaid
 *    created: 2018-07-08-22.54
 */

#include <bits/stdc++.h>

using namespace std;

const int ASCII_A = 97;

vector<int> unique_let(string s, int n) {
    string t = s;
    sort(t.begin(), t.end());
    vector<int> sl;
    for (int i = 0; i < 26; ++i) {
        int l = i+ASCII_A;
        if(binary_search(t.begin(), t.end(), l)) {
            sl.push_back(l);
        }
    }
    return sl;
}

void increment_less(bool seen[], int pdrop[], int x) {
    for (int i = 0; i < 26; ++i) {
        if (seen[i] && i < x) {
            pdrop[i]++;
        }
    }
}

int solve_y(string s, int n) {
    int lp[26] = {};
    int prevpi[26] = {};
    bool seen[26] = {};
    int pdrop[26] = {};
    int y = 0;
    for (int i = 0; i < n; ++i) {
        int pi = s[i] - ASCII_A;
        increment_less(seen, pdrop, pi);
        if (!seen[pi]) {
            for (int j = i+1; j < n; ++j) {
                if (s[i] < s[j]) {
                    lp[pi]++;
                }
            }
            seen[pi] = true;
            prevpi[pi] = i;
            y += lp[pi];
        } else {
            int p = lp[pi] - pdrop[pi];
            lp[pi] = p;
            y += p;
        }
        pdrop[pi] = 0;
    }
    return y;
}

int minxy(string s, int n) {
    string ts;
    int mxy = solve_y(s, n);
    vector<int> ul = unique_let(s, n);
    for (int i = 0; i < n; ++i) {
        ts = s;
        for (int j = 0; j < ul.size(); ++j) {
            int uli = ul[j];
            ts[i] = uli;
            int x = abs(s[i] - uli);
            int y = solve_y(ts, n);
            int xy = x + y;
            if (xy < mxy) {
                mxy = xy;
            }
        }
    }
    return mxy;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int n = s.length();
        int mxy = minxy(s, n);
        cout << mxy << "\n";
    }
    return 0;
}
