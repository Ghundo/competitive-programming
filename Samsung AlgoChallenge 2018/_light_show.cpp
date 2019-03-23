#include <bits/stdc++.h>

using namespace std;

int N, M;
int L[10];
int B[10][3];
int out[10];

const int MAX_COMB = 7;

int binary_to_decimal(vector<int> a) { 
    int dec_value = 0; 
    int base = 1; 
    for (int i = N - 1; i >= 0; i--) { 
        if (a[i] == 1) {
            dec_value += base;
        }
        base = base * 2;
    }
    return dec_value; 
}

bool is_seen(int dec, vector<int> seen) {
    if (dec == 0 || (dec > 0 && seen[dec - 1] == 1)) {
        return true;
    }
    return false;
}

vector<int> _xor(vector<int> a, int B[3], int l) {
    for (int i = 0; i < l; ++i) {
        a[B[i]] ^= 1;
    }
    return a;
}

void print(vector<int> a) {
    cout << "{"; 
    for (int j = 0; j < a.size(); ++j) {
        cout << a[j] << ", ";
    } 
    cout << "}\n";
}

void printa(int a[], int n) {
    cout << "{"; 
    for (int j = 0; j < n; ++j) {
        cout << a[j] << ", ";
    } 
    cout << "}\n";
}

vector<int> longest;
void recur(vector<int> A, vector<int> is, vector<int> seen) {
    for (int i = 0; i < M; ++i) {
        vector<int> temp_A = A;
        // cout << "temp_A: "; print(temp_A); //
        //cout << "B[" << i << "]: "; printa(B[i], L[i]); //
        temp_A = _xor(temp_A, B[i], L[i]); // switch
        //cout << "temp_A after xor: "; print(temp_A); //
        int dec = binary_to_decimal(temp_A);
        //cout << "dec: " << dec << "\n"; //
        if (!is_seen(dec, seen)) {
            cout << "temp_A: "; print(temp_A); //
            vector<int> new_seen = seen;
            new_seen[dec - 1] = 1;
            vector<int> new_is = is;
            new_is.push_back(i);
            recur(temp_A, new_is, new_seen);
        }
        //
        // cout << "is = " << is.size() << ": {";
        // for (int i = 0; i < is.size(); ++i) {
        //     cout << is[i] << ", ";
        // }
        // cout << "}\n";
        //
        if (is.size() > longest.size()) {
            longest = is;
        }
    }    
}

int solve(int N, int M, int L[10], int B[10][3], int out[]) {
    longest.clear();
    vector<int> seen(MAX_COMB, 0);
    vector<int> _A(N, 0);
    recur(_A, vector<int>(), seen);
    copy(longest.begin(), longest.end(), out);
    return longest.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> N >> M;
        for (int i = 0; i < M; ++i) {
            cin >> L[i];
            for (int j = 0; j < L[i]; ++j) {
                cin >> B[i][j];
            }
        }
        for (int i = 0; i < N; ++i) {
            out[i] = -1;
        }
        int ret = solve(N, M, L, B, out);
        cout << "ret: " << ret << "\n";
        for (int i = 0; i < ret; ++i) {
            cout << out[i] << " ";
        }
        cout << "\n";
    }    
    return 0;
}
