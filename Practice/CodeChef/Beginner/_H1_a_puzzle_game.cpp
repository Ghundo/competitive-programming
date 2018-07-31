/**
 * author: marcavenzaid
 * created: 2018-07-02-00.30
 */

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    int i = 2;
    while(i*i <= n) {
        if(n%i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int p[t][3][3];
    int i = 0;
    while(i < t) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; l++) {
                cin >> p[i][j][k];
            }
        }
        cin.ignore();
        i++;
    }

    return 0;
}
