#include <bits/stdc++.h>
#define intt long long

using namespace std;

intt dp[100000];

int main() {
    intt n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 4;
    dp[5] = 5;
    dp[6] = 5;
    dp[7] = 6;
    for (intt i = 8; i <= n; i++) {
        dp[i] = i;
    }
    for (intt i = 2; i <= n; i++) {
        for (intt j = 1; j < i; j++) {
                dp[i] = min (dp[i], dp[j] + dp[i - j]);
        }
        for (intt j = 2; j < i; j++) {
                if (i % j == 0) {
                    dp[i] = min (dp[i], dp[j] + dp[i / j]);
                }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
