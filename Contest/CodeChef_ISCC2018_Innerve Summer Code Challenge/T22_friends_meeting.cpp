/* Problem:
 * Shubham and Akshat are meeting after one year during their summer vacations.
 * Akshat ask for help from Shubham so that he can solve the problem given by
 * his faculty. Akshat's faculty has given a sequence of N numbers as a1,a2,…,aN
 * and asks him to find the smallest possible value of ai*aj such that it is a
 * prime number, where 1 <= i < j <= N
 *
 * Input:
 * • The first line of the input contains an integer T denoting the number of
 *   test cases.
 * • The first line of each test case contains an integer N denoting the size of
 *   a sequence.
 * • Second line of each test case contains N integers a1,a2,…,aN
 *
 * Output:
 * If it's possible to find any value of ai*aj such that it is a prime number,
 * then print the smallest value of such ai*aj, otherwise print -1.
 *
 * Constraints:
 * • 1 <= T <= 100
 * • 1 <= N <= 100
 * • 1 <= a[i] <= 100
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-19-23.27
 */

#include <bits/stdc++.h>

using namespace std;

inline bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    if (x <= 3) {
        return true;
    }
    if (x%2 == 0 || x%3 == 0) {
        return false;
    }
    for (int i = 5; i*i <= x; i = i+6) {
        if (x%i == 0 || x%(i+2) == 0) {
            return false;
        }
    }
    return true;
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
        int min_prime = -1;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 1; j < n; ++j) {
                int x = a[i] * a[j];
                if (is_prime(x)) {
                    if (min_prime == -1) {
                        min_prime = x;
                    } else {
                        if (x < min_prime) {
                            min_prime = x;
                        }
                    }
                }
            }
        }
        cout << min_prime << "\n";
    }
    return 0;
}
