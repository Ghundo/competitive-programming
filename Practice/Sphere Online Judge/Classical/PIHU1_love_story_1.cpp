/**
 * author: marcavenzaid
 * created: 2018-07-06-00.34
 */

/* Problem:
 * Rancho is in love with Pihu. So on the Valentine’s Day they decided to spend
 * time together at Assi Ghat, but Rancho, as we all know is very busy with his
 * work, so he failed. It was now Pihu’s turn to go mad with anger. But there’s
 * something which you can do.
 *
 * Rancho tells Pihu that he is a novice programmer and is generally busy in
 * solving problems at spoj. So Pihu decides to check his algorithmic skills.
 * She puts forward an array of N integers. She gives him a number P and asks if
 * he can find three (strictly three) integers Ai, Aj, Ak, (i != j != k) in the
 * array, whose sum is equal to number P, i.e.
 * Ai + Aj + Ak = P.
 * Now, sooner Rancho answers her query in YES or NO, sooner he gets a kiss.
 *
 * Input:
 * The first line of input consists of an integer T, number of test cases.
 * The second line of input consists of an integer N, denoting the size of array.
 * The third line consists of N integers A1, A2, A3, ..., AN, separated with space.
 * The fourth line consists of number P.
 *
 * Output:
 * If you find three numbers Ai, Aj, Ak, (i != j != k) in the array such that
 * Ai + Aj + Ak = P, print “YES” else print “NO” (quotes for clarification only).
 *
 * Constrains:
 * 1 <= T <= 15
 * 3 <= N <= 1000
 * 1 <= Ai <= 10^9, where 1 <= i <= N
 * 1 <= P <= 3*10^9
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        unsigned int a[n] = {};
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        sort(a, a+n);
        unsigned int p;
        cin >> p;
        bool is_yes = false;
        for (int j = 0; j < n-2; ++j) {
            for (int k = j+1; k < n-1; ++k) {
                int x = p - a[j] - a[k];
                if (binary_search(a+k+1, a+n, x)) {
                    is_yes = true;
                    break;
                }
            }
            if (is_yes) {
                break;
            }
        }
        if (is_yes) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
