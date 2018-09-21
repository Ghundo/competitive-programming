#include <bits/stdc++.h>

using namespace std;

string solve(string s) {
    string hour = s.substr(0, 2);
    string min = s.substr(3, 2);
    string sec = s.substr(6, 2);
    bool isAM = (s.substr(8, 2) == "AM") ? true : false;
    if (isAM && hour == "12") {
        hour = "00";
    } 
    if (!isAM && hour != "12") {
        hour = to_string(stoi(hour) + 12);
    }
    return hour + ":" + min + ":" + sec;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string result = solve(s);
    cout << result << "\n";
    return 0;
}