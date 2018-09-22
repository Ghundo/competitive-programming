/**
 * author: marcavenzaid
 * date created: September 22, 2018
 */

#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    string hour = s.substr(0, 2);
    bool isAM = (s.substr(8, 2) == "AM") ? true : false;
    if (isAM && hour == "12") {
        hour = "00";
    } 
    if (!isAM && hour != "12") {
        hour = to_string(stoi(hour) + 12);
    }
    return hour + ":" + s.substr(3, 2) + ":" + s.substr(6, 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << solve(s) << "\n";
    return 0;
}