/* Problem:
 * Jitendra has won a lottery of K rupees. He wants to utilize this money
 * optimally.
 * He wants to travel different cities in consecutive order with help of money
 * he won in lottery.For travelling every city, he has to pay some amount. He
 * wants to travel as many number of cities he can travel with the available
 * lottery money.
 *
 * Help Jitendra to find the maximum number of cities he can travel and the
 * remaining money.
 *
 * Input:
 * • The first line of the input contains an integer T denoting the number of
 *   test cases. The description of T test cases follows.
 * • The first line of each test case contains two space-separated integers N
 *   and K, denoting the number of cities and the lottery money respectively.
 *   The second line of each test case contains N space-separated integers
 *   denoting the cost of travelling the ith city.
 *
 * Output:
 * For each test case on new line, print two space separated integers: the
 * maximum number of city he can visit and the unused(or remaining) money.
 *
 * Constraints:
 * • 1 <= T <= 10
 * • 1 <= N <= 100000
 * • 1 <= K <= 1000000000
 * • 1 <= a[i] <= 1000000000, for each valid i
 */

/**
 *    author: marcavenzaid
 *    created: 2018-07-25-19.59
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ti;
    std::cin >> ti;
    while (ti--) {
        int n, k;
        std::cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        int max_city_visit = 0;
        int cost = 0, max_cost = 0;
        int i = 0, j = 0;
        while (j < n) {
            if (j < n && cost + a[j] <= k) {
                cost += a[j++];
            } else {
                if (j - i > max_city_visit || (j - i == max_city_visit && cost > max_cost)) {
                    max_city_visit = j - i;
                    max_cost = cost;
                }
                cost -= a[i++];
            }
        }
        std::cout << max_city_visit << " " << k - max_cost << "\n";
    }
    return 0;
}
