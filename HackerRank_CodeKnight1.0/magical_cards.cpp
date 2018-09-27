/**
 * author: marcavenzaid
 * created: 2018-08-15-00.28
 */

#include <bits/stdc++.h>

using namespace std;

void sieve_smallest_prime_factors(int spf[], int n) {
    spf[1] = 1;
    for (int i = 2; i < n; i++) {
        spf[i] = i;
    }
    for (int i = 4; i < n; i += 2) {
        spf[i] = 2;
    }
    for (int i = 3; i*i < n; i++) {
        if (spf[i] == i) {
            for (int j = i*i; j < n; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

vector<int> prime_factorization(int spf[], int x) {
    vector<int> ret;
    while (x != 1) {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}

inline int permutations_count(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    int n = 0;
    do {
        ++n;
    } while (std::next_permutation(v.begin(), v.end()));
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int spf_max = 100001;
    int spf[spf_max];
    sieve_smallest_prime_factors(spf, spf_max);
    while (t--) {
        int n;
        cin >> n;
        vector<int> v = prime_factorization(spf, n);
        cout << permutations_count(v) << "\n";
    }
    return 0;
}
