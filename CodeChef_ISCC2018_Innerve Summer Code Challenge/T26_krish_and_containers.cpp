/**
 * author: marcavenzaid
 * created: 2018-07-22-14.03
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int l, r;
    int cont[n] = {};
    for (int i = 0; i < m; ++i) {
        cin >> l >> r;
        --l;
        --r;
        if (l > 0) {
            cont[l-1] -= 1;
        }
        cont[r] += 1;
    }
    for (int i = n-1; i > 0; --i) {
        cont[i-1] += cont[i];
    }
    sort(cont, cont+n);
    int choco_count[n] = {};
    int choco_i = cont[n-1];
    int cont_i = n-1;
    do {
        while (cont[cont_i] == choco_i) {
            ++choco_count[choco_i-1];
            --cont_i;
        }
        choco_count[choco_i-2] = choco_count[choco_i-1];
    } while (--choco_i);
    int q;
    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        cout << choco_count[k-1] << "\n";
    }
    return 0;
}
