/* Problem:
 * Chef recently graduated Computer Science in university, so he was looking for
 * a job. He applied for several job offers, but he eventually settled for a
 * software engineering job at ShareChat. Chef was very enthusiastic about his
 * new job and the first mission assigned to him was to implement a message
 * encoding feature to ensure the chat is private and secure.
 *
 * Chef has a message, which is a string S with length N containing only
 * lowercase English letters. It should be encoded in two steps as follows:
 *
 * • Swap the first and second character of the string S, then swap the 3rd and
 *   4th character, then the 5th and 6th character and so on. If the length of S
 *   is odd, the last character should not be swapped with any other.
 * • Replace each occurrence of the letter 'a' in the message obtained after the
 *   first step by the letter 'z', each occurrence of 'b' by 'y', each
 *   occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message
 *   obtained after the first step by 'a'.
 *
 * The string produced in the second step is the encoded message. Help Chef and
 * find this message.
 *
 * Input:
 * • The first line of the input contains a single integer T denoting the number
 *   of test cases. The description of T test cases follows.
 * • The first line of each test case contains a single integer N.
 * • The second line contains the message string S.
 *
 * Output:
 * For each test case, print a single line containing one string - the encoded
 * message.
 *
 * Constraints:
 * • 1 <= T <= 1,000
 * • 1 <= N <= 100
 * • |S| = N
 * • S contains only lowercase English letters
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-23-00.22
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int offset = 0;
        if (s.length()%2 != 0) {
            offset = 1;
        }
        for (int i = 0; i < s.length()-offset; i=i+2) {
            swap(s[i], s[i+1]);
        }
        for (int i = 0; i < s.length(); ++i) {
            s[i] = 122 - (s[i] - 97 + 122) % 122;
        }
        cout << s << "\n";
    }
    return 0;
}
