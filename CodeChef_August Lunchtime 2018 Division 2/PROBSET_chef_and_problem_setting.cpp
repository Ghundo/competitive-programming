/**
 * author: marcavenzaid
 * created: 2018-08-25-22.37
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    cin >> ti;
    while (ti--) {
        int n, m;
        cin >> n >> m;
        vector<pair<string, string>> test_cases;
        for (int i = 0; i < n; ++i) {
            string s, test;
            cin >> s >> test;
            test_cases.push_back(make_pair(s, test));
        }
        string output = "FINE";
        for (int i = 0; i < n; ++i) {
            if (test_cases[i].first.compare("correct") == 0) {
                if (test_cases[i].second.find('0') != std::string::npos) {
                    output = "INVALID";
                    break;
                }
            } else {
                if (test_cases[i].second.find('0') == std::string::npos) {
                    output = "WEAK";
                }
            }
        }
        cout << output << "\n";
    }
    return 0;
}
