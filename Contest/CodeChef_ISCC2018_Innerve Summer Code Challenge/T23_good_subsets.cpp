/* Problem:
 * Devanshi is sitting with her team.She assigns a task to her teammates to
 * evaluate their problem solving skills.She has given an array containing N
 * elements as A={a1,a2,a3,…,aN}. She ask them to check whether there exists a
 * good subset or not.
 *
 * A good subset, say B is a subset which satisfies following statements:
 * 1. B is a non-empty subset
 * 2. There exists no integer x(x>1) which divides all elements of B.
 * 3. There are no elements of B which are equal to another.
 *
 * Input:
 * • The first line of the input contains an integer T denoting the number of
 *   test cases.
 * • The first line of each test case contains an integer N denoting the size of
 *   array.
 * • Second line of each test case contains N integers a1,a2,…,aN
 *
 * Output:
 * Print YES if good subset exists; otherwise, print NO for each test case on a
 * new line.
 *
 * Constraints:
 * • 1 <= T <= 100
 * • 1 <= N <= 1000
 * • 1 <= a[i] <= 100000
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-20-21.47
 */

#include <bits/stdc++.h>

using namespace std;

inline vector<int> divisors(int n) {
    vector<int> d;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n%i == 0) {
            if (n/i == i) {
                d.push_back(i);
            } else {
                d.push_back(i);
                d.push_back(n/i);
            }
        }
    }
    return d;
}

inline bool is_divisible(int x, vector<int> divs) {
    for (int i = 0; i < divs.size(); ++i) {
        if (x%divs[i] != 0) {
            return false;
        }
    }
    return true;
}

inline bool has_good_subset(int a[], int n) {
    sort(a, a+n);
    if (a[0] == 1) {
        return true;
    }
    if (a[0] == a[n-1]) {
        return false;
    }
    vector<int> min_e_divs = divisors(*min_element(a, a+n));
    min_e_divs.erase(min_e_divs.begin());
    for (int i = 0; i < n; ++i) {
        if (!is_divisible(a[i], min_e_divs)) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        bool b = has_good_subset(a, n);
        if (b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
